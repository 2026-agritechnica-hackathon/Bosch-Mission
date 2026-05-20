/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.sdk.test;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.StringWriter;
import java.util.Properties;
import java.util.Timer;
import java.util.HashSet;
import java.util.Set;
import java.util.Arrays;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.transform.Transformer;
import javax.xml.transform.TransformerFactory;
import javax.xml.transform.dom.DOMSource;
import javax.xml.transform.stream.StreamResult;

import com.bosch.fsp.logger.FCALLogs;
import com.bosch.fsp.runtime.util.internal.FeatureConfig;
import org.eclipse.paho.client.mqttv3.IMqttDeliveryToken;
import org.eclipse.paho.client.mqttv3.MqttCallback;
import org.eclipse.paho.client.mqttv3.MqttCallbackExtended;
import org.eclipse.paho.client.mqttv3.MqttAsyncClient;
import org.eclipse.paho.client.mqttv3.IMqttToken;
import org.eclipse.paho.client.mqttv3.MqttConnectOptions;
import org.eclipse.paho.client.mqttv3.MqttException;
import org.eclipse.paho.client.mqttv3.MqttMessage;
import org.eclipse.paho.client.mqttv3.persist.MemoryPersistence;
import com.google.gson.JsonObject;
import com.google.gson.JsonArray;
import com.google.gson.Gson;
import org.w3c.dom.Document;
import org.w3c.dom.Node;

import java.util.logging.Level;
import com.bosch.nevonex.common.impl.AbsolutePosition;
import com.bosch.nevonex.sdk.test.TestCustomUI; 

public class TestFilClient implements MqttCallback, MqttCallbackExtended {
    
  /**
   *
   */
  public static final String FCAL_F = "fek/#";
  /**
   *
   */
  public static final String TOPIC_CREATION = "fek/0/";
  
  
  public static String payload = "";
  
  
  public static final Set<String> interfacesSet = new HashSet<>(Arrays.asList(new String[] {"GPS_TC", "Implement", "ISOPGN"}));
   /**
   * <!-- begin-user-doc --> <!-- end-user-doc -->
   *
   * @generated
   */
  protected TestFilClient() {
    super();

    try {
      init();
    }
    catch (MqttException e) {
      e.printStackTrace();
    }
  }
    
    private String broker = "tcp://localhost:1883";
    
    private static TestFilClient factory;
    
    static {
        factory = new TestFilClient();
    }
    
    private MqttAsyncClient client;
    private final String[] topicArray = { FCAL_F };
    
    /**
     * @throws MqttException
     */
    private void init() throws MqttException {
    
        Properties pros = new Properties();
        FileInputStream inStream = null;
        try {
          File file = new File("./connection.props");
          if (file.exists()) {
            inStream = new FileInputStream(file);
            pros.load(inStream);
          }
        }
        catch (Exception e) {
			  FCALLogs.getInstance().log.info("Exception while reading the connection properties. " + e.getMessage());
        }
        finally {
          if (inStream != null) {
            try {
              inStream.close();
            }
            catch (IOException e) {
              // Ignore exception
            }
          }
        }
    
        this.broker = pros.getProperty("broker");
        if (this.broker == null) {
          this.broker = "tcp://localhost:1883";
        }
        this.client = new MqttAsyncClient(this.broker, String.valueOf(System.nanoTime()), new MemoryPersistence());
    
        IMqttToken token = this.client.connect(createConnectionOptions());
        token.waitForCompletion((long) 60 * 1000); // wait for 60 s = 1 min
        this.client.setCallback(this);
        this.client.subscribe(this.topicArray, new int[topicArray.length]);
    }
    
    private MqttConnectOptions createConnectionOptions() {
        MqttConnectOptions connOpts = new MqttConnectOptions();
        connOpts.setMaxInflight(1000);
        connOpts.setCleanSession(true); // no persistent session
        connOpts.setKeepAliveInterval(1000);
        connOpts.setAutomaticReconnect(true);
        return connOpts;
    }
    
    public static synchronized TestFilClient getInstance() {
        return factory;
    }
    
    /**
     * {@inheritDoc}
     */
    @Override
    public void connectionLost(final Throwable arg0) {
		FCALLogs.getInstance().log.info("Test FIl Client message broker connection is lost. Trying to re-connect.");
    }

    /**
     * {@inheritDoc}
     */
    @Override
    public void deliveryComplete(final IMqttDeliveryToken arg0) {
        // Nothing to implement

    }
    
    	@Override
	public void connectComplete(boolean reconnect, String serverUrl) {
		if (reconnect) {
				FCALLogs.getInstance().log.info("Test FIl Client message broker connection established again.");
			try {
	        this.client.subscribe(this.topicArray, new int[topicArray.length]);
			} catch (MqttException e) {
			  FCALLogs.getInstance().log.error("Exception while sunscribing test fil client topics to the broker after re-connection. " + e.getMessage());
			}
		}
	}
    

    /**
     * {@inheritDoc}
     */
    @Override
    public void messageArrived(final String arg0, final MqttMessage arg1) throws Exception {
        payload = arg1.toString();
    }

    /**
     * @param string
     */
    public void publish(final String string, final String payload, final int qos, final boolean retained)
            throws Exception {
        this.client.publish(string, payload.getBytes(), qos, retained);
    }

    /**
     * @param string
     */
    public void publish(final String string, final String payload) throws Exception {
        this.client.publish(string, new MqttMessage(payload.getBytes()));
    } 

    
    public void publishGPS_TCactive_TC_GPS_source(String interfaceAddress, Object value, String index, String parentIndex) throws Exception {
        String address = interfaceAddress.split("/")[1];
        JsonObject active_TC_GPS_source = new JsonObject();
        if (value instanceof AbsolutePosition) {
            AbsolutePosition gpsposition = (AbsolutePosition) value;
            JsonArray gps = new JsonArray();
            gps.add(gpsposition.getLongitude());
            gps.add(gpsposition.getLatitude());
            active_TC_GPS_source.add(index, gps);
        } else if (value instanceof com.bosch.nevonex.types.IArrayType) {
	        	Object[] values = ((com.bosch.nevonex.types.IArrayType) value).getArrayValues();
	        	active_TC_GPS_source.add(index,  new Gson().toJsonTree(values, Object.class));
        } else {
            active_TC_GPS_source.add(index, new Gson().toJsonTree(value, Object.class));
        }
        JsonObject gps_tc = new JsonObject();
        gps_tc.add("gps_tc", active_TC_GPS_source);     
        JsonObject root = new JsonObject();
        root.add("PL", gps_tc);
        root.addProperty("TS", System.currentTimeMillis());
        publish("fek/" + address, root.toString(), 2, false);
        FCALLogs.getInstance().log.info("publish to fek/" + address + " Payload : " + root.toString());
    }
    
    public void publishGPS_TCpositionofGpsSensor(String interfaceAddress, Object value, String index, String parentIndex) throws Exception {
        String address = interfaceAddress.split("/")[1];
        JsonObject positionofGpsSensor = new JsonObject();
        if (value instanceof AbsolutePosition) {
            AbsolutePosition gpsposition = (AbsolutePosition) value;
            JsonArray gps = new JsonArray();
            gps.add(gpsposition.getLongitude());
            gps.add(gpsposition.getLatitude());
            positionofGpsSensor.add(index, gps);
        } else if (value instanceof com.bosch.nevonex.types.IArrayType) {
	        	Object[] values = ((com.bosch.nevonex.types.IArrayType) value).getArrayValues();
	        	positionofGpsSensor.add(index,  new Gson().toJsonTree(values, Object.class));
        } else {
            positionofGpsSensor.add(index, new Gson().toJsonTree(value, Object.class));
        }
        JsonObject gps_tc = new JsonObject();
        gps_tc.add("gps_tc", positionofGpsSensor);     
        JsonObject root = new JsonObject();
        root.add("PL", gps_tc);
        root.addProperty("TS", System.currentTimeMillis());
        publish("fek/" + address, root.toString(), 2, false);
        FCALLogs.getInstance().log.info("publish to fek/" + address + " Payload : " + root.toString());
    }
    
    public void publishGPS_TCtcGpsInfo(String interfaceAddress, Object value, String index, String parentIndex) throws Exception {
        String address = interfaceAddress.split("/")[1];
        JsonObject tcGpsInfo = new JsonObject();
        if (value instanceof AbsolutePosition) {
            AbsolutePosition gpsposition = (AbsolutePosition) value;
            JsonArray gps = new JsonArray();
            gps.add(gpsposition.getLongitude());
            gps.add(gpsposition.getLatitude());
            tcGpsInfo.add(index, gps);
        } else if (value instanceof com.bosch.nevonex.types.IArrayType) {
	        	Object[] values = ((com.bosch.nevonex.types.IArrayType) value).getArrayValues();
	        	tcGpsInfo.add(index,  new Gson().toJsonTree(values, Object.class));
        } else {
            tcGpsInfo.add(index, new Gson().toJsonTree(value, Object.class));
        }
        JsonObject gps_tc = new JsonObject();
        gps_tc.add("gps_tc", tcGpsInfo);     
        JsonObject root = new JsonObject();
        root.add("PL", gps_tc);
        root.addProperty("TS", System.currentTimeMillis());
        publish("fek/" + address, root.toString(), 2, false);
        FCALLogs.getInstance().log.info("publish to fek/" + address + " Payload : " + root.toString());
    }
    
    public void publishImplementlifetimeWorkingHours(String interfaceAddress, Object value, String index, String parentIndex) throws Exception {
        String address = interfaceAddress.split("/")[1];
        JsonObject lifetimeWorkingHours = new JsonObject();
        if (value instanceof AbsolutePosition) {
            AbsolutePosition gpsposition = (AbsolutePosition) value;
            JsonArray gps = new JsonArray();
            gps.add(gpsposition.getLongitude());
            gps.add(gpsposition.getLatitude());
            lifetimeWorkingHours.add(index, gps);
        } else if (value instanceof com.bosch.nevonex.types.IArrayType) {
	        	Object[] values = ((com.bosch.nevonex.types.IArrayType) value).getArrayValues();
	        	lifetimeWorkingHours.add(index,  new Gson().toJsonTree(values, Object.class));
        } else {
            lifetimeWorkingHours.add(index, new Gson().toJsonTree(value, Object.class));
        }
        JsonObject implement = new JsonObject();
        implement.add("implement", lifetimeWorkingHours);     
        JsonObject root = new JsonObject();
        root.add("PL", implement);
        root.addProperty("TS", System.currentTimeMillis());
        publish("fek/" + address, root.toString(), 2, false);
        FCALLogs.getInstance().log.info("publish to fek/" + address + " Payload : " + root.toString());
    }
    
    public void publishISOPGNaccpedPos1(String interfaceAddress, Object value, String index, String parentIndex) throws Exception {
        String address = interfaceAddress.split("/")[1];
        JsonObject accpedPos1 = new JsonObject();
        if (value instanceof AbsolutePosition) {
            AbsolutePosition gpsposition = (AbsolutePosition) value;
            JsonArray gps = new JsonArray();
            gps.add(gpsposition.getLongitude());
            gps.add(gpsposition.getLatitude());
            accpedPos1.add(index, gps);
        } else if (value instanceof com.bosch.nevonex.types.IArrayType) {
	        	Object[] values = ((com.bosch.nevonex.types.IArrayType) value).getArrayValues();
	        	accpedPos1.add(index,  new Gson().toJsonTree(values, Object.class));
        } else {
            accpedPos1.add(index, new Gson().toJsonTree(value, Object.class));
        }
        JsonObject isopgn = new JsonObject();
        isopgn.add("isopgn", accpedPos1);     
        JsonObject root = new JsonObject();
        root.add("PL", isopgn);
        root.addProperty("TS", System.currentTimeMillis());
        publish("fek/" + address, root.toString(), 2, false);
        FCALLogs.getInstance().log.info("publish to fek/" + address + " Payload : " + root.toString());
    }
    
    public void publishISOPGNambAirt(String interfaceAddress, Object value, String index, String parentIndex) throws Exception {
        String address = interfaceAddress.split("/")[1];
        JsonObject ambAirt = new JsonObject();
        if (value instanceof AbsolutePosition) {
            AbsolutePosition gpsposition = (AbsolutePosition) value;
            JsonArray gps = new JsonArray();
            gps.add(gpsposition.getLongitude());
            gps.add(gpsposition.getLatitude());
            ambAirt.add(index, gps);
        } else if (value instanceof com.bosch.nevonex.types.IArrayType) {
	        	Object[] values = ((com.bosch.nevonex.types.IArrayType) value).getArrayValues();
	        	ambAirt.add(index,  new Gson().toJsonTree(values, Object.class));
        } else {
            ambAirt.add(index, new Gson().toJsonTree(value, Object.class));
        }
        JsonObject isopgn = new JsonObject();
        isopgn.add("isopgn", ambAirt);     
        JsonObject root = new JsonObject();
        root.add("PL", isopgn);
        root.addProperty("TS", System.currentTimeMillis());
        publish("fek/" + address, root.toString(), 2, false);
        FCALLogs.getInstance().log.info("publish to fek/" + address + " Payload : " + root.toString());
    }
    
    public void publishISOPGNbrkPedPos(String interfaceAddress, Object value, String index, String parentIndex) throws Exception {
        String address = interfaceAddress.split("/")[1];
        JsonObject brkPedPos = new JsonObject();
        if (value instanceof AbsolutePosition) {
            AbsolutePosition gpsposition = (AbsolutePosition) value;
            JsonArray gps = new JsonArray();
            gps.add(gpsposition.getLongitude());
            gps.add(gpsposition.getLatitude());
            brkPedPos.add(index, gps);
        } else if (value instanceof com.bosch.nevonex.types.IArrayType) {
	        	Object[] values = ((com.bosch.nevonex.types.IArrayType) value).getArrayValues();
	        	brkPedPos.add(index,  new Gson().toJsonTree(values, Object.class));
        } else {
            brkPedPos.add(index, new Gson().toJsonTree(value, Object.class));
        }
        JsonObject isopgn = new JsonObject();
        isopgn.add("isopgn", brkPedPos);     
        JsonObject root = new JsonObject();
        root.add("PL", isopgn);
        root.addProperty("TS", System.currentTimeMillis());
        publish("fek/" + address, root.toString(), 2, false);
        FCALLogs.getInstance().log.info("publish to fek/" + address + " Payload : " + root.toString());
    }
    
    public void publishISOPGNengFuRatePerTime(String interfaceAddress, Object value, String index, String parentIndex) throws Exception {
        String address = interfaceAddress.split("/")[1];
        JsonObject engFuRatePerTime = new JsonObject();
        if (value instanceof AbsolutePosition) {
            AbsolutePosition gpsposition = (AbsolutePosition) value;
            JsonArray gps = new JsonArray();
            gps.add(gpsposition.getLongitude());
            gps.add(gpsposition.getLatitude());
            engFuRatePerTime.add(index, gps);
        } else if (value instanceof com.bosch.nevonex.types.IArrayType) {
	        	Object[] values = ((com.bosch.nevonex.types.IArrayType) value).getArrayValues();
	        	engFuRatePerTime.add(index,  new Gson().toJsonTree(values, Object.class));
        } else {
            engFuRatePerTime.add(index, new Gson().toJsonTree(value, Object.class));
        }
        JsonObject isopgn = new JsonObject();
        isopgn.add("isopgn", engFuRatePerTime);     
        JsonObject root = new JsonObject();
        root.add("PL", isopgn);
        root.addProperty("TS", System.currentTimeMillis());
        publish("fek/" + address, root.toString(), 2, false);
        FCALLogs.getInstance().log.info("publish to fek/" + address + " Payload : " + root.toString());
    }
    
    public void publishISOPGNengSpd(String interfaceAddress, Object value, String index, String parentIndex) throws Exception {
        String address = interfaceAddress.split("/")[1];
        JsonObject engSpd = new JsonObject();
        if (value instanceof AbsolutePosition) {
            AbsolutePosition gpsposition = (AbsolutePosition) value;
            JsonArray gps = new JsonArray();
            gps.add(gpsposition.getLongitude());
            gps.add(gpsposition.getLatitude());
            engSpd.add(index, gps);
        } else if (value instanceof com.bosch.nevonex.types.IArrayType) {
	        	Object[] values = ((com.bosch.nevonex.types.IArrayType) value).getArrayValues();
	        	engSpd.add(index,  new Gson().toJsonTree(values, Object.class));
        } else {
            engSpd.add(index, new Gson().toJsonTree(value, Object.class));
        }
        JsonObject isopgn = new JsonObject();
        isopgn.add("isopgn", engSpd);     
        JsonObject root = new JsonObject();
        root.add("PL", isopgn);
        root.addProperty("TS", System.currentTimeMillis());
        publish("fek/" + address, root.toString(), 2, false);
        FCALLogs.getInstance().log.info("publish to fek/" + address + " Payload : " + root.toString());
    }
    
    public void publishISOPGNengTotOperHrs(String interfaceAddress, Object value, String index, String parentIndex) throws Exception {
        String address = interfaceAddress.split("/")[1];
        JsonObject engTotOperHrs = new JsonObject();
        if (value instanceof AbsolutePosition) {
            AbsolutePosition gpsposition = (AbsolutePosition) value;
            JsonArray gps = new JsonArray();
            gps.add(gpsposition.getLongitude());
            gps.add(gpsposition.getLatitude());
            engTotOperHrs.add(index, gps);
        } else if (value instanceof com.bosch.nevonex.types.IArrayType) {
	        	Object[] values = ((com.bosch.nevonex.types.IArrayType) value).getArrayValues();
	        	engTotOperHrs.add(index,  new Gson().toJsonTree(values, Object.class));
        } else {
            engTotOperHrs.add(index, new Gson().toJsonTree(value, Object.class));
        }
        JsonObject isopgn = new JsonObject();
        isopgn.add("isopgn", engTotOperHrs);     
        JsonObject root = new JsonObject();
        root.add("PL", isopgn);
        root.addProperty("TS", System.currentTimeMillis());
        publish("fek/" + address, root.toString(), 2, false);
        FCALLogs.getInstance().log.info("publish to fek/" + address + " Payload : " + root.toString());
    }
    
    public void publishISOPGNfuLvlPer(String interfaceAddress, Object value, String index, String parentIndex) throws Exception {
        String address = interfaceAddress.split("/")[1];
        JsonObject fuLvlPer = new JsonObject();
        if (value instanceof AbsolutePosition) {
            AbsolutePosition gpsposition = (AbsolutePosition) value;
            JsonArray gps = new JsonArray();
            gps.add(gpsposition.getLongitude());
            gps.add(gpsposition.getLatitude());
            fuLvlPer.add(index, gps);
        } else if (value instanceof com.bosch.nevonex.types.IArrayType) {
	        	Object[] values = ((com.bosch.nevonex.types.IArrayType) value).getArrayValues();
	        	fuLvlPer.add(index,  new Gson().toJsonTree(values, Object.class));
        } else {
            fuLvlPer.add(index, new Gson().toJsonTree(value, Object.class));
        }
        JsonObject isopgn = new JsonObject();
        isopgn.add("isopgn", fuLvlPer);     
        JsonObject root = new JsonObject();
        root.add("PL", isopgn);
        root.addProperty("TS", System.currentTimeMillis());
        publish("fek/" + address, root.toString(), 2, false);
        FCALLogs.getInstance().log.info("publish to fek/" + address + " Payload : " + root.toString());
    }
    
    public void publishISOPGNfuLvlPer2(String interfaceAddress, Object value, String index, String parentIndex) throws Exception {
        String address = interfaceAddress.split("/")[1];
        JsonObject fuLvlPer2 = new JsonObject();
        if (value instanceof AbsolutePosition) {
            AbsolutePosition gpsposition = (AbsolutePosition) value;
            JsonArray gps = new JsonArray();
            gps.add(gpsposition.getLongitude());
            gps.add(gpsposition.getLatitude());
            fuLvlPer2.add(index, gps);
        } else if (value instanceof com.bosch.nevonex.types.IArrayType) {
	        	Object[] values = ((com.bosch.nevonex.types.IArrayType) value).getArrayValues();
	        	fuLvlPer2.add(index,  new Gson().toJsonTree(values, Object.class));
        } else {
            fuLvlPer2.add(index, new Gson().toJsonTree(value, Object.class));
        }
        JsonObject isopgn = new JsonObject();
        isopgn.add("isopgn", fuLvlPer2);     
        JsonObject root = new JsonObject();
        root.add("PL", isopgn);
        root.addProperty("TS", System.currentTimeMillis());
        publish("fek/" + address, root.toString(), 2, false);
        FCALLogs.getInstance().log.info("publish to fek/" + address + " Payload : " + root.toString());
    }
    
    public void publishISOPGNgndBasdMacSpd(String interfaceAddress, Object value, String index, String parentIndex) throws Exception {
        String address = interfaceAddress.split("/")[1];
        JsonObject gndBasdMacSpd = new JsonObject();
        if (value instanceof AbsolutePosition) {
            AbsolutePosition gpsposition = (AbsolutePosition) value;
            JsonArray gps = new JsonArray();
            gps.add(gpsposition.getLongitude());
            gps.add(gpsposition.getLatitude());
            gndBasdMacSpd.add(index, gps);
        } else if (value instanceof com.bosch.nevonex.types.IArrayType) {
	        	Object[] values = ((com.bosch.nevonex.types.IArrayType) value).getArrayValues();
	        	gndBasdMacSpd.add(index,  new Gson().toJsonTree(values, Object.class));
        } else {
            gndBasdMacSpd.add(index, new Gson().toJsonTree(value, Object.class));
        }
        JsonObject isopgn = new JsonObject();
        isopgn.add("isopgn", gndBasdMacSpd);     
        JsonObject root = new JsonObject();
        root.add("PL", isopgn);
        root.addProperty("TS", System.currentTimeMillis());
        publish("fek/" + address, root.toString(), 2, false);
        FCALLogs.getInstance().log.info("publish to fek/" + address + " Payload : " + root.toString());
    }
    
    public void publishISOPGNtachoVehSpd(String interfaceAddress, Object value, String index, String parentIndex) throws Exception {
        String address = interfaceAddress.split("/")[1];
        JsonObject tachoVehSpd = new JsonObject();
        if (value instanceof AbsolutePosition) {
            AbsolutePosition gpsposition = (AbsolutePosition) value;
            JsonArray gps = new JsonArray();
            gps.add(gpsposition.getLongitude());
            gps.add(gpsposition.getLatitude());
            tachoVehSpd.add(index, gps);
        } else if (value instanceof com.bosch.nevonex.types.IArrayType) {
	        	Object[] values = ((com.bosch.nevonex.types.IArrayType) value).getArrayValues();
	        	tachoVehSpd.add(index,  new Gson().toJsonTree(values, Object.class));
        } else {
            tachoVehSpd.add(index, new Gson().toJsonTree(value, Object.class));
        }
        JsonObject isopgn = new JsonObject();
        isopgn.add("isopgn", tachoVehSpd);     
        JsonObject root = new JsonObject();
        root.add("PL", isopgn);
        root.addProperty("TS", System.currentTimeMillis());
        publish("fek/" + address, root.toString(), 2, false);
        FCALLogs.getInstance().log.info("publish to fek/" + address + " Payload : " + root.toString());
    }
    
    public void publishISOPGNtotalVehDist(String interfaceAddress, Object value, String index, String parentIndex) throws Exception {
        String address = interfaceAddress.split("/")[1];
        JsonObject totalVehDist = new JsonObject();
        if (value instanceof AbsolutePosition) {
            AbsolutePosition gpsposition = (AbsolutePosition) value;
            JsonArray gps = new JsonArray();
            gps.add(gpsposition.getLongitude());
            gps.add(gpsposition.getLatitude());
            totalVehDist.add(index, gps);
        } else if (value instanceof com.bosch.nevonex.types.IArrayType) {
	        	Object[] values = ((com.bosch.nevonex.types.IArrayType) value).getArrayValues();
	        	totalVehDist.add(index,  new Gson().toJsonTree(values, Object.class));
        } else {
            totalVehDist.add(index, new Gson().toJsonTree(value, Object.class));
        }
        JsonObject isopgn = new JsonObject();
        isopgn.add("isopgn", totalVehDist);     
        JsonObject root = new JsonObject();
        root.add("PL", isopgn);
        root.addProperty("TS", System.currentTimeMillis());
        publish("fek/" + address, root.toString(), 2, false);
        FCALLogs.getInstance().log.info("publish to fek/" + address + " Payload : " + root.toString());
    }
    
    public void publishISOPGNtotVehHrs(String interfaceAddress, Object value, String index, String parentIndex) throws Exception {
        String address = interfaceAddress.split("/")[1];
        JsonObject totVehHrs = new JsonObject();
        if (value instanceof AbsolutePosition) {
            AbsolutePosition gpsposition = (AbsolutePosition) value;
            JsonArray gps = new JsonArray();
            gps.add(gpsposition.getLongitude());
            gps.add(gpsposition.getLatitude());
            totVehHrs.add(index, gps);
        } else if (value instanceof com.bosch.nevonex.types.IArrayType) {
	        	Object[] values = ((com.bosch.nevonex.types.IArrayType) value).getArrayValues();
	        	totVehHrs.add(index,  new Gson().toJsonTree(values, Object.class));
        } else {
            totVehHrs.add(index, new Gson().toJsonTree(value, Object.class));
        }
        JsonObject isopgn = new JsonObject();
        isopgn.add("isopgn", totVehHrs);     
        JsonObject root = new JsonObject();
        root.add("PL", isopgn);
        root.addProperty("TS", System.currentTimeMillis());
        publish("fek/" + address, root.toString(), 2, false);
        FCALLogs.getInstance().log.info("publish to fek/" + address + " Payload : " + root.toString());
    }
    
    public void publishISOPGNwhlBasdMacSpd(String interfaceAddress, Object value, String index, String parentIndex) throws Exception {
        String address = interfaceAddress.split("/")[1];
        JsonObject whlBasdMacSpd = new JsonObject();
        if (value instanceof AbsolutePosition) {
            AbsolutePosition gpsposition = (AbsolutePosition) value;
            JsonArray gps = new JsonArray();
            gps.add(gpsposition.getLongitude());
            gps.add(gpsposition.getLatitude());
            whlBasdMacSpd.add(index, gps);
        } else if (value instanceof com.bosch.nevonex.types.IArrayType) {
	        	Object[] values = ((com.bosch.nevonex.types.IArrayType) value).getArrayValues();
	        	whlBasdMacSpd.add(index,  new Gson().toJsonTree(values, Object.class));
        } else {
            whlBasdMacSpd.add(index, new Gson().toJsonTree(value, Object.class));
        }
        JsonObject isopgn = new JsonObject();
        isopgn.add("isopgn", whlBasdMacSpd);     
        JsonObject root = new JsonObject();
        root.add("PL", isopgn);
        root.addProperty("TS", System.currentTimeMillis());
        publish("fek/" + address, root.toString(), 2, false);
        FCALLogs.getInstance().log.info("publish to fek/" + address + " Payload : " + root.toString());
    }
    
    
    public void publishValue(String interfaceAdress, Object value, String index, String parentIndex) throws Exception {
        switch (interfaceAdress) {
        case "GPS_TC/3954":
           factory.publishGPS_TCactive_TC_GPS_source(interfaceAdress, value, index, parentIndex);
           break;
        case "GPS_TC/123":
           factory.publishGPS_TCpositionofGpsSensor(interfaceAdress, value, index, parentIndex);
           break;
        case "GPS_TC/3904":
           factory.publishGPS_TCtcGpsInfo(interfaceAdress, value, index, parentIndex);
           break;
        case "Implement/350":
           factory.publishImplementlifetimeWorkingHours(interfaceAdress, value, index, parentIndex);
           break;
        case "ISOPGN/215":
           factory.publishISOPGNaccpedPos1(interfaceAdress, value, index, parentIndex);
           break;
        case "ISOPGN/306":
           factory.publishISOPGNambAirt(interfaceAdress, value, index, parentIndex);
           break;
        case "ISOPGN/9336":
           factory.publishISOPGNbrkPedPos(interfaceAdress, value, index, parentIndex);
           break;
        case "ISOPGN/294":
           factory.publishISOPGNengFuRatePerTime(interfaceAdress, value, index, parentIndex);
           break;
        case "ISOPGN/224":
           factory.publishISOPGNengSpd(interfaceAdress, value, index, parentIndex);
           break;
        case "ISOPGN/273":
           factory.publishISOPGNengTotOperHrs(interfaceAdress, value, index, parentIndex);
           break;
        case "ISOPGN/314":
           factory.publishISOPGNfuLvlPer(interfaceAdress, value, index, parentIndex);
           break;
        case "ISOPGN/9173":
           factory.publishISOPGNfuLvlPer2(interfaceAdress, value, index, parentIndex);
           break;
        case "ISOPGN/267":
           factory.publishISOPGNgndBasdMacSpd(interfaceAdress, value, index, parentIndex);
           break;
        case "ISOPGN/8744":
           factory.publishISOPGNtachoVehSpd(interfaceAdress, value, index, parentIndex);
           break;
        case "ISOPGN/8746":
           factory.publishISOPGNtotalVehDist(interfaceAdress, value, index, parentIndex);
           break;
        case "ISOPGN/276":
           factory.publishISOPGNtotVehHrs(interfaceAdress, value, index, parentIndex);
           break;
        case "ISOPGN/263":
           factory.publishISOPGNwhlBasdMacSpd(interfaceAdress, value, index, parentIndex);
           break;

        default:
            break;
        }
    }

    public synchronized void createDom(String topic, String fileName) throws IOException, Exception {
        System.out.println("Initiated Creation of SDK");
        File file = new File(fileName);
        StringWriter st = new StringWriter();
        DocumentBuilder buider = DocumentBuilderFactory.newInstance().newDocumentBuilder();
        Document document =  buider.parse(file);
        Node firstNode = document.getFirstChild();
        if (!interfacesSet.contains(firstNode.getNodeName())) {
            document.renameNode(document.getFirstChild(), null, "root");            
        }
        Transformer trans = TransformerFactory.newInstance().newTransformer();
        trans.transform(new DOMSource(document), new StreamResult(st));
        JsonObject obj = new JsonObject();
        obj.addProperty("PL", st.toString());
        publish(topic, obj.toString(), 2, false);
    }


    public void simulateData(TestFilClient obj) throws Exception {
        UpdateTask updateTask = new UpdateTask(obj);
        Timer timer = new Timer();
        timer.schedule(updateTask, 1000, 10000);
    }
    
    public static void main(final String[] args) throws Exception {
        TestFilClient filClient = new TestFilClient();
        FeatureConfig.getInstance().loadFeatureConfiguration();        
        TestCustomUI customUITest=new TestCustomUI();
        customUITest.mockServices(); 
        filClient.createDom(TestFilClient.TOPIC_CREATION, "./data/sample_data.xml");
        Thread.sleep(2 * 1000);
        filClient.simulateData(filClient);
    }
    
}