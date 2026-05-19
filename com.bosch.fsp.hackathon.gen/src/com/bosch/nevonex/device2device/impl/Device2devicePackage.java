/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.device2device.impl;

import com.bosch.fsp.runtime.feature.IDeviceDownload;
import com.bosch.nevonex.device2device.IDevice2Device;
import com.bosch.nevonex.device2device.IDevice2deviceFactory;
import com.bosch.nevonex.device2device.impl.Device2deviceFactory;

import com.bosch.nevonex.types.impl.TypesPackage;

import org.eclipse.emf.ecore.EAttribute;
import org.eclipse.emf.ecore.EClass;
import org.eclipse.emf.ecore.EClassifier;
import org.eclipse.emf.ecore.EFactory;
import org.eclipse.emf.ecore.EOperation;
import org.eclipse.emf.ecore.EPackage;
import org.eclipse.emf.ecore.EParameter;
import org.eclipse.emf.ecore.EReference;
import org.eclipse.emf.ecore.EcoreFactory;
import org.eclipse.emf.ecore.EcorePackage;

import org.eclipse.emf.ecore.impl.EPackageImpl;

/**
 * @generated
 */
public class Device2devicePackage extends EPackageImpl {
	public static final String eNAME = "device2device";
	public static final String eNS_URI = "com.bosch.nevonex.device2device";
	public static final String eNS_PREFIX = "device2device";
	public static final Device2devicePackage eINSTANCE = com.bosch.nevonex.device2device.impl.Device2devicePackage.init();

	public static final int I_DEVICE_DOWNLOAD = 0;
	public static final int I_DEVICE_DOWNLOAD_FEATURE_COUNT = 0;
	public static final int I_DEVICE_DOWNLOAD_OPERATION_COUNT = 0;

	public static final int DEVICE2DEVICE = 1;
	public static final int DEVICE2DEVICE_FEATURE_COUNT = I_DEVICE_DOWNLOAD_FEATURE_COUNT + 0;
	public static final int DEVICE2DEVICE___PROCESS_DOWNLOAD_MESSAGE__STRING = 0;
	public static final int DEVICE2DEVICE___INIT_PLATFORM_SERVICE = 1;
	public static final int DEVICE2DEVICE___START_PLATFORM_SERVICE = 2;
	public static final int DEVICE2DEVICE___STOP_PLATFORM_SERVICE = 3;
	public static final int DEVICE2DEVICE___SEND_COMMAND__STRING = 4;
	public static final int DEVICE2DEVICE___IS_DEVICE_CONNECTED = 5;
	public static final int DEVICE2DEVICE___SEND_FILE__FILE = 6;
	public static final int DEVICE2DEVICE___SEND_FILE__STRING = 7;
	public static final int DEVICE2DEVICE_OPERATION_COUNT = I_DEVICE_DOWNLOAD_OPERATION_COUNT + 8;


	private EClass iDeviceDownloadEClass = null;
	private EClass device2DeviceEClass = null;

	private static boolean isInited = false;
	private boolean isCreated = false;
	private boolean isInitialized = false;

	public Device2devicePackage() {
		super();
		setName(eNAME);
		setNsPrefix(eNS_PREFIX);
		setNsURI(eNS_URI);
		setEFactoryInstance(Device2deviceFactory.eINSTANCE);
	}

	public static Device2devicePackage init() {
		if (isInited) return (Device2devicePackage) EPackage.Registry.INSTANCE.getEPackage(eNS_URI);
		Object registered = EPackage.Registry.INSTANCE.get(eNS_URI);
		Device2devicePackage thePackage = (registered instanceof Device2devicePackage) ? (Device2devicePackage) registered : new Device2devicePackage();
		isInited = true;
		EcorePackage.eINSTANCE.eClass();
		TypesPackage.eINSTANCE.eClass();
		thePackage.createPackageContents();
		thePackage.initializePackageContents(thePackage);
		thePackage.freeze();
		EPackage.Registry.INSTANCE.put(eNS_URI, thePackage);
		return thePackage;
	}

	private void createPackageContents() {
		if (isCreated) return;
		isCreated = true;
		createPackageContents_part0();
	}

	private void createPackageContents_part0() {
		iDeviceDownloadEClass = createEClass(I_DEVICE_DOWNLOAD);

		device2DeviceEClass = createEClass(DEVICE2DEVICE);
		createEOperation(device2DeviceEClass, DEVICE2DEVICE___PROCESS_DOWNLOAD_MESSAGE__STRING);
		createEOperation(device2DeviceEClass, DEVICE2DEVICE___INIT_PLATFORM_SERVICE);
		createEOperation(device2DeviceEClass, DEVICE2DEVICE___START_PLATFORM_SERVICE);
		createEOperation(device2DeviceEClass, DEVICE2DEVICE___STOP_PLATFORM_SERVICE);
		createEOperation(device2DeviceEClass, DEVICE2DEVICE___SEND_COMMAND__STRING);
		createEOperation(device2DeviceEClass, DEVICE2DEVICE___IS_DEVICE_CONNECTED);
		createEOperation(device2DeviceEClass, DEVICE2DEVICE___SEND_FILE__FILE);
		createEOperation(device2DeviceEClass, DEVICE2DEVICE___SEND_FILE__STRING);

	}

	private void initializePackageContents(Device2devicePackage thePackage) {
		if (isInitialized) return;
		isInitialized = true;
		initializePackageContents_part0(thePackage);
	}

	private void initializePackageContents_part0(Device2devicePackage thePackage) {
		thePackage.iDeviceDownloadEClass.setName("IDeviceDownload");
		thePackage.iDeviceDownloadEClass.setInstanceClassName("com.bosch.fsp.runtime.feature.IDeviceDownload");
		thePackage.iDeviceDownloadEClass.setAbstract(true);
		thePackage.iDeviceDownloadEClass.setInterface(true);
		thePackage.device2DeviceEClass.setName("Device2Device");
		thePackage.device2DeviceEClass.setInstanceClassName("com.bosch.nevonex.device2device.IDevice2Device");
		thePackage.device2DeviceEClass.setAbstract(false);
		thePackage.device2DeviceEClass.setInterface(false);
		thePackage.device2DeviceEClass.getESuperTypes().add((EClass) thePackage.iDeviceDownloadEClass);
		thePackage.device2DeviceEClass.getESuperTypes().add((EClass) TypesPackage.eINSTANCE.getPropertyChange());
		thePackage.device2DeviceEClass.getEOperations().get(0).setName("processDownloadMessage");
		{
			EParameter param = EcoreFactory.eINSTANCE.createEParameter();
			param.setName("message");
			param.setEType((EClassifier) EcorePackage.eINSTANCE.getEString());
			thePackage.device2DeviceEClass.getEOperations().get(0).getEParameters().add(param);
		}
		thePackage.device2DeviceEClass.getEOperations().get(1).setName("initPlatformService");
		thePackage.device2DeviceEClass.getEOperations().get(2).setName("startPlatformService");
		thePackage.device2DeviceEClass.getEOperations().get(3).setName("stopPlatformService");
		thePackage.device2DeviceEClass.getEOperations().get(4).setName("sendCommand");
		thePackage.device2DeviceEClass.getEOperations().get(4).setEType((EClassifier) EcorePackage.eINSTANCE.getEString());
		{
			EParameter param = EcoreFactory.eINSTANCE.createEParameter();
			param.setName("command");
			param.setEType((EClassifier) EcorePackage.eINSTANCE.getEString());
			thePackage.device2DeviceEClass.getEOperations().get(4).getEParameters().add(param);
		}
		thePackage.device2DeviceEClass.getEOperations().get(5).setName("isDeviceConnected");
		thePackage.device2DeviceEClass.getEOperations().get(5).setEType((EClassifier) EcorePackage.eINSTANCE.getEBoolean());
		thePackage.device2DeviceEClass.getEOperations().get(6).setName("sendFile");
		thePackage.device2DeviceEClass.getEOperations().get(6).setEType((EClassifier) EcorePackage.eINSTANCE.getEString());
		{
			EParameter param = EcoreFactory.eINSTANCE.createEParameter();
			param.setName("file");
			param.setEType((EClassifier) EcorePackage.eINSTANCE.getEObject());
			thePackage.device2DeviceEClass.getEOperations().get(6).getEParameters().add(param);
		}
		thePackage.device2DeviceEClass.getEOperations().get(7).setName("sendFile");
		thePackage.device2DeviceEClass.getEOperations().get(7).setEType((EClassifier) EcorePackage.eINSTANCE.getEString());
		{
			EParameter param = EcoreFactory.eINSTANCE.createEParameter();
			param.setName("filePath");
			param.setEType((EClassifier) EcorePackage.eINSTANCE.getEString());
			thePackage.device2DeviceEClass.getEOperations().get(7).getEParameters().add(param);
		}
	}

	public EClass getIDeviceDownload() { return iDeviceDownloadEClass; }
	public EClass getDevice2Device() { return device2DeviceEClass; }
	public EOperation getDevice2Device__ProcessDownloadMessage__String() {
		return device2DeviceEClass.getEOperations().get(0);
	}
	public EOperation getDevice2Device__InitPlatformService() {
		return device2DeviceEClass.getEOperations().get(1);
	}
	public EOperation getDevice2Device__StartPlatformService() {
		return device2DeviceEClass.getEOperations().get(2);
	}
	public EOperation getDevice2Device__StopPlatformService() {
		return device2DeviceEClass.getEOperations().get(3);
	}
	public EOperation getDevice2Device__SendCommand__String() {
		return device2DeviceEClass.getEOperations().get(4);
	}
	public EOperation getDevice2Device__IsDeviceConnected() {
		return device2DeviceEClass.getEOperations().get(5);
	}
	public EOperation getDevice2Device__SendFile__File() {
		return device2DeviceEClass.getEOperations().get(6);
	}
	public EOperation getDevice2Device__SendFile__String() {
		return device2DeviceEClass.getEOperations().get(7);
	}

	public IDevice2deviceFactory getDevice2deviceFactory() {
		return (IDevice2deviceFactory) getEFactoryInstance();
	}

	public interface Literals {
		public static final EClass DEVICE2DEVICE = eINSTANCE.getDevice2Device();
	}

} //Device2devicePackage
