/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.device2device.impl;

import com.bosch.nevonex.device2device.IDevice2deviceFactory;
import com.bosch.nevonex.device2device.IDevice2Device;

import org.eclipse.emf.ecore.EClass;
import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.EPackage;

import org.eclipse.emf.ecore.impl.EFactoryImpl;

import org.eclipse.emf.ecore.plugin.EcorePlugin;

/**
 * @generated
 */
public class Device2deviceFactory extends EFactoryImpl implements IDevice2deviceFactory {
	public static final Device2deviceFactory eINSTANCE = init();

	public static Device2deviceFactory init() {
		try {
			Device2deviceFactory theDevice2deviceFactory = (Device2deviceFactory) EPackage.Registry.INSTANCE.getEFactory(Device2devicePackage.eNS_URI);
			if (theDevice2deviceFactory != null) {
				return theDevice2deviceFactory;
			}
		} catch (Exception exception) {
			EcorePlugin.INSTANCE.log(exception);
		}
		return new Device2deviceFactory();
	}

	public Device2deviceFactory() {
		super();
	}

	@Override
	public EObject create(EClass eClass) {
		switch (eClass.getClassifierID()) {
		case Device2devicePackage.DEVICE2DEVICE:
			return createDevice2Device();
		default:
			throw new IllegalArgumentException("The class '" + eClass.getName() + "' is not a valid classifier");
		}
	}

	public IDevice2Device createDevice2Device() {
		Device2Device device2Device = new Device2Device();
		return device2Device;
	}

	public Device2devicePackage getDevice2devicePackage() {
		return (Device2devicePackage) getEPackage();
	}

	@Deprecated
	public static Device2devicePackage getPackage() {
		return Device2devicePackage.eINSTANCE;
	}

} //Device2deviceFactory
