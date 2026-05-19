/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.device2device.util;

import com.bosch.fsp.runtime.feature.IDeviceDownload;
import com.bosch.nevonex.device2device.IDevice2Device;

import com.bosch.nevonex.device2device.impl.Device2devicePackage;

import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.EPackage;

import org.eclipse.emf.ecore.util.Switch;
import com.bosch.nevonex.types.IPropertyChange;

/**
 * @generated
 */
public class Device2deviceSwitch<T> extends Switch<T> {
	protected static Device2devicePackage modelPackage;

	public Device2deviceSwitch() {
		if (modelPackage == null) {
			modelPackage = Device2devicePackage.eINSTANCE;
		}
	}

	@Override
	protected boolean isSwitchFor(EPackage ePackage) {
		return ePackage == modelPackage;
	}

	@Override
	protected T doSwitch(int classifierID, EObject theEObject) {
		if (classifierID < 80) return doSwitch_chunk0(classifierID, theEObject);
		return defaultCase(theEObject);
	}

	private T doSwitch_chunk0(int classifierID, EObject theEObject) {
		switch (classifierID) {
			case Device2devicePackage.I_DEVICE_DOWNLOAD: {
				IDeviceDownload iDeviceDownload = (IDeviceDownload) theEObject;
				T result = caseIDeviceDownload(iDeviceDownload);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case Device2devicePackage.DEVICE2DEVICE: {
				IDevice2Device device2Device = (IDevice2Device) theEObject;
				T result = caseDevice2Device(device2Device);
				if (result == null)
					result = caseIDeviceDownload((IDeviceDownload) device2Device);
				if (result == null)
					result = casePropertyChange((IPropertyChange) device2Device);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			default:
				return defaultCase(theEObject);
		}
	}

	public T caseIDeviceDownload(IDeviceDownload object) {
		return null;
	}

	public T caseDevice2Device(IDevice2Device object) {
		return null;
	}

	public T casePropertyChange(IPropertyChange object) {
		return null;
	}

	@Override
	public T defaultCase(EObject object) {
		return null;
	}

} //Device2deviceSwitch
