/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.gps_tc.impl;

import com.bosch.fsp.logger.FCALLogs;
import com.bosch.fsp.logger.LoggerConstants;

import com.bosch.fsp.platform.InterfaceDetails;

import com.bosch.fsp.runtime.feature.IMachine;

import com.bosch.nevonex.common.ITopicObject;
import com.bosch.nevonex.common.impl.TopicObject;

import com.bosch.nevonex.fcal.IGPS_INFO_R;

import com.bosch.nevonex.gps_tc.IGPS_TC;

import com.bosch.nevonex.types.IPropertyChange;
import com.bosch.nevonex.types.impl.TypesPackage;

import java.beans.PropertyChangeEvent;
import java.beans.PropertyChangeListener;

import java.lang.reflect.InvocationTargetException;

import java.util.Collection;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.eclipse.emf.common.util.BasicEList;
import org.eclipse.emf.common.util.EList;

import org.eclipse.emf.ecore.EClass;
import org.eclipse.emf.ecore.InternalEObject;

import org.eclipse.emf.ecore.util.EDataTypeUniqueEList;

/**
 * An implementation of the model object '<em><b>GPS_TC</b></em>'.
 * @generated
 */
public class GPS_TC extends TopicObject implements IGPS_TC {
	protected EList<PropertyChangeListener> listeners;
	protected Map<String, InterfaceDetails> interfaceDetailMap = new HashMap<>();
	protected String active_TC_GPS_source = null;
	protected String positionofGpsSensor = null;
	protected IGPS_INFO_R tcGpsInfo;

	/**
	 * @generated
	 */
	protected GPS_TC() {
		super();
		initInterfaceDetails();
	}

	private void initInterfaceDetails() {
		// Interface details initialization
	}

	/**
	 * @generated
	 */
	@Override
	protected EClass eStaticClass() {
		return Gps_tcPackage.Literals.GPS_TC;
	}

	public String getActive_TC_GPS_source() {
		return active_TC_GPS_source;
	}

	public void setActive_TC_GPS_source(String newActive_TC_GPS_source) {
		active_TC_GPS_source = newActive_TC_GPS_source;
	}

	public String getPositionofGpsSensor() {
		return positionofGpsSensor;
	}

	public void setPositionofGpsSensor(String newPositionofGpsSensor) {
		positionofGpsSensor = newPositionofGpsSensor;
	}

	/**
	 * @generated
	 */
	public IGPS_INFO_R getTcGpsInfo() {
		if (tcGpsInfo != null && tcGpsInfo.eIsProxy()) {
			InternalEObject oldTcGpsInfo = (InternalEObject) tcGpsInfo;
			tcGpsInfo = (IGPS_INFO_R) eResolveProxy(oldTcGpsInfo);
			if (tcGpsInfo != oldTcGpsInfo) {
			}
		}
		return tcGpsInfo;
	}

	/**
	 * @generated
	 */
	public IGPS_INFO_R basicGetTcGpsInfo() {
		return tcGpsInfo;
	}

	/**
	 * @generated
	 */
	public void setTcGpsInfo(IGPS_INFO_R newTcGpsInfo) {
		IGPS_INFO_R oldTcGpsInfo = tcGpsInfo;
		tcGpsInfo = newTcGpsInfo;
		FCALLogs.getInstance().log
				.debug(LoggerConstants.LOG_SDK_PREFIX + " GPS_TC property \"tcGpsInfo\" changed from  "
						+ oldTcGpsInfo + " to " + newTcGpsInfo);
		notifyPropertyChange("tcGpsInfo", oldTcGpsInfo, newTcGpsInfo);
	}

	/**
	 * @generated
	 */
	public long getTcGpsInfo_Timestamp() {
		InterfaceDetails interfaceDetails = interfaceDetailMap.get("tcGpsInfo");
		if (interfaceDetails != null) {
			return interfaceDetails.getTimestmap();
		}
		return -1;
	}

	/**
	 * @generated
	 */
	public boolean isTcGpsInfo_Valid() {
		InterfaceDetails interfaceDetails = interfaceDetailMap.get("tcGpsInfo");
		if (interfaceDetails != null) {
			return interfaceDetails.isValid();
		}
		return false;
	}

	/**
	 * @generated
	 */
	public void addPropertyChangeListener(PropertyChangeListener listener) {
		if (listeners == null) {
			listeners = new BasicEList<>();
		}
		listeners.add(listener);
	}

	/**
	 * @generated
	 */
	public void removePropertyChangeListener(PropertyChangeListener listener) {
		if (listeners != null) {
			listeners.remove(listener);
		}
	}

	/**
	 * @generated
	 */
	public void notifyPropertyChange(String name, Object oldValue, Object newValue) {
		if (listeners != null) {
			for (PropertyChangeListener listener : this.listeners) {
				listener.propertyChange(new PropertyChangeEvent(this, name, oldValue, newValue));
			}
		}
	}

	/**
	 * @generated
	 */
	@Override
	public Object eGet(int featureID, boolean resolve, boolean coreType) {
		switch (featureID) {
		case Gps_tcPackage.IGPS_TC__ACTIVE_TC_GPS_SOURCE:
			return getActive_TC_GPS_source();
		case Gps_tcPackage.IGPS_TC__POSITIONOF_GPS_SENSOR:
			return getPositionofGpsSensor();
		case Gps_tcPackage.IGPS_TC__TC_GPS_INFO:
			if (resolve)
				return getTcGpsInfo();
			return basicGetTcGpsInfo();
		}
		return super.eGet(featureID, resolve, coreType);
	}

	/**
	 * @generated
	 */
	@SuppressWarnings("unchecked")
	@Override
	public void eSet(int featureID, Object newValue) {
		switch (featureID) {
		case Gps_tcPackage.IGPS_TC__ACTIVE_TC_GPS_SOURCE:
			setActive_TC_GPS_source((String) newValue);
			return;
		case Gps_tcPackage.IGPS_TC__POSITIONOF_GPS_SENSOR:
			setPositionofGpsSensor((String) newValue);
			return;
		case Gps_tcPackage.IGPS_TC__TC_GPS_INFO:
			setTcGpsInfo((IGPS_INFO_R) newValue);
			return;
		}
		super.eSet(featureID, newValue);
	}

	/**
	 * @generated
	 */
	@Override
	public void eUnset(int featureID) {
		switch (featureID) {
		case Gps_tcPackage.IGPS_TC__ACTIVE_TC_GPS_SOURCE:
			setActive_TC_GPS_source(null);
			return;
		case Gps_tcPackage.IGPS_TC__POSITIONOF_GPS_SENSOR:
			setPositionofGpsSensor(null);
			return;
		case Gps_tcPackage.IGPS_TC__TC_GPS_INFO:
			setTcGpsInfo((IGPS_INFO_R) null);
			return;
		}
		super.eUnset(featureID);
	}

	/**
	 * @generated
	 */
	@Override
	public boolean eIsSet(int featureID) {
		switch (featureID) {
		case Gps_tcPackage.IGPS_TC__ACTIVE_TC_GPS_SOURCE:
			return active_TC_GPS_source != null;
		case Gps_tcPackage.IGPS_TC__POSITIONOF_GPS_SENSOR:
			return positionofGpsSensor != null;
		case Gps_tcPackage.IGPS_TC__TC_GPS_INFO:
			return tcGpsInfo != null;
		}
		return super.eIsSet(featureID);
	}
} //GPS_TC
