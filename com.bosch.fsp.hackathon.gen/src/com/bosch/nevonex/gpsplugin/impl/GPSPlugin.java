/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.gpsplugin.impl;

import com.bosch.fsp.logger.FCALLogs;
import com.bosch.fsp.logger.LoggerConstants;

import com.bosch.fsp.platform.InterfaceDetails;

import com.bosch.fsp.runtime.feature.IMachine;

import com.bosch.nevonex.common.ITopicObject;
import com.bosch.nevonex.common.impl.TopicObject;

import com.bosch.nevonex.fcal.IINTERNAL_GPS_DETAILEDINFO_R;

import com.bosch.nevonex.gpsplugin.IGPSPlugin;

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
 * An implementation of the model object '<em><b>GPSPlugin</b></em>'.
 * @generated
 */
public class GPSPlugin extends TopicObject implements IGPSPlugin {
	protected EList<PropertyChangeListener> listeners;
	protected Map<String, InterfaceDetails> interfaceDetailMap = new HashMap<>();
	protected String gPSSensorPosition = null;
	protected IINTERNAL_GPS_DETAILEDINFO_R internalGpsDetailedInfo;

	/**
	 * @generated
	 */
	protected GPSPlugin() {
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
		return GpspluginPackage.Literals.GPS_PLUGIN;
	}

	public String getGPSSensorPosition() {
		return gPSSensorPosition;
	}

	public void setGPSSensorPosition(String newGPSSensorPosition) {
		gPSSensorPosition = newGPSSensorPosition;
	}

	/**
	 * @generated
	 */
	public IINTERNAL_GPS_DETAILEDINFO_R getInternalGpsDetailedInfo() {
		if (internalGpsDetailedInfo != null && internalGpsDetailedInfo.eIsProxy()) {
			InternalEObject oldInternalGpsDetailedInfo = (InternalEObject) internalGpsDetailedInfo;
			internalGpsDetailedInfo = (IINTERNAL_GPS_DETAILEDINFO_R) eResolveProxy(oldInternalGpsDetailedInfo);
			if (internalGpsDetailedInfo != oldInternalGpsDetailedInfo) {
			}
		}
		return internalGpsDetailedInfo;
	}

	/**
	 * @generated
	 */
	public IINTERNAL_GPS_DETAILEDINFO_R basicGetInternalGpsDetailedInfo() {
		return internalGpsDetailedInfo;
	}

	/**
	 * @generated
	 */
	public void setInternalGpsDetailedInfo(IINTERNAL_GPS_DETAILEDINFO_R newInternalGpsDetailedInfo) {
		IINTERNAL_GPS_DETAILEDINFO_R oldInternalGpsDetailedInfo = internalGpsDetailedInfo;
		internalGpsDetailedInfo = newInternalGpsDetailedInfo;
		FCALLogs.getInstance().log
				.debug(LoggerConstants.LOG_SDK_PREFIX + " GPSPlugin property \"internalGpsDetailedInfo\" changed from  "
						+ oldInternalGpsDetailedInfo + " to " + newInternalGpsDetailedInfo);
		notifyPropertyChange("internalGpsDetailedInfo", oldInternalGpsDetailedInfo, newInternalGpsDetailedInfo);
	}

	/**
	 * @generated
	 */
	public long getInternalGpsDetailedInfo_Timestamp() {
		InterfaceDetails interfaceDetails = interfaceDetailMap.get("internalGpsDetailedInfo");
		if (interfaceDetails != null) {
			return interfaceDetails.getTimestmap();
		}
		return -1;
	}

	/**
	 * @generated
	 */
	public boolean isInternalGpsDetailedInfo_Valid() {
		InterfaceDetails interfaceDetails = interfaceDetailMap.get("internalGpsDetailedInfo");
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
		case GpspluginPackage.IGPS_PLUGIN__GPS_SENSOR_POSITION:
			return getGPSSensorPosition();
		case GpspluginPackage.IGPS_PLUGIN__INTERNAL_GPS_DETAILED_INFO:
			if (resolve)
				return getInternalGpsDetailedInfo();
			return basicGetInternalGpsDetailedInfo();
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
		case GpspluginPackage.IGPS_PLUGIN__GPS_SENSOR_POSITION:
			setGPSSensorPosition((String) newValue);
			return;
		case GpspluginPackage.IGPS_PLUGIN__INTERNAL_GPS_DETAILED_INFO:
			setInternalGpsDetailedInfo((IINTERNAL_GPS_DETAILEDINFO_R) newValue);
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
		case GpspluginPackage.IGPS_PLUGIN__GPS_SENSOR_POSITION:
			setGPSSensorPosition(null);
			return;
		case GpspluginPackage.IGPS_PLUGIN__INTERNAL_GPS_DETAILED_INFO:
			setInternalGpsDetailedInfo((IINTERNAL_GPS_DETAILEDINFO_R) null);
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
		case GpspluginPackage.IGPS_PLUGIN__GPS_SENSOR_POSITION:
			return gPSSensorPosition != null;
		case GpspluginPackage.IGPS_PLUGIN__INTERNAL_GPS_DETAILED_INFO:
			return internalGpsDetailedInfo != null;
		}
		return super.eIsSet(featureID);
	}
} //GPSPlugin
