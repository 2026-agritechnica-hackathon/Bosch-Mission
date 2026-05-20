/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.platform_service.impl;

import com.bosch.nevonex.platform_service.IPlatform_Service;
import com.bosch.nevonex.platform_service.IPlatform_ServiceProvider;
import com.bosch.nevonex.platform_service.IPlatform_serviceFactory;
import com.bosch.nevonex.platform_service.impl.Platform_serviceFactory;

import com.bosch.nevonex.common.impl.CommonPackage;

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
public class Platform_servicePackage extends EPackageImpl {
	public static final String eNAME = "platform_service";
	public static final String eNS_URI = "com.bosch.nevonex.platform_service";
	public static final String eNS_PREFIX = "platform_service";
	public static final Platform_servicePackage eINSTANCE = com.bosch.nevonex.platform_service.impl.Platform_servicePackage.init();

	public static final int I_PLATFORM_SERVICE = 0;
	public static final int I_PLATFORM_SERVICE__DOWNLOAD = 0;
	public static final int I_PLATFORM_SERVICE__UPLOAD_DATA = 1;
	public static final int I_PLATFORM_SERVICE__UPLOAD_FILE = 2;
	public static final int I_PLATFORM_SERVICE__RECEIVE = 3;
	public static final int I_PLATFORM_SERVICE__SEND_COMMAND = 4;
	public static final int I_PLATFORM_SERVICE__SEND_FILE = 5;
	public static final int I_PLATFORM_SERVICE_FEATURE_COUNT = 6;
	public static final int I_PLATFORM_SERVICE_OPERATION_COUNT = 0;

	public static final int PLATFORM_SERVICE = 1;
	public static final int PLATFORM_SERVICE_FEATURE_COUNT = CommonPackage.TOPIC_OBJECT_FEATURE_COUNT + 0;
	public static final int PLATFORM_SERVICE_OPERATION_COUNT = CommonPackage.TOPIC_OBJECT_OPERATION_COUNT + 0;

	public static final int I_PLATFORM_SERVICE_PROVIDER = 2;
	public static final int I_PLATFORM_SERVICE_PROVIDER__PLATFORM_SERVICE = 0;
	public static final int I_PLATFORM_SERVICE_PROVIDER_FEATURE_COUNT = 1;
	public static final int I_PLATFORM_SERVICE_PROVIDER_OPERATION_COUNT = 0;

	public static final int PLATFORM_SERVICE_PROVIDER = 3;
	public static final int PLATFORM_SERVICE_PROVIDER_FEATURE_COUNT = 0;
	public static final int PLATFORM_SERVICE_PROVIDER_OPERATION_COUNT = 0;

	public static final int I_PLATFORM_SERVICE_FACTORY = 4;
	public static final int I_PLATFORM_SERVICE_FACTORY_FEATURE_COUNT = 0;
	public static final int I_PLATFORM_SERVICE_FACTORY_OPERATION_COUNT = 0;


	private EClass iPlatform_ServiceEClass = null;
	private EClass platform_ServiceEClass = null;
	private EClass iPlatform_ServiceProviderEClass = null;
	private EClass platform_ServiceProviderEClass = null;
	private EClass iPlatform_serviceFactoryEClass = null;

	private static boolean isInited = false;
	private boolean isCreated = false;
	private boolean isInitialized = false;

	public Platform_servicePackage() {
		super();
		setName(eNAME);
		setNsPrefix(eNS_PREFIX);
		setNsURI(eNS_URI);
		setEFactoryInstance(Platform_serviceFactory.eINSTANCE);
	}

	public static Platform_servicePackage init() {
		if (isInited) return (Platform_servicePackage) EPackage.Registry.INSTANCE.getEPackage(eNS_URI);
		Object registered = EPackage.Registry.INSTANCE.get(eNS_URI);
		Platform_servicePackage thePackage = (registered instanceof Platform_servicePackage) ? (Platform_servicePackage) registered : new Platform_servicePackage();
		isInited = true;
		EcorePackage.eINSTANCE.eClass();
		CommonPackage.eINSTANCE.eClass();
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
		iPlatform_ServiceEClass = createEClass(I_PLATFORM_SERVICE);
		createEAttribute(iPlatform_ServiceEClass, I_PLATFORM_SERVICE__DOWNLOAD);
		createEAttribute(iPlatform_ServiceEClass, I_PLATFORM_SERVICE__UPLOAD_DATA);
		createEAttribute(iPlatform_ServiceEClass, I_PLATFORM_SERVICE__UPLOAD_FILE);
		createEAttribute(iPlatform_ServiceEClass, I_PLATFORM_SERVICE__RECEIVE);
		createEAttribute(iPlatform_ServiceEClass, I_PLATFORM_SERVICE__SEND_COMMAND);
		createEAttribute(iPlatform_ServiceEClass, I_PLATFORM_SERVICE__SEND_FILE);

		platform_ServiceEClass = createEClass(PLATFORM_SERVICE);

		iPlatform_ServiceProviderEClass = createEClass(I_PLATFORM_SERVICE_PROVIDER);
		createEReference(iPlatform_ServiceProviderEClass, I_PLATFORM_SERVICE_PROVIDER__PLATFORM_SERVICE);

		platform_ServiceProviderEClass = createEClass(PLATFORM_SERVICE_PROVIDER);

		iPlatform_serviceFactoryEClass = createEClass(I_PLATFORM_SERVICE_FACTORY);

	}

	private void initializePackageContents(Platform_servicePackage thePackage) {
		if (isInitialized) return;
		isInitialized = true;
		initializePackageContents_part0(thePackage);
	}

	private void initializePackageContents_part0(Platform_servicePackage thePackage) {
		thePackage.iPlatform_ServiceEClass.setName("IPlatform_Service");
		thePackage.iPlatform_ServiceEClass.setInstanceClassName("com.bosch.nevonex.platform_service.IPlatform_Service");
		thePackage.iPlatform_ServiceEClass.setAbstract(true);
		thePackage.iPlatform_ServiceEClass.setInterface(true);
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(0)).setName("download");
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(0)).setEType((EClassifier) EcorePackage.eINSTANCE.getEString());
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(0)).setUpperBound(1);
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(0)).setLowerBound(0);
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(1)).setName("uploadData");
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(1)).setEType((EClassifier) EcorePackage.eINSTANCE.getEString());
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(1)).setUpperBound(1);
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(1)).setLowerBound(0);
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(2)).setName("uploadFile");
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(2)).setEType((EClassifier) EcorePackage.eINSTANCE.getEString());
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(2)).setUpperBound(1);
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(2)).setLowerBound(0);
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(3)).setName("receive");
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(3)).setEType((EClassifier) EcorePackage.eINSTANCE.getEString());
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(3)).setUpperBound(1);
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(3)).setLowerBound(0);
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(4)).setName("sendCommand");
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(4)).setEType((EClassifier) EcorePackage.eINSTANCE.getEString());
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(4)).setUpperBound(1);
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(4)).setLowerBound(0);
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(5)).setName("sendFile");
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(5)).setEType((EClassifier) EcorePackage.eINSTANCE.getEString());
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(5)).setUpperBound(1);
		((EAttribute) thePackage.iPlatform_ServiceEClass.getEStructuralFeatures().get(5)).setLowerBound(0);
		thePackage.platform_ServiceEClass.setName("Platform_Service");
		thePackage.platform_ServiceEClass.setInstanceClassName("com.bosch.nevonex.platform_service.IPlatform_Service");
		thePackage.platform_ServiceEClass.setAbstract(false);
		thePackage.platform_ServiceEClass.setInterface(false);
		thePackage.platform_ServiceEClass.getESuperTypes().add((EClass) CommonPackage.eINSTANCE.getTopicObject());
		thePackage.iPlatform_ServiceProviderEClass.setName("IPlatform_ServiceProvider");
		thePackage.iPlatform_ServiceProviderEClass.setInstanceClassName("com.bosch.nevonex.platform_service.IPlatform_ServiceProvider");
		thePackage.iPlatform_ServiceProviderEClass.setAbstract(true);
		thePackage.iPlatform_ServiceProviderEClass.setInterface(true);
		((EReference) thePackage.iPlatform_ServiceProviderEClass.getEStructuralFeatures().get(0)).setName("platform_Service");
		((EReference) thePackage.iPlatform_ServiceProviderEClass.getEStructuralFeatures().get(0)).setEType((EClassifier) thePackage.iPlatform_ServiceEClass);
		((EReference) thePackage.iPlatform_ServiceProviderEClass.getEStructuralFeatures().get(0)).setUpperBound(1);
		((EReference) thePackage.iPlatform_ServiceProviderEClass.getEStructuralFeatures().get(0)).setLowerBound(0);
		((EReference) ((EReference) thePackage.iPlatform_ServiceProviderEClass.getEStructuralFeatures().get(0))).setContainment(true);
		thePackage.platform_ServiceProviderEClass.setName("Platform_ServiceProvider");
		thePackage.platform_ServiceProviderEClass.setInstanceClassName("com.bosch.nevonex.platform_service.IPlatform_ServiceProvider");
		thePackage.platform_ServiceProviderEClass.setAbstract(false);
		thePackage.platform_ServiceProviderEClass.setInterface(false);
		thePackage.iPlatform_serviceFactoryEClass.setName("IPlatform_serviceFactory");
		thePackage.iPlatform_serviceFactoryEClass.setInstanceClassName("com.bosch.nevonex.platform_service.IPlatform_serviceFactory");
		thePackage.iPlatform_serviceFactoryEClass.setAbstract(true);
		thePackage.iPlatform_serviceFactoryEClass.setInterface(true);
	}

	public EClass getIPlatform_Service() { return iPlatform_ServiceEClass; }
	public EClass getPlatform_Service() { return platform_ServiceEClass; }
	public EClass getIPlatform_ServiceProvider() { return iPlatform_ServiceProviderEClass; }
	public EClass getPlatform_ServiceProvider() { return platform_ServiceProviderEClass; }
	public EClass getIPlatform_serviceFactory() { return iPlatform_serviceFactoryEClass; }
	public EAttribute getIPlatform_Service_Download() {
		return (EAttribute) iPlatform_ServiceEClass.getEStructuralFeature("download");
	}
	public EAttribute getIPlatform_Service_UploadData() {
		return (EAttribute) iPlatform_ServiceEClass.getEStructuralFeature("uploadData");
	}
	public EAttribute getIPlatform_Service_UploadFile() {
		return (EAttribute) iPlatform_ServiceEClass.getEStructuralFeature("uploadFile");
	}
	public EAttribute getIPlatform_Service_Receive() {
		return (EAttribute) iPlatform_ServiceEClass.getEStructuralFeature("receive");
	}
	public EAttribute getIPlatform_Service_SendCommand() {
		return (EAttribute) iPlatform_ServiceEClass.getEStructuralFeature("sendCommand");
	}
	public EAttribute getIPlatform_Service_SendFile() {
		return (EAttribute) iPlatform_ServiceEClass.getEStructuralFeature("sendFile");
	}
	public EReference getIPlatform_ServiceProvider_Platform_Service() {
		return (EReference) iPlatform_ServiceProviderEClass.getEStructuralFeature("platform_Service");
	}

	public IPlatform_serviceFactory getPlatform_serviceFactory() {
		return (IPlatform_serviceFactory) getEFactoryInstance();
	}

	public interface Literals {
		public static final EClass I_PLATFORM_SERVICE = eINSTANCE.getIPlatform_Service();
		public static final EClass PLATFORM_SERVICE = eINSTANCE.getPlatform_Service();
		public static final EClass I_PLATFORM_SERVICE_PROVIDER = eINSTANCE.getIPlatform_ServiceProvider();
		public static final EClass PLATFORM_SERVICE_PROVIDER = eINSTANCE.getPlatform_ServiceProvider();
		public static final EClass I_PLATFORM_SERVICE_FACTORY = eINSTANCE.getIPlatform_serviceFactory();
	}

} //Platform_servicePackage
