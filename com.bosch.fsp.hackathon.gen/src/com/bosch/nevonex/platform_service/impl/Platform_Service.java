/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.platform_service.impl;

import com.bosch.fsp.logger.FCALLogs;
import com.bosch.fsp.logger.LoggerConstants;

import com.bosch.fsp.platform.InterfaceDetails;

import com.bosch.fsp.runtime.feature.IMachine;

import com.bosch.nevonex.common.ITopicObject;
import com.bosch.nevonex.common.impl.TopicObject;

import com.bosch.nevonex.platform_service.IPlatform_Service;

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
 * An implementation of the model object '<em><b>Platform_Service</b></em>'.
 * @generated
 */
public class Platform_Service extends TopicObject implements IPlatform_Service {
	protected EList<PropertyChangeListener> listeners;
	protected Map<String, InterfaceDetails> interfaceDetailMap = new HashMap<>();
	protected String download = null;
	protected String uploadData = null;
	protected String uploadFile = null;
	protected String receive = null;
	protected String sendCommand = null;
	protected String sendFile = null;

	/**
	 * @generated
	 */
	protected Platform_Service() {
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
		return Platform_servicePackage.Literals.PLATFORM_SERVICE;
	}

	public String getDownload() {
		return download;
	}

	public void setDownload(String newDownload) {
		download = newDownload;
	}

	public String getUploadData() {
		return uploadData;
	}

	public void setUploadData(String newUploadData) {
		uploadData = newUploadData;
	}

	public String getUploadFile() {
		return uploadFile;
	}

	public void setUploadFile(String newUploadFile) {
		uploadFile = newUploadFile;
	}

	public String getReceive() {
		return receive;
	}

	public void setReceive(String newReceive) {
		receive = newReceive;
	}

	public String getSendCommand() {
		return sendCommand;
	}

	public void setSendCommand(String newSendCommand) {
		sendCommand = newSendCommand;
	}

	public String getSendFile() {
		return sendFile;
	}

	public void setSendFile(String newSendFile) {
		sendFile = newSendFile;
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
		case Platform_servicePackage.I_PLATFORM_SERVICE__DOWNLOAD:
			return getDownload();
		case Platform_servicePackage.I_PLATFORM_SERVICE__UPLOAD_DATA:
			return getUploadData();
		case Platform_servicePackage.I_PLATFORM_SERVICE__UPLOAD_FILE:
			return getUploadFile();
		case Platform_servicePackage.I_PLATFORM_SERVICE__RECEIVE:
			return getReceive();
		case Platform_servicePackage.I_PLATFORM_SERVICE__SEND_COMMAND:
			return getSendCommand();
		case Platform_servicePackage.I_PLATFORM_SERVICE__SEND_FILE:
			return getSendFile();
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
		case Platform_servicePackage.I_PLATFORM_SERVICE__DOWNLOAD:
			setDownload((String) newValue);
			return;
		case Platform_servicePackage.I_PLATFORM_SERVICE__UPLOAD_DATA:
			setUploadData((String) newValue);
			return;
		case Platform_servicePackage.I_PLATFORM_SERVICE__UPLOAD_FILE:
			setUploadFile((String) newValue);
			return;
		case Platform_servicePackage.I_PLATFORM_SERVICE__RECEIVE:
			setReceive((String) newValue);
			return;
		case Platform_servicePackage.I_PLATFORM_SERVICE__SEND_COMMAND:
			setSendCommand((String) newValue);
			return;
		case Platform_servicePackage.I_PLATFORM_SERVICE__SEND_FILE:
			setSendFile((String) newValue);
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
		case Platform_servicePackage.I_PLATFORM_SERVICE__DOWNLOAD:
			setDownload(null);
			return;
		case Platform_servicePackage.I_PLATFORM_SERVICE__UPLOAD_DATA:
			setUploadData(null);
			return;
		case Platform_servicePackage.I_PLATFORM_SERVICE__UPLOAD_FILE:
			setUploadFile(null);
			return;
		case Platform_servicePackage.I_PLATFORM_SERVICE__RECEIVE:
			setReceive(null);
			return;
		case Platform_servicePackage.I_PLATFORM_SERVICE__SEND_COMMAND:
			setSendCommand(null);
			return;
		case Platform_servicePackage.I_PLATFORM_SERVICE__SEND_FILE:
			setSendFile(null);
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
		case Platform_servicePackage.I_PLATFORM_SERVICE__DOWNLOAD:
			return download != null;
		case Platform_servicePackage.I_PLATFORM_SERVICE__UPLOAD_DATA:
			return uploadData != null;
		case Platform_servicePackage.I_PLATFORM_SERVICE__UPLOAD_FILE:
			return uploadFile != null;
		case Platform_servicePackage.I_PLATFORM_SERVICE__RECEIVE:
			return receive != null;
		case Platform_servicePackage.I_PLATFORM_SERVICE__SEND_COMMAND:
			return sendCommand != null;
		case Platform_servicePackage.I_PLATFORM_SERVICE__SEND_FILE:
			return sendFile != null;
		}
		return super.eIsSet(featureID);
	}
} //Platform_Service
