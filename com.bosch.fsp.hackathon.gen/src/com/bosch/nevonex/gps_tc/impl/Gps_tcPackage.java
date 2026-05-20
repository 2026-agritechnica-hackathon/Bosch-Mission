/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.gps_tc.impl;

import com.bosch.nevonex.gps_tc.IGPS_TC;
import com.bosch.nevonex.gps_tc.IGPS_TCProvider;
import com.bosch.nevonex.gps_tc.IGps_tcFactory;
import com.bosch.nevonex.gps_tc.impl.Gps_tcFactory;

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
public class Gps_tcPackage extends EPackageImpl {
	public static final String eNAME = "gps_tc";
	public static final String eNS_URI = "com.bosch.nevonex.gps_tc";
	public static final String eNS_PREFIX = "gps_tc";
	public static final Gps_tcPackage eINSTANCE = com.bosch.nevonex.gps_tc.impl.Gps_tcPackage.init();

	public static final int IGPS_TC = 0;
	public static final int IGPS_TC__ACTIVE_TC_GPS_SOURCE = 0;
	public static final int IGPS_TC__POSITIONOF_GPS_SENSOR = 1;
	public static final int IGPS_TC__TC_GPS_INFO = 2;
	public static final int IGPS_TC_FEATURE_COUNT = 3;
	public static final int IGPS_TC_OPERATION_COUNT = 0;

	public static final int GPS_TC = 1;
	public static final int GPS_TC_FEATURE_COUNT = CommonPackage.TOPIC_OBJECT_FEATURE_COUNT + 0;
	public static final int GPS_TC_OPERATION_COUNT = CommonPackage.TOPIC_OBJECT_OPERATION_COUNT + 0;

	public static final int IGPS_TC_PROVIDER = 2;
	public static final int IGPS_TC_PROVIDER__GPS_TC = 0;
	public static final int IGPS_TC_PROVIDER_FEATURE_COUNT = 1;
	public static final int IGPS_TC_PROVIDER_OPERATION_COUNT = 0;

	public static final int GPS_TC_PROVIDER = 3;
	public static final int GPS_TC_PROVIDER_FEATURE_COUNT = 0;
	public static final int GPS_TC_PROVIDER_OPERATION_COUNT = 0;

	public static final int I_GPS_TC_FACTORY = 4;
	public static final int I_GPS_TC_FACTORY_FEATURE_COUNT = 0;
	public static final int I_GPS_TC_FACTORY_OPERATION_COUNT = 0;


	private EClass iGPS_TCEClass = null;
	private EClass gPS_TCEClass = null;
	private EClass iGPS_TCProviderEClass = null;
	private EClass gPS_TCProviderEClass = null;
	private EClass iGps_tcFactoryEClass = null;

	private static boolean isInited = false;
	private boolean isCreated = false;
	private boolean isInitialized = false;

	public Gps_tcPackage() {
		super();
		setName(eNAME);
		setNsPrefix(eNS_PREFIX);
		setNsURI(eNS_URI);
		setEFactoryInstance(Gps_tcFactory.eINSTANCE);
	}

	public static Gps_tcPackage init() {
		if (isInited) return (Gps_tcPackage) EPackage.Registry.INSTANCE.getEPackage(eNS_URI);
		Object registered = EPackage.Registry.INSTANCE.get(eNS_URI);
		Gps_tcPackage thePackage = (registered instanceof Gps_tcPackage) ? (Gps_tcPackage) registered : new Gps_tcPackage();
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
		iGPS_TCEClass = createEClass(IGPS_TC);
		createEAttribute(iGPS_TCEClass, IGPS_TC__ACTIVE_TC_GPS_SOURCE);
		createEAttribute(iGPS_TCEClass, IGPS_TC__POSITIONOF_GPS_SENSOR);
		createEReference(iGPS_TCEClass, IGPS_TC__TC_GPS_INFO);

		gPS_TCEClass = createEClass(GPS_TC);

		iGPS_TCProviderEClass = createEClass(IGPS_TC_PROVIDER);
		createEReference(iGPS_TCProviderEClass, IGPS_TC_PROVIDER__GPS_TC);

		gPS_TCProviderEClass = createEClass(GPS_TC_PROVIDER);

		iGps_tcFactoryEClass = createEClass(I_GPS_TC_FACTORY);

	}

	private void initializePackageContents(Gps_tcPackage thePackage) {
		if (isInitialized) return;
		isInitialized = true;
		initializePackageContents_part0(thePackage);
	}

	private void initializePackageContents_part0(Gps_tcPackage thePackage) {
		thePackage.iGPS_TCEClass.setName("IGPS_TC");
		thePackage.iGPS_TCEClass.setInstanceClassName("com.bosch.nevonex.gps_tc.IGPS_TC");
		thePackage.iGPS_TCEClass.setAbstract(true);
		thePackage.iGPS_TCEClass.setInterface(true);
		((EAttribute) thePackage.iGPS_TCEClass.getEStructuralFeatures().get(0)).setName("active_TC_GPS_source");
		((EAttribute) thePackage.iGPS_TCEClass.getEStructuralFeatures().get(0)).setEType((EClassifier) EcorePackage.eINSTANCE.getEString());
		((EAttribute) thePackage.iGPS_TCEClass.getEStructuralFeatures().get(0)).setUpperBound(1);
		((EAttribute) thePackage.iGPS_TCEClass.getEStructuralFeatures().get(0)).setLowerBound(0);
		((EAttribute) thePackage.iGPS_TCEClass.getEStructuralFeatures().get(1)).setName("positionofGpsSensor");
		((EAttribute) thePackage.iGPS_TCEClass.getEStructuralFeatures().get(1)).setEType((EClassifier) EcorePackage.eINSTANCE.getEString());
		((EAttribute) thePackage.iGPS_TCEClass.getEStructuralFeatures().get(1)).setUpperBound(1);
		((EAttribute) thePackage.iGPS_TCEClass.getEStructuralFeatures().get(1)).setLowerBound(0);
		((EReference) thePackage.iGPS_TCEClass.getEStructuralFeatures().get(2)).setName("tcGpsInfo");
		((EReference) thePackage.iGPS_TCEClass.getEStructuralFeatures().get(2)).setEType((EClassifier) FcalPackage.eINSTANCE.getGPS_INFO_R());
		((EReference) thePackage.iGPS_TCEClass.getEStructuralFeatures().get(2)).setUpperBound(1);
		((EReference) thePackage.iGPS_TCEClass.getEStructuralFeatures().get(2)).setLowerBound(0);
		((EReference) ((EReference) thePackage.iGPS_TCEClass.getEStructuralFeatures().get(2))).setContainment(false);
		thePackage.gPS_TCEClass.setName("GPS_TC");
		thePackage.gPS_TCEClass.setInstanceClassName("com.bosch.nevonex.gps_tc.IGPS_TC");
		thePackage.gPS_TCEClass.setAbstract(false);
		thePackage.gPS_TCEClass.setInterface(false);
		thePackage.gPS_TCEClass.getESuperTypes().add((EClass) CommonPackage.eINSTANCE.getTopicObject());
		thePackage.iGPS_TCProviderEClass.setName("IGPS_TCProvider");
		thePackage.iGPS_TCProviderEClass.setInstanceClassName("com.bosch.nevonex.gps_tc.IGPS_TCProvider");
		thePackage.iGPS_TCProviderEClass.setAbstract(true);
		thePackage.iGPS_TCProviderEClass.setInterface(true);
		((EReference) thePackage.iGPS_TCProviderEClass.getEStructuralFeatures().get(0)).setName("gPS_TC");
		((EReference) thePackage.iGPS_TCProviderEClass.getEStructuralFeatures().get(0)).setEType((EClassifier) thePackage.iGPS_TCEClass);
		((EReference) thePackage.iGPS_TCProviderEClass.getEStructuralFeatures().get(0)).setUpperBound(1);
		((EReference) thePackage.iGPS_TCProviderEClass.getEStructuralFeatures().get(0)).setLowerBound(0);
		((EReference) ((EReference) thePackage.iGPS_TCProviderEClass.getEStructuralFeatures().get(0))).setContainment(true);
		thePackage.gPS_TCProviderEClass.setName("GPS_TCProvider");
		thePackage.gPS_TCProviderEClass.setInstanceClassName("com.bosch.nevonex.gps_tc.IGPS_TCProvider");
		thePackage.gPS_TCProviderEClass.setAbstract(false);
		thePackage.gPS_TCProviderEClass.setInterface(false);
		thePackage.iGps_tcFactoryEClass.setName("IGps_tcFactory");
		thePackage.iGps_tcFactoryEClass.setInstanceClassName("com.bosch.nevonex.gps_tc.IGps_tcFactory");
		thePackage.iGps_tcFactoryEClass.setAbstract(true);
		thePackage.iGps_tcFactoryEClass.setInterface(true);
	}

	public EClass getIGPS_TC() { return iGPS_TCEClass; }
	public EClass getGPS_TC() { return gPS_TCEClass; }
	public EClass getIGPS_TCProvider() { return iGPS_TCProviderEClass; }
	public EClass getGPS_TCProvider() { return gPS_TCProviderEClass; }
	public EClass getIGps_tcFactory() { return iGps_tcFactoryEClass; }
	public EAttribute getIGPS_TC_Active_TC_GPS_source() {
		return (EAttribute) iGPS_TCEClass.getEStructuralFeature("active_TC_GPS_source");
	}
	public EAttribute getIGPS_TC_PositionofGpsSensor() {
		return (EAttribute) iGPS_TCEClass.getEStructuralFeature("positionofGpsSensor");
	}
	public EReference getIGPS_TC_TcGpsInfo() {
		return (EReference) iGPS_TCEClass.getEStructuralFeature("tcGpsInfo");
	}
	public EReference getIGPS_TCProvider_GPS_TC() {
		return (EReference) iGPS_TCProviderEClass.getEStructuralFeature("gPS_TC");
	}

	public IGps_tcFactory getGps_tcFactory() {
		return (IGps_tcFactory) getEFactoryInstance();
	}

	public interface Literals {
		public static final EClass IGPS_TC = eINSTANCE.getIGPS_TC();
		public static final EClass GPS_TC = eINSTANCE.getGPS_TC();
		public static final EClass IGPS_TC_PROVIDER = eINSTANCE.getIGPS_TCProvider();
		public static final EClass GPS_TC_PROVIDER = eINSTANCE.getGPS_TCProvider();
		public static final EClass I_GPS_TC_FACTORY = eINSTANCE.getIGps_tcFactory();
	}

} //Gps_tcPackage
