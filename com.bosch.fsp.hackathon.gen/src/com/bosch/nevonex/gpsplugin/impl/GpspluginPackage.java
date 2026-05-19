/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.gpsplugin.impl;

import com.bosch.nevonex.gpsplugin.IGPSPlugin;
import com.bosch.nevonex.gpsplugin.IGPSPluginProvider;
import com.bosch.nevonex.gpsplugin.IGpspluginFactory;
import com.bosch.nevonex.gpsplugin.impl.GpspluginFactory;

import com.bosch.nevonex.fcal.impl.FcalPackage;
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
public class GpspluginPackage extends EPackageImpl {
	public static final String eNAME = "gpsplugin";
	public static final String eNS_URI = "com.bosch.nevonex.gpsplugin";
	public static final String eNS_PREFIX = "gpsplugin";
	public static final GpspluginPackage eINSTANCE = com.bosch.nevonex.gpsplugin.impl.GpspluginPackage.init();

	public static final int IGPS_PLUGIN = 0;
	public static final int IGPS_PLUGIN__GPS_SENSOR_POSITION = 0;
	public static final int IGPS_PLUGIN__INTERNAL_GPS_DETAILED_INFO = 1;
	public static final int IGPS_PLUGIN_FEATURE_COUNT = 2;
	public static final int IGPS_PLUGIN_OPERATION_COUNT = 0;

	public static final int GPS_PLUGIN = 1;
	public static final int GPS_PLUGIN_FEATURE_COUNT = CommonPackage.TOPIC_OBJECT_FEATURE_COUNT + 0;
	public static final int GPS_PLUGIN_OPERATION_COUNT = CommonPackage.TOPIC_OBJECT_OPERATION_COUNT + 0;

	public static final int IGPS_PLUGIN_PROVIDER = 2;
	public static final int IGPS_PLUGIN_PROVIDER__GPS_PLUGIN = 0;
	public static final int IGPS_PLUGIN_PROVIDER_FEATURE_COUNT = 1;
	public static final int IGPS_PLUGIN_PROVIDER_OPERATION_COUNT = 0;

	public static final int GPS_PLUGIN_PROVIDER = 3;
	public static final int GPS_PLUGIN_PROVIDER_FEATURE_COUNT = 0;
	public static final int GPS_PLUGIN_PROVIDER_OPERATION_COUNT = 0;

	public static final int I_GPSPLUGIN_FACTORY = 4;
	public static final int I_GPSPLUGIN_FACTORY_FEATURE_COUNT = 0;
	public static final int I_GPSPLUGIN_FACTORY_OPERATION_COUNT = 0;


	private EClass iGPSPluginEClass = null;
	private EClass gPSPluginEClass = null;
	private EClass iGPSPluginProviderEClass = null;
	private EClass gPSPluginProviderEClass = null;
	private EClass iGpspluginFactoryEClass = null;

	private static boolean isInited = false;
	private boolean isCreated = false;
	private boolean isInitialized = false;

	public GpspluginPackage() {
		super();
		setName(eNAME);
		setNsPrefix(eNS_PREFIX);
		setNsURI(eNS_URI);
		setEFactoryInstance(GpspluginFactory.eINSTANCE);
	}

	public static GpspluginPackage init() {
		if (isInited) return (GpspluginPackage) EPackage.Registry.INSTANCE.getEPackage(eNS_URI);
		Object registered = EPackage.Registry.INSTANCE.get(eNS_URI);
		GpspluginPackage thePackage = (registered instanceof GpspluginPackage) ? (GpspluginPackage) registered : new GpspluginPackage();
		isInited = true;
		EcorePackage.eINSTANCE.eClass();
		FcalPackage.eINSTANCE.eClass();
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
		iGPSPluginEClass = createEClass(IGPS_PLUGIN);
		createEAttribute(iGPSPluginEClass, IGPS_PLUGIN__GPS_SENSOR_POSITION);
		createEReference(iGPSPluginEClass, IGPS_PLUGIN__INTERNAL_GPS_DETAILED_INFO);

		gPSPluginEClass = createEClass(GPS_PLUGIN);

		iGPSPluginProviderEClass = createEClass(IGPS_PLUGIN_PROVIDER);
		createEReference(iGPSPluginProviderEClass, IGPS_PLUGIN_PROVIDER__GPS_PLUGIN);

		gPSPluginProviderEClass = createEClass(GPS_PLUGIN_PROVIDER);

		iGpspluginFactoryEClass = createEClass(I_GPSPLUGIN_FACTORY);

	}

	private void initializePackageContents(GpspluginPackage thePackage) {
		if (isInitialized) return;
		isInitialized = true;
		initializePackageContents_part0(thePackage);
	}

	private void initializePackageContents_part0(GpspluginPackage thePackage) {
		thePackage.iGPSPluginEClass.setName("IGPSPlugin");
		thePackage.iGPSPluginEClass.setInstanceClassName("com.bosch.nevonex.gpsplugin.IGPSPlugin");
		thePackage.iGPSPluginEClass.setAbstract(true);
		thePackage.iGPSPluginEClass.setInterface(true);
		((EAttribute) thePackage.iGPSPluginEClass.getEStructuralFeatures().get(0)).setName("gPSSensorPosition");
		((EAttribute) thePackage.iGPSPluginEClass.getEStructuralFeatures().get(0)).setEType((EClassifier) EcorePackage.eINSTANCE.getEString());
		((EAttribute) thePackage.iGPSPluginEClass.getEStructuralFeatures().get(0)).setUpperBound(1);
		((EAttribute) thePackage.iGPSPluginEClass.getEStructuralFeatures().get(0)).setLowerBound(0);
		((EReference) thePackage.iGPSPluginEClass.getEStructuralFeatures().get(1)).setName("internalGpsDetailedInfo");
		((EReference) thePackage.iGPSPluginEClass.getEStructuralFeatures().get(1)).setEType((EClassifier) FcalPackage.eINSTANCE.getINTERNAL_GPS_DETAILEDINFO_R());
		((EReference) thePackage.iGPSPluginEClass.getEStructuralFeatures().get(1)).setUpperBound(1);
		((EReference) thePackage.iGPSPluginEClass.getEStructuralFeatures().get(1)).setLowerBound(0);
		((EReference) ((EReference) thePackage.iGPSPluginEClass.getEStructuralFeatures().get(1))).setContainment(false);
		thePackage.gPSPluginEClass.setName("GPSPlugin");
		thePackage.gPSPluginEClass.setInstanceClassName("com.bosch.nevonex.gpsplugin.IGPSPlugin");
		thePackage.gPSPluginEClass.setAbstract(false);
		thePackage.gPSPluginEClass.setInterface(false);
		thePackage.gPSPluginEClass.getESuperTypes().add((EClass) CommonPackage.eINSTANCE.getTopicObject());
		thePackage.iGPSPluginProviderEClass.setName("IGPSPluginProvider");
		thePackage.iGPSPluginProviderEClass.setInstanceClassName("com.bosch.nevonex.gpsplugin.IGPSPluginProvider");
		thePackage.iGPSPluginProviderEClass.setAbstract(true);
		thePackage.iGPSPluginProviderEClass.setInterface(true);
		((EReference) thePackage.iGPSPluginProviderEClass.getEStructuralFeatures().get(0)).setName("gPSPlugin");
		((EReference) thePackage.iGPSPluginProviderEClass.getEStructuralFeatures().get(0)).setEType((EClassifier) thePackage.iGPSPluginEClass);
		((EReference) thePackage.iGPSPluginProviderEClass.getEStructuralFeatures().get(0)).setUpperBound(1);
		((EReference) thePackage.iGPSPluginProviderEClass.getEStructuralFeatures().get(0)).setLowerBound(0);
		((EReference) ((EReference) thePackage.iGPSPluginProviderEClass.getEStructuralFeatures().get(0))).setContainment(true);
		thePackage.gPSPluginProviderEClass.setName("GPSPluginProvider");
		thePackage.gPSPluginProviderEClass.setInstanceClassName("com.bosch.nevonex.gpsplugin.IGPSPluginProvider");
		thePackage.gPSPluginProviderEClass.setAbstract(false);
		thePackage.gPSPluginProviderEClass.setInterface(false);
		thePackage.iGpspluginFactoryEClass.setName("IGpspluginFactory");
		thePackage.iGpspluginFactoryEClass.setInstanceClassName("com.bosch.nevonex.gpsplugin.IGpspluginFactory");
		thePackage.iGpspluginFactoryEClass.setAbstract(true);
		thePackage.iGpspluginFactoryEClass.setInterface(true);
	}

	public EClass getIGPSPlugin() { return iGPSPluginEClass; }
	public EClass getGPSPlugin() { return gPSPluginEClass; }
	public EClass getIGPSPluginProvider() { return iGPSPluginProviderEClass; }
	public EClass getGPSPluginProvider() { return gPSPluginProviderEClass; }
	public EClass getIGpspluginFactory() { return iGpspluginFactoryEClass; }
	public EAttribute getIGPSPlugin_GPSSensorPosition() {
		return (EAttribute) iGPSPluginEClass.getEStructuralFeature("gPSSensorPosition");
	}
	public EReference getIGPSPlugin_InternalGpsDetailedInfo() {
		return (EReference) iGPSPluginEClass.getEStructuralFeature("internalGpsDetailedInfo");
	}
	public EReference getIGPSPluginProvider_GPSPlugin() {
		return (EReference) iGPSPluginProviderEClass.getEStructuralFeature("gPSPlugin");
	}

	public IGpspluginFactory getGpspluginFactory() {
		return (IGpspluginFactory) getEFactoryInstance();
	}

	public interface Literals {
		public static final EClass IGPS_PLUGIN = eINSTANCE.getIGPSPlugin();
		public static final EClass GPS_PLUGIN = eINSTANCE.getGPSPlugin();
		public static final EClass IGPS_PLUGIN_PROVIDER = eINSTANCE.getIGPSPluginProvider();
		public static final EClass GPS_PLUGIN_PROVIDER = eINSTANCE.getGPSPluginProvider();
		public static final EClass I_GPSPLUGIN_FACTORY = eINSTANCE.getIGpspluginFactory();
	}

} //GpspluginPackage
