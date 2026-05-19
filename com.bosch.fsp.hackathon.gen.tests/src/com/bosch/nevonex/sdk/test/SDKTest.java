package com.bosch.nevonex.sdk.test;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNotNull;
import static org.junit.Assert.assertTrue;
import java.beans.PropertyChangeEvent;
import java.beans.PropertyChangeListener;
import org.eclipse.emf.ecore.EStructuralFeature;
import java.util.List;
import java.util.Properties;
import org.junit.Test;
import java.io.FileInputStream;
import java.io.IOException;
import org.eclipse.emf.ecore.EClass;
import java.util.Random;
import java.util.Map;
import java.util.HashMap;
import java.util.concurrent.ThreadLocalRandom;
import org.eclipse.emf.common.util.Enumerator;
import com.bosch.nevonex.common.IAbsolutePosition;
import com.bosch.nevonex.common.impl.CommonFactory;
import com.bosch.nevonex.common.ProviderEnum;
import com.bosch.fsp.logger.FCALLogs;
import com.bosch.fsp.runtime.feature.exception.NevonexException;
import com.bosch.fsp.runtime.registry.FCALRuntime;
import org.junit.BeforeClass;
import com.bosch.nevonex.fcb.impl.FcbPackage;
import com.bosch.nevonex.fcal.impl.FcalPackage;
import com.bosch.nevonex.gpsplugin.impl.GpspluginPackage;
import com.bosch.nevonex.gpsplugin.impl.GPSPluginProvider;
import com.bosch.nevonex.gpsplugin.impl.GPSPlugin;
import com.bosch.nevonex.implement.impl.ImplementPackage;
import com.bosch.nevonex.implement.impl.ImplementProvider;
import com.bosch.nevonex.implement.impl.Implement;
import com.bosch.nevonex.isopgn.impl.IsopgnPackage;
import com.bosch.nevonex.isopgn.impl.ISOPGNProvider;
import com.bosch.nevonex.isopgn.impl.ISOPGN;


public class SDKTest {
    private static TestFilClient filClient = TestFilClient.getInstance();
    private static Properties prop;
    private static Map<String, String> featureToAddressMap = new HashMap<>();
    private static GPSPluginProvider gpspluginProvider;
    private static ImplementProvider implementProvider;
    private static ISOPGNProvider isopgnProvider;

    @BeforeClass
    public static void setUp() throws Exception {
        initialize();
        initializeDom();
        prop = readSimulatorPropertiesFile();
        initMaps();
    }

    private static void initialize() throws NevonexException {
        FCALRuntime runtime = new FCALRuntime();
        List<ProviderEnum> providerValues = ProviderEnum.VALUES;
        String[] providerarr = new String[providerValues.size()];
        int index = 0;
        for (ProviderEnum providerEnum : providerValues) {
            providerarr[index] = providerEnum.getName();
            index++;
        }
        runtime.startRuntime(providerarr, new String[0], new String[0]);
        runtime.initialize();
        runtime.startProviders();
        gpspluginProvider = (GPSPluginProvider) runtime.getMachineProvider("GPSPluginProvider");
        implementProvider = (ImplementProvider) runtime.getMachineProvider("ImplementProvider");
        isopgnProvider = (ISOPGNProvider) runtime.getMachineProvider("ISOPGNProvider");
        FCALLogs.getInstance().log.info("Runtime started ...");
    }

    private static void initializeDom() throws Exception {
        filClient.createDom(TestFilClient.TOPIC_CREATION, "./data/sample_data.xml");
        while (gpspluginProvider.getGPSPlugin() == null || implementProvider.getImplement() == null || isopgnProvider.getISOPGN() == null) {
            Thread.sleep(5000);
        }
    }

    public static void initMaps() {
        featureToAddressMap.put("GPSPlugin.machineconnect.sub", "/1/+");
        featureToAddressMap.put("GPSPlugin.machinedata.sub", "/0/+");
        featureToAddressMap.put("GPSPlugin.gPSSensorPosition.sub", "/1984");
        featureToAddressMap.put("GPSPlugin.internalGpsDetailedInfo.sub", "/9288");
        featureToAddressMap.put("Implement.machineconnect.sub", "/1/+");
        featureToAddressMap.put("Implement.machinedata.sub", "/0/+");
        featureToAddressMap.put("Implement.lifetimeWorkingHours.sub", "/350");
        featureToAddressMap.put("ISOPGN.machineconnect.sub", "/1/+");
        featureToAddressMap.put("ISOPGN.machinedata.sub", "/0/+");
        featureToAddressMap.put("ISOPGN.accpedPos1.sub", "/215");
        featureToAddressMap.put("ISOPGN.ambAirt.sub", "/306");
        featureToAddressMap.put("ISOPGN.brkPedPos.sub", "/9336");
        featureToAddressMap.put("ISOPGN.engFuRatePerTime.sub", "/294");
        featureToAddressMap.put("ISOPGN.engSpd.sub", "/224");
        featureToAddressMap.put("ISOPGN.engTotOperHrs.sub", "/273");
        featureToAddressMap.put("ISOPGN.fuLvlPer.sub", "/314");
        featureToAddressMap.put("ISOPGN.fuLvlPer2.sub", "/9173");
        featureToAddressMap.put("ISOPGN.gndBasdMacSpd.sub", "/267");
        featureToAddressMap.put("ISOPGN.tachoVehSpd.sub", "/8744");
        featureToAddressMap.put("ISOPGN.totalVehDist.sub", "/8746");
        featureToAddressMap.put("ISOPGN.totVehHrs.sub", "/276");
        featureToAddressMap.put("ISOPGN.whlBasdMacSpd.sub", "/263");
    }

    @Test
    public void testMachineDomBuild() {
        GPSPlugin gPSPlugin = (GPSPlugin) gpspluginProvider.getGPSPlugin();
        assertNotNull(gPSPlugin);
        Implement implement = (Implement) implementProvider.getImplement();
        assertNotNull(implement);
        ISOPGN iSOPGN = (ISOPGN) isopgnProvider.getISOPGN();
        assertNotNull(iSOPGN);
    }

    @Test
    public void testSubscribeGPSPlugininternalGpsDetailedInfo() throws Exception {
        String address = "/9288";
        EStructuralFeature feature = getFeatureByInterfaceAddress(address);
        com.bosch.nevonex.fcal.IINTERNAL_GPS_DETAILEDINFO_R value = (com.bosch.nevonex.fcal.IINTERNAL_GPS_DETAILEDINFO_R) getRandomValue(feature, prop);
        GPSPlugin gPSPlugin_ = (GPSPlugin) gpspluginProvider.getGPSPlugin();
        gPSPlugin_.eUnset(feature);
        filClient.publishValue("GPSPlugin" + address, value, "0", "0");
        int k = 0;
        while (!gPSPlugin_.eIsSet(feature)) {
            Thread.sleep(250);
            if (++k == 20) break;
        }
        assertTrue(gPSPlugin_.eIsSet(feature));
        com.bosch.nevonex.fcal.IINTERNAL_GPS_DETAILEDINFO_R testTemp = (com.bosch.nevonex.fcal.IINTERNAL_GPS_DETAILEDINFO_R) gPSPlugin_.getInternalGpsDetailedInfo();
        Object[] expected = value.getArrayValues();
        Object[] actual = testTemp.getArrayValues();
        for (int i = 0; i < expected.length; i++) {
            if (expected[i].getClass().isArray() && actual[i].getClass().isArray()) {
                if (expected[i] instanceof int[] && actual[i] instanceof int[]) {
                    org.junit.Assert.assertArrayEquals((int[]) expected[i], (int[]) actual[i]);
                } else if (expected[i] instanceof float[] && actual[i] instanceof float[]) {
                    org.junit.Assert.assertArrayEquals((float[]) expected[i], (float[]) actual[i], 0.001f);
                } else if (expected[i] instanceof double[] && actual[i] instanceof double[]) {
                    org.junit.Assert.assertArrayEquals((double[]) expected[i], (double[]) actual[i], 0.001);
                } else if (expected[i] instanceof long[] && actual[i] instanceof long[]) {
                    org.junit.Assert.assertArrayEquals((long[]) expected[i], (long[]) actual[i]);
                } else if (expected[i] instanceof boolean[] && actual[i] instanceof boolean[]) {
                    org.junit.Assert.assertArrayEquals((boolean[]) expected[i], (boolean[]) actual[i]);
                } else {
                    org.junit.Assert.assertArrayEquals((Object[]) expected[i], (Object[]) actual[i]);
                }
            } else {
                assertEquals(expected[i], actual[i]);
            }
        }
    }

    public static EClass getEClassByName(String name) {
        switch (name) {
        case "gpsplugin":
            return (EClass) GpspluginPackage.eINSTANCE.getEClassifier("IGPSPlugin");
        case "gpssensorposition":
            return (EClass) FcalPackage.eINSTANCE.getEClassifier("GPSSensorPosition");
        case "internal_gps_detailedinfo_r":
            return (EClass) FcalPackage.eINSTANCE.getEClassifier("INTERNAL_GPS_DETAILEDINFO_R");
        case "implement":
            return (EClass) ImplementPackage.eINSTANCE.getEClassifier("IImplement");
        case "lifetimeworkinghours":
            return (EClass) FcalPackage.eINSTANCE.getEClassifier("LifetimeWorkingHours");
        case "isopgn":
            return (EClass) IsopgnPackage.eINSTANCE.getEClassifier("IISOPGN");
        case "accpedpos1":
            return (EClass) FcalPackage.eINSTANCE.getEClassifier("AccpedPos1");
        case "ambairt":
            return (EClass) FcalPackage.eINSTANCE.getEClassifier("AmbAirt");
        case "brkpedpos":
            return (EClass) FcalPackage.eINSTANCE.getEClassifier("BrkPedPos");
        case "engfuratepertime":
            return (EClass) FcalPackage.eINSTANCE.getEClassifier("EngFuRatePerTime");
        case "engspd":
            return (EClass) FcalPackage.eINSTANCE.getEClassifier("EngSpd");
        case "engtotoperhrs":
            return (EClass) FcalPackage.eINSTANCE.getEClassifier("EngTotOperHrs");
        case "fulvlper":
            return (EClass) FcalPackage.eINSTANCE.getEClassifier("FuLvlPer");
        case "fulvlper2":
            return (EClass) FcalPackage.eINSTANCE.getEClassifier("FuLvlPer2");
        case "gndbasdmacspd":
            return (EClass) FcalPackage.eINSTANCE.getEClassifier("GndBasdMacSpd");
        case "tachovehspd":
            return (EClass) FcalPackage.eINSTANCE.getEClassifier("TachoVehSpd");
        case "totalvehdist":
            return (EClass) FcalPackage.eINSTANCE.getEClassifier("TotalVehDist");
        case "totvehhrs":
            return (EClass) FcalPackage.eINSTANCE.getEClassifier("TotVehHrs");
        case "whlbasdmacspd":
            return (EClass) FcalPackage.eINSTANCE.getEClassifier("WhlBasdMacSpd");
        case "fcalcontroller":
            return FcbPackage.eINSTANCE.getFCALController();
        }
        return null;
    }


    public static EStructuralFeature getFeatureByInterfaceAddress(String address) {
        for (String childKey : featureToAddressMap.keySet()) {
            if (childKey.endsWith(".sub")) {
                if (address.equals(featureToAddressMap.get(childKey))) {
                    String name = childKey.split("\\.")[0];
                    String feature = childKey.split("\\.")[1];
                    EClass eClass = getEClassByName(name.toLowerCase());
                    if (eClass != null && eClass.getEStructuralFeature(feature) != null) {
                        return eClass.getEStructuralFeature(feature);
                    }
                }
            }
        }
        return null;
    }

    public static Object getRandomValue(EStructuralFeature att, Properties prop) {
        Random rd = new Random();
        if (prop == null) {
            throw new IllegalArgumentException("Exception while reading the Simulator.properties file");
        }
        if (att != null) {
            if (att.getEType().getName().equalsIgnoreCase("EFLOAT")) {
                float min = (float) getMinMaxRange(prop, "float", 0);
                float max = (float) getMinMaxRange(prop, "float", 1);
                if (min >= max) throw new IllegalArgumentException("bound must be greater than origin");
                return (rd.nextFloat() * (max - min)) + min;
            } else if (att.getEType().getName().equalsIgnoreCase("EDOUBLE")) {
                double min = (double) getMinMaxRange(prop, "double", 0);
                double max = (double) getMinMaxRange(prop, "double", 1);
                return ThreadLocalRandom.current().nextDouble(min, max);
            } else if (att.getEType().getName().equalsIgnoreCase("EINT")) {
                int min = (int) getMinMaxRange(prop, "int", 0);
                int max = (int) getMinMaxRange(prop, "int", 1);
                return ThreadLocalRandom.current().nextInt(min, max);
            } else if (att.getEType().getName().equalsIgnoreCase("ELONG")) {
                long min = (long) getMinMaxRange(prop, "long", 0);
                long max = (long) getMinMaxRange(prop, "long", 1);
                return ThreadLocalRandom.current().nextLong(min, max);
            } else if (att.getEType().getName().equalsIgnoreCase("ESTRING")) {
                String range = prop.getProperty("string");
                int length = 7;
                if (range != null && !range.isEmpty()) length = Integer.parseInt(range.trim());
                StringBuilder buffer = new StringBuilder(length);
                for (int i = 0; i < length; i++) {
                    int c = 97 + (int) (rd.nextFloat() * (122 - 97 + 1));
                    buffer.append((char) c);
                }
                return buffer.toString();
            } else if (att.getEType().getName().equalsIgnoreCase("EBOOLEAN")) {
                return 1;
            } else if (att.getEType().getName().equalsIgnoreCase("INTARRAY")) {
                int min = (int) getMinMaxRange(prop, "int", 0);
                int max = (int) getMinMaxRange(prop, "int", 1);
                return new int[]{ThreadLocalRandom.current().nextInt(min, max), ThreadLocalRandom.current().nextInt(min, max), ThreadLocalRandom.current().nextInt(min, max)};
            } else if (att.getEType().getName().equalsIgnoreCase("DOUBLEARRAY")) {
                double min = (double) getMinMaxRange(prop, "double", 0);
                double max = (double) getMinMaxRange(prop, "double", 1);
                return new double[]{ThreadLocalRandom.current().nextDouble(min, max), ThreadLocalRandom.current().nextDouble(min, max), ThreadLocalRandom.current().nextDouble(min, max)};
            } else if (att.getEType().getName().equalsIgnoreCase("FLOATARRAY")) {
                float min = (float) getMinMaxRange(prop, "float", 0);
                float max = (float) getMinMaxRange(prop, "float", 1);
                if (min >= max) throw new IllegalArgumentException("bound must be greater than origin");
                return new float[]{(rd.nextFloat() * (max - min)) + min, (rd.nextFloat() * (max - min)) + min, (rd.nextFloat() * (max - min)) + min};
            } else if (att.getEType().getName().equalsIgnoreCase("LONGARRAY")) {
                long min = (long) getMinMaxRange(prop, "long", 0);
                long max = (long) getMinMaxRange(prop, "long", 1);
                return new long[]{ThreadLocalRandom.current().nextLong(min, max), ThreadLocalRandom.current().nextLong(min, max), ThreadLocalRandom.current().nextLong(min, max)};
            } else if (att.getEType().getName().equalsIgnoreCase("BOOLEANARRAY")) {
                return new int[]{1, 0, 1};
            } else if (att.getEType().getName().equalsIgnoreCase("STRINGARRAY")) {
                String range = prop.getProperty("string");
                int length = 7;
                if (range != null && !range.isEmpty()) length = Integer.parseInt(range.trim());
                StringBuilder buffer = new StringBuilder(length);
                for (int i = 0; i < length; i++) {
                    int c = 97 + (int) (rd.nextFloat() * (122 - 97 + 1));
                    buffer.append((char) c);
                }
                return new String[]{buffer.toString()};
            } else if (att.getEType().getName().equalsIgnoreCase("AbsolutePosition")) {
                IAbsolutePosition position = CommonFactory.eINSTANCE.createAbsolutePosition();
                position.setLatitude(49 + rd.nextFloat());
                position.setLongitude(9 + rd.nextFloat());
                return position;
            } else if (Enumerator.class.isAssignableFrom(att.getEType().getInstanceClass())) {
                try {
                    Object object = att.getEType().getInstanceClass().getField("VALUES").get(att.getEType().eClass().getClass());
                    if ((object instanceof List) && !((List) object).isEmpty()) {
                        Object enumLiteral = ((List) object).get(0);
                        if (((List) object).size() > 1) enumLiteral = ((List) object).get(1);
                        if (enumLiteral instanceof Enumerator) return ((Enumerator) enumLiteral).getValue();
                    }
                } catch (Exception e) {
                    FCALLogs.getInstance().log.info("Exception while getting the enum value for the interface " + att.getName(), e);
                }
            } else if (com.bosch.nevonex.types.IArrayType.class.isAssignableFrom(att.getEType().getInstanceClass())) {
                org.eclipse.emf.ecore.EObject eObject = att.getEType().getEPackage().getEFactoryInstance().create((EClass) att.getEType());
                String[] featureNames = ((com.bosch.nevonex.types.IArrayType) eObject).getFeatureNames();
                for (String featureName : featureNames) {
                    try {
                        EStructuralFeature feature = eObject.eClass().getEStructuralFeature(featureName);
                        Object value = getRandomValue(feature, prop);
                        if (Enumerator.class.isAssignableFrom(feature.getEType().getInstanceClass())) {
                            value = feature.getEType().getInstanceClass().getMethod("get", int.class)
                                .invoke(feature.getEType().eClass().getClass(), Integer.valueOf(value.toString()));
                        } else if (feature.getEType().getName().equalsIgnoreCase("EBoolean") && value instanceof Integer) {
                            value = (((Integer) value).intValue() == 1) ? true : false;
                        } else if (feature.getEType().getInstanceClassName().equalsIgnoreCase("boolean[]")) {
                            int[] intArray = (int[]) value;
                            boolean[] booleanArray = new boolean[intArray.length];
                            for (int i = 0; i < booleanArray.length; i++) {
                                booleanArray[i] = (intArray[i] == 1) ? true : false;
                            }
                            value = booleanArray;
                        }
                        eObject.eSet(feature, value);
                    } catch (Exception e) {
                        FCALLogs.getInstance().log.info("Exception while setting the array feature " + featureName, e);
                    }
                }
                return eObject;
            }
        }
        return null;
    }

    public static Properties readSimulatorPropertiesFile() {
        Properties prop = null;
        try {
            FileInputStream fis = new FileInputStream("Simulator.properties");
            prop = new Properties();
            prop.load(fis);
            fis.close();
        } catch (IOException e1) {
            FCALLogs.getInstance().log.info("Exception while reading the Simulator.properties file");
        }
        return prop;
    }

    private static Object getMinMaxRange(Properties prop, String datatype, int index) {
        if (prop != null) {
            String range = prop.getProperty(datatype);
            if (range != null && !range.isEmpty()) {
                String[] values = range.split(",");
                if (values[index] != null) {
                    switch (datatype) {
                    case "int": return Integer.parseInt(values[index].trim());
                    case "long": return Long.parseLong(values[index].trim());
                    case "float": return Float.parseFloat(values[index].trim());
                    case "double": return Double.parseDouble(values[index].trim());
                    }
                }
            }
        }
        return Math.random();
    }

}