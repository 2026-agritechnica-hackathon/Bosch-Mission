/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.device2device.util;

import com.bosch.fsp.runtime.feature.IDeviceDownload;
import com.bosch.nevonex.device2device.IDevice2Device;

import com.bosch.nevonex.device2device.impl.Device2devicePackage;

import org.eclipse.emf.common.notify.Adapter;
import org.eclipse.emf.common.notify.Notifier;

import org.eclipse.emf.common.notify.impl.AdapterFactoryImpl;

import org.eclipse.emf.ecore.EObject;

/**
 * @generated
 */
public class Device2deviceAdapterFactory extends AdapterFactoryImpl {
	protected static Device2devicePackage modelPackage;

	public Device2deviceAdapterFactory() {
		if (modelPackage == null) {
			modelPackage = Device2devicePackage.eINSTANCE;
		}
	}

	@Override
	public boolean isFactoryForType(Object object) {
		if (object == modelPackage) {
			return true;
		}
		if (object instanceof EObject) {
			return ((EObject) object).eClass().getEPackage() == modelPackage;
		}
		return false;
	}

	protected Device2deviceSwitch<Adapter> modelSwitch = new Device2deviceSwitch<Adapter>() {
		@Override
		public Adapter caseIDeviceDownload(IDeviceDownload object) {
			return createIDeviceDownloadAdapter();
		}

		@Override
		public Adapter caseDevice2Device(IDevice2Device object) {
			return createDevice2DeviceAdapter();
		}

		@Override
		public Adapter defaultCase(EObject object) {
			return createEObjectAdapter();
		}
	};

	@Override
	public Adapter createAdapter(Notifier target) {
		return modelSwitch.doSwitch((EObject) target);
	}

	public Adapter createIDeviceDownloadAdapter() {
		return null;
	}

	public Adapter createDevice2DeviceAdapter() {
		return null;
	}

	public Adapter createEObjectAdapter() {
		return null;
	}

} //Device2deviceAdapterFactory
