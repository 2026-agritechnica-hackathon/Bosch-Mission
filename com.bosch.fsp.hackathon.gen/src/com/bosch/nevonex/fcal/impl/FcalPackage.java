/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.fcal.impl;

import com.bosch.nevonex.fcal.IBulkProcessor;
import com.bosch.nevonex.fcal.IFcalFactory;
import com.bosch.nevonex.fcal.IINTERNAL_GPS_DETAILEDINFO_R;
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

	public static final int INTERNAL_GPS_DETAILEDINFO_R = 3;
	public static final int INTERNAL_GPS_DETAILEDINFO_R__LATITUDE = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 0;
	public static final int INTERNAL_GPS_DETAILEDINFO_R__LONGITUDE = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 1;
	public static final int INTERNAL_GPS_DETAILEDINFO_R__ALTITUDE = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 2;
	public static final int INTERNAL_GPS_DETAILEDINFO_R__TIME_STAMP = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 3;
	public static final int INTERNAL_GPS_DETAILEDINFO_R__HORIZONTAL_ACCURACY = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 4;
	public static final int INTERNAL_GPS_DETAILEDINFO_R__VERTICAL_ACCURACY = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 5;
	public static final int INTERNAL_GPS_DETAILEDINFO_R__HORIZONTAL_DIL = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 6;
	public static final int INTERNAL_GPS_DETAILEDINFO_R__POSITION_DIL = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 7;
	public static final int INTERNAL_GPS_DETAILEDINFO_R__VERTICAL_DIL = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 8;
	public static final int INTERNAL_GPS_DETAILEDINFO_R__TIME_DIL = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 9;
	public static final int INTERNAL_GPS_DETAILEDINFO_R__SPEED = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 10;
	public static final int INTERNAL_GPS_DETAILEDINFO_R__COURSE = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 11;
	public static final int INTERNAL_GPS_DETAILEDINFO_R__NUMBER_OF_SATELLITES = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 12;
	public static final int INTERNAL_GPS_DETAILEDINFO_R_FEATURE_COUNT = TypesPackage.I_ARRAY_TYPE_FEATURE_COUNT + 13;
	public static final int INTERNAL_GPS_DETAILEDINFO_R_OPERATION_COUNT = TypesPackage.I_ARRAY_TYPE_OPERATION_COUNT + 0;


	private EClass iBulkProcessorEClass = null;
	private EClass bulkProcessorEClass = null;
	private EClass iFcalFactoryEClass = null;
	private EClass iNTERNAL_GPS_DETAILEDINFO_REClass = null;

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

		iNTERNAL_GPS_DETAILEDINFO_REClass = createEClass(INTERNAL_GPS_DETAILEDINFO_R);
		createEAttribute(iNTERNAL_GPS_DETAILEDINFO_REClass, INTERNAL_GPS_DETAILEDINFO_R__LATITUDE);
		createEAttribute(iNTERNAL_GPS_DETAILEDINFO_REClass, INTERNAL_GPS_DETAILEDINFO_R__LONGITUDE);
		createEAttribute(iNTERNAL_GPS_DETAILEDINFO_REClass, INTERNAL_GPS_DETAILEDINFO_R__ALTITUDE);
		createEAttribute(iNTERNAL_GPS_DETAILEDINFO_REClass, INTERNAL_GPS_DETAILEDINFO_R__TIME_STAMP);
		createEAttribute(iNTERNAL_GPS_DETAILEDINFO_REClass, INTERNAL_GPS_DETAILEDINFO_R__HORIZONTAL_ACCURACY);
		createEAttribute(iNTERNAL_GPS_DETAILEDINFO_REClass, INTERNAL_GPS_DETAILEDINFO_R__VERTICAL_ACCURACY);
		createEAttribute(iNTERNAL_GPS_DETAILEDINFO_REClass, INTERNAL_GPS_DETAILEDINFO_R__HORIZONTAL_DIL);
		createEAttribute(iNTERNAL_GPS_DETAILEDINFO_REClass, INTERNAL_GPS_DETAILEDINFO_R__POSITION_DIL);
		createEAttribute(iNTERNAL_GPS_DETAILEDINFO_REClass, INTERNAL_GPS_DETAILEDINFO_R__VERTICAL_DIL);
		createEAttribute(iNTERNAL_GPS_DETAILEDINFO_REClass, INTERNAL_GPS_DETAILEDINFO_R__TIME_DIL);
		createEAttribute(iNTERNAL_GPS_DETAILEDINFO_REClass, INTERNAL_GPS_DETAILEDINFO_R__SPEED);
		createEAttribute(iNTERNAL_GPS_DETAILEDINFO_REClass, INTERNAL_GPS_DETAILEDINFO_R__COURSE);
		createEAttribute(iNTERNAL_GPS_DETAILEDINFO_REClass, INTERNAL_GPS_DETAILEDINFO_R__NUMBER_OF_SATELLITES);

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
		thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.setName("INTERNAL_GPS_DETAILEDINFO_R");
		thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.setInstanceClassName("com.bosch.nevonex.fcal.IINTERNAL_GPS_DETAILEDINFO_R");
		thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.setAbstract(false);
		thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.setInterface(false);
		thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getESuperTypes().add((EClass) TypesPackage.eINSTANCE.getIArrayType());
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(0)).setName("latitude");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(0)).setEType((EClassifier) EcorePackage.eINSTANCE.getEDouble());
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(0)).setUpperBound(1);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(0)).setLowerBound(0);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(0)).setDefaultValueLiteral("0.0");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(1)).setName("longitude");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(1)).setEType((EClassifier) EcorePackage.eINSTANCE.getEDouble());
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(1)).setUpperBound(1);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(1)).setLowerBound(0);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(1)).setDefaultValueLiteral("0.0");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(2)).setName("altitude");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(2)).setEType((EClassifier) EcorePackage.eINSTANCE.getEDouble());
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(2)).setUpperBound(1);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(2)).setLowerBound(0);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(2)).setDefaultValueLiteral("0.0");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(3)).setName("timeStamp");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(3)).setEType((EClassifier) EcorePackage.eINSTANCE.getEString());
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(3)).setUpperBound(1);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(3)).setLowerBound(0);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(4)).setName("horizontalAccuracy");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(4)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(4)).setUpperBound(1);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(4)).setLowerBound(0);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(4)).setDefaultValueLiteral("0.0f");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(5)).setName("verticalAccuracy");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(5)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(5)).setUpperBound(1);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(5)).setLowerBound(0);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(5)).setDefaultValueLiteral("0.0f");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(6)).setName("horizontalDil");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(6)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(6)).setUpperBound(1);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(6)).setLowerBound(0);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(6)).setDefaultValueLiteral("0.0f");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(7)).setName("positionDil");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(7)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(7)).setUpperBound(1);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(7)).setLowerBound(0);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(7)).setDefaultValueLiteral("0.0f");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(8)).setName("verticalDil");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(8)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(8)).setUpperBound(1);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(8)).setLowerBound(0);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(8)).setDefaultValueLiteral("0.0f");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(9)).setName("timeDil");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(9)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(9)).setUpperBound(1);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(9)).setLowerBound(0);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(9)).setDefaultValueLiteral("0.0f");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(10)).setName("speed");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(10)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(10)).setUpperBound(1);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(10)).setLowerBound(0);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(10)).setDefaultValueLiteral("0.0f");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(11)).setName("course");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(11)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(11)).setUpperBound(1);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(11)).setLowerBound(0);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(11)).setDefaultValueLiteral("0.0f");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(12)).setName("numberOfSatellites");
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(12)).setEType((EClassifier) EcorePackage.eINSTANCE.getEInt());
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(12)).setUpperBound(1);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(12)).setLowerBound(0);
		((EAttribute) thePackage.iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeatures().get(12)).setDefaultValueLiteral("0");
	}

	public EClass getIBulkProcessor() { return iBulkProcessorEClass; }
	public EClass getBulkProcessor() { return bulkProcessorEClass; }
	public EClass getIFcalFactory() { return iFcalFactoryEClass; }
	public EClass getINTERNAL_GPS_DETAILEDINFO_R() { return iNTERNAL_GPS_DETAILEDINFO_REClass; }
	public EAttribute getINTERNAL_GPS_DETAILEDINFO_R_Latitude() {
		return (EAttribute) iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeature("latitude");
	}
	public EAttribute getINTERNAL_GPS_DETAILEDINFO_R_Longitude() {
		return (EAttribute) iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeature("longitude");
	}
	public EAttribute getINTERNAL_GPS_DETAILEDINFO_R_Altitude() {
		return (EAttribute) iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeature("altitude");
	}
	public EAttribute getINTERNAL_GPS_DETAILEDINFO_R_TimeStamp() {
		return (EAttribute) iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeature("timeStamp");
	}
	public EAttribute getINTERNAL_GPS_DETAILEDINFO_R_HorizontalAccuracy() {
		return (EAttribute) iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeature("horizontalAccuracy");
	}
	public EAttribute getINTERNAL_GPS_DETAILEDINFO_R_VerticalAccuracy() {
		return (EAttribute) iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeature("verticalAccuracy");
	}
	public EAttribute getINTERNAL_GPS_DETAILEDINFO_R_HorizontalDil() {
		return (EAttribute) iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeature("horizontalDil");
	}
	public EAttribute getINTERNAL_GPS_DETAILEDINFO_R_PositionDil() {
		return (EAttribute) iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeature("positionDil");
	}
	public EAttribute getINTERNAL_GPS_DETAILEDINFO_R_VerticalDil() {
		return (EAttribute) iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeature("verticalDil");
	}
	public EAttribute getINTERNAL_GPS_DETAILEDINFO_R_TimeDil() {
		return (EAttribute) iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeature("timeDil");
	}
	public EAttribute getINTERNAL_GPS_DETAILEDINFO_R_Speed() {
		return (EAttribute) iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeature("speed");
	}
	public EAttribute getINTERNAL_GPS_DETAILEDINFO_R_Course() {
		return (EAttribute) iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeature("course");
	}
	public EAttribute getINTERNAL_GPS_DETAILEDINFO_R_NumberOfSatellites() {
		return (EAttribute) iNTERNAL_GPS_DETAILEDINFO_REClass.getEStructuralFeature("numberOfSatellites");
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
		public static final EClass INTERNAL_GPS_DETAILEDINFO_R = eINSTANCE.getINTERNAL_GPS_DETAILEDINFO_R();
	}

} //FcalPackage
