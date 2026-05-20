/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.fcal.impl;

import com.bosch.nevonex.fcal.IBulkProcessor;
import com.bosch.nevonex.fcal.IFcalFactory;
import com.bosch.nevonex.fcal.IGPS_INFO_R;
import com.bosch.nevonex.fcal.impl.FcalFactory;

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
public class FcalPackage extends EPackageImpl {
	public static final String eNAME = "fcal";
	public static final String eNS_URI = "com.bosch.nevonex.fcal";
	public static final String eNS_PREFIX = "fcal";
	public static final FcalPackage eINSTANCE = com.bosch.nevonex.fcal.impl.FcalPackage.init();

	public static final int I_BULK_PROCESSOR = 0;
	public static final int I_BULK_PROCESSOR_FEATURE_COUNT = 0;
	public static final int I_BULK_PROCESSOR___EXECUTE_BULK_OPERATIONS = 0;
	public static final int I_BULK_PROCESSOR_OPERATION_COUNT = 1;

	public static final int BULK_PROCESSOR = 1;
	public static final int BULK_PROCESSOR_FEATURE_COUNT = 0;
	public static final int BULK_PROCESSOR_OPERATION_COUNT = 0;

	public static final int I_FCAL_FACTORY = 2;
	public static final int I_FCAL_FACTORY_FEATURE_COUNT = 0;
	public static final int I_FCAL_FACTORY_OPERATION_COUNT = 0;

	public static final int GPS_INFO_R = 3;
	public static final int GPS_INFO_R__LATITUDE = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 0;
	public static final int GPS_INFO_R__LONGITUDE = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 1;
	public static final int GPS_INFO_R__ALTITUDE = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 2;
	public static final int GPS_INFO_R__POSITION_TIME = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 3;
	public static final int GPS_INFO_R__HDOP = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 4;
	public static final int GPS_INFO_R__PDOP = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 5;
	public static final int GPS_INFO_R__NUMBER_OF_SATTELITES = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 6;
	public static final int GPS_INFO_R_FEATURE_COUNT = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 7;
	public static final int GPS_INFO_R_OPERATION_COUNT = TypesPackage.I_ARRAY_TYPE_OPERATION_COUNT + 0;


	private EClass iBulkProcessorEClass = null;
	private EClass bulkProcessorEClass = null;
	private EClass iFcalFactoryEClass = null;
	private EClass gPS_INFO_REClass = null;

	private static boolean isInited = false;
	private boolean isCreated = false;
	private boolean isInitialized = false;

	public FcalPackage() {
		super();
		setName(eNAME);
		setNsPrefix(eNS_PREFIX);
		setNsURI(eNS_URI);
		setEFactoryInstance(FcalFactory.eINSTANCE);
	}

	public static FcalPackage init() {
		if (isInited) return (FcalPackage) EPackage.Registry.INSTANCE.getEPackage(eNS_URI);
		Object registered = EPackage.Registry.INSTANCE.get(eNS_URI);
		FcalPackage thePackage = (registered instanceof FcalPackage) ? (FcalPackage) registered : new FcalPackage();
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
		iBulkProcessorEClass = createEClass(I_BULK_PROCESSOR);
		createEOperation(iBulkProcessorEClass, I_BULK_PROCESSOR___EXECUTE_BULK_OPERATIONS);

		bulkProcessorEClass = createEClass(BULK_PROCESSOR);

		iFcalFactoryEClass = createEClass(I_FCAL_FACTORY);

		gPS_INFO_REClass = createEClass(GPS_INFO_R);
		createEAttribute(gPS_INFO_REClass, GPS_INFO_R__LATITUDE);
		createEAttribute(gPS_INFO_REClass, GPS_INFO_R__LONGITUDE);
		createEAttribute(gPS_INFO_REClass, GPS_INFO_R__ALTITUDE);
		createEAttribute(gPS_INFO_REClass, GPS_INFO_R__POSITION_TIME);
		createEAttribute(gPS_INFO_REClass, GPS_INFO_R__HDOP);
		createEAttribute(gPS_INFO_REClass, GPS_INFO_R__PDOP);
		createEAttribute(gPS_INFO_REClass, GPS_INFO_R__NUMBER_OF_SATTELITES);

	}

	private void initializePackageContents(FcalPackage thePackage) {
		if (isInitialized) return;
		isInitialized = true;
		initializePackageContents_part0(thePackage);
	}

	private void initializePackageContents_part0(FcalPackage thePackage) {
		thePackage.iBulkProcessorEClass.setName("IBulkProcessor");
		thePackage.iBulkProcessorEClass.setInstanceClassName("com.bosch.nevonex.fcal.IBulkProcessor");
		thePackage.iBulkProcessorEClass.setAbstract(true);
		thePackage.iBulkProcessorEClass.setInterface(true);
		thePackage.iBulkProcessorEClass.getEOperations().get(0).setName("executeBulkOperations");
		thePackage.bulkProcessorEClass.setName("BulkProcessor");
		thePackage.bulkProcessorEClass.setInstanceClassName("com.bosch.nevonex.fcal.IBulkProcessor");
		thePackage.bulkProcessorEClass.setAbstract(false);
		thePackage.bulkProcessorEClass.setInterface(false);
		thePackage.iFcalFactoryEClass.setName("IFcalFactory");
		thePackage.iFcalFactoryEClass.setInstanceClassName("com.bosch.nevonex.fcal.IFcalFactory");
		thePackage.iFcalFactoryEClass.setAbstract(true);
		thePackage.iFcalFactoryEClass.setInterface(true);
		thePackage.gPS_INFO_REClass.setName("GPS_INFO_R");
		thePackage.gPS_INFO_REClass.setInstanceClassName("com.bosch.nevonex.fcal.IGPS_INFO_R");
		thePackage.gPS_INFO_REClass.setAbstract(false);
		thePackage.gPS_INFO_REClass.setInterface(false);
		thePackage.gPS_INFO_REClass.getESuperTypes().add((EClass) TypesPackage.eINSTANCE.getIArrayType());
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(0)).setName("latitude");
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(0)).setEType((EClassifier) EcorePackage.eINSTANCE.getEDouble());
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(0)).setUpperBound(1);
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(0)).setLowerBound(0);
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(0)).setDefaultValueLiteral("0.0");
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(1)).setName("longitude");
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(1)).setEType((EClassifier) EcorePackage.eINSTANCE.getEDouble());
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(1)).setUpperBound(1);
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(1)).setLowerBound(0);
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(1)).setDefaultValueLiteral("0.0");
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(2)).setName("altitude");
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(2)).setEType((EClassifier) EcorePackage.eINSTANCE.getEDouble());
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(2)).setUpperBound(1);
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(2)).setLowerBound(0);
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(2)).setDefaultValueLiteral("0.0");
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(3)).setName("positionTime");
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(3)).setEType((EClassifier) EcorePackage.eINSTANCE.getEDouble());
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(3)).setUpperBound(1);
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(3)).setLowerBound(0);
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(3)).setDefaultValueLiteral("0.0");
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(4)).setName("hDOP");
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(4)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(4)).setUpperBound(1);
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(4)).setLowerBound(0);
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(4)).setDefaultValueLiteral("0.0f");
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(5)).setName("pDOP");
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(5)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(5)).setUpperBound(1);
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(5)).setLowerBound(0);
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(5)).setDefaultValueLiteral("0.0f");
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(6)).setName("numberOfSattelites");
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(6)).setEType((EClassifier) EcorePackage.eINSTANCE.getEInt());
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(6)).setUpperBound(1);
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(6)).setLowerBound(0);
		((EAttribute) thePackage.gPS_INFO_REClass.getEStructuralFeatures().get(6)).setDefaultValueLiteral("0");
	}

	public EClass getIBulkProcessor() { return iBulkProcessorEClass; }
	public EClass getBulkProcessor() { return bulkProcessorEClass; }
	public EClass getIFcalFactory() { return iFcalFactoryEClass; }
	public EClass getGPS_INFO_R() { return gPS_INFO_REClass; }
	public EAttribute getGPS_INFO_R_Latitude() {
		return (EAttribute) gPS_INFO_REClass.getEStructuralFeature("latitude");
	}
	public EAttribute getGPS_INFO_R_Longitude() {
		return (EAttribute) gPS_INFO_REClass.getEStructuralFeature("longitude");
	}
	public EAttribute getGPS_INFO_R_Altitude() {
		return (EAttribute) gPS_INFO_REClass.getEStructuralFeature("altitude");
	}
	public EAttribute getGPS_INFO_R_PositionTime() {
		return (EAttribute) gPS_INFO_REClass.getEStructuralFeature("positionTime");
	}
	public EAttribute getGPS_INFO_R_HDOP() {
		return (EAttribute) gPS_INFO_REClass.getEStructuralFeature("hDOP");
	}
	public EAttribute getGPS_INFO_R_PDOP() {
		return (EAttribute) gPS_INFO_REClass.getEStructuralFeature("pDOP");
	}
	public EAttribute getGPS_INFO_R_NumberOfSattelites() {
		return (EAttribute) gPS_INFO_REClass.getEStructuralFeature("numberOfSattelites");
	}
	public EOperation getIBulkProcessor__ExecuteBulkOperations() {
		return iBulkProcessorEClass.getEOperations().get(0);
	}

	public IFcalFactory getFcalFactory() {
		return (IFcalFactory) getEFactoryInstance();
	}

	public interface Literals {
		public static final EClass I_BULK_PROCESSOR = eINSTANCE.getIBulkProcessor();
		public static final EClass BULK_PROCESSOR = eINSTANCE.getBulkProcessor();
		public static final EClass I_FCAL_FACTORY = eINSTANCE.getIFcalFactory();
		public static final EClass GPS_INFO_R = eINSTANCE.getGPS_INFO_R();
	}

} //FcalPackage
