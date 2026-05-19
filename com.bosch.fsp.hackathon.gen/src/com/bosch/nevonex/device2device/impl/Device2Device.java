/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.device2device.impl;

import java.io.File;
import com.bosch.nevonex.device2device.IDevice2Device;

import org.eclipse.emf.ecore.EClass;
import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.InternalEObject;

import com.bosch.nevonex.types.impl.PropertyChange;
import com.bosch.fsp.runtime.feature.exception.MachineInitException;
import com.bosch.fsp.runtime.feature.exception.NevonexException;
import com.bosch.fsp.runtime.feature.exception.CloudBadRequestException;
import com.bosch.fsp.runtime.feature.exception.CloudUnAuthorizedException;
import com.bosch.fsp.runtime.feature.exception.CloudAccessDeniedException;
import com.bosch.fsp.runtime.feature.exception.CloudConnectionException;
import com.bosch.fsp.runtime.feature.exception.PlatformServiceException;
import java.io.FileNotFoundException;
import java.io.IOException;

/**
 * @generated
 */
public class Device2Device extends PropertyChange implements IDevice2Device {

	protected Device2Device() {
		super();
	}

	@Override
	protected EClass eStaticClass() {
		return Device2devicePackage.Literals.DEVICE2DEVICE;
	}

	/**
	 * @generated
	 */
	@Override
	public void processDownloadMessage(String message) {
	}

	/**
	 * @generated
	 */
	@Override
	public void initPlatformService() throws MachineInitException {
	}

	/**
	 * @generated
	 */
	@Override
	public void startPlatformService() throws MachineInitException {
	}

	/**
	 * @generated
	 */
	@Override
	public void stopPlatformService() throws NevonexException {
	}

	/**
	 * @generated
	 */
	@Override
	public String sendCommand(String command) throws CloudBadRequestException, CloudUnAuthorizedException, CloudAccessDeniedException, CloudConnectionException, PlatformServiceException, FileNotFoundException, IOException {
		return null;
	}

	/**
	 * @generated
	 */
	@Override
	public boolean isDeviceConnected() throws CloudBadRequestException, CloudUnAuthorizedException {
		return null;
	}

	/**
	 * @generated
	 */
	@Override
	public String sendFile(File file) throws CloudBadRequestException, CloudUnAuthorizedException, CloudAccessDeniedException, CloudConnectionException, PlatformServiceException, FileNotFoundException, IOException {
		return null;
	}

	/**
	 * @generated
	 */
	@Override
	public String sendFile(String filePath) throws CloudBadRequestException, CloudUnAuthorizedException, CloudAccessDeniedException, CloudConnectionException, PlatformServiceException, FileNotFoundException, IOException {
		return null;
	}

	@Override
	public Object eGet(int featureID, boolean resolve, boolean coreType) {
		switch (featureID) {
		}
		return super.eGet(featureID, resolve, coreType);
	}

	@Override
	public void eSet(int featureID, Object newValue) {
		switch (featureID) {
		}
		super.eSet(featureID, newValue);
	}

	@Override
	public void eUnset(int featureID) {
		switch (featureID) {
		}
		super.eUnset(featureID);
	}

	@Override
	public boolean eIsSet(int featureID) {
		switch (featureID) {
		}
		return super.eIsSet(featureID);
	}
} //Device2Device
