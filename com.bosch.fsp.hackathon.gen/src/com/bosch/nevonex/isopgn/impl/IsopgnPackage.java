/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.isopgn.impl;

import com.bosch.nevonex.isopgn.IISOPGN;
import com.bosch.nevonex.isopgn.IISOPGNProvider;
import com.bosch.nevonex.isopgn.IIsopgnFactory;
import com.bosch.nevonex.isopgn.impl.IsopgnFactory;

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
public class IsopgnPackage extends EPackageImpl {
	public static final String eNAME = "isopgn";
	public static final String eNS_URI = "com.bosch.nevonex.isopgn";
	public static final String eNS_PREFIX = "isopgn";
	public static final IsopgnPackage eINSTANCE = com.bosch.nevonex.isopgn.impl.IsopgnPackage.init();

	public static final int IISOPGN = 0;
	public static final int IISOPGN__ACCPED_POS1 = 0;
	public static final int IISOPGN__AMB_AIRT = 1;
	public static final int IISOPGN__BRK_PED_POS = 2;
	public static final int IISOPGN__ENG_FU_RATE_PER_TIME = 3;
	public static final int IISOPGN__ENG_SPD = 4;
	public static final int IISOPGN__ENG_TOT_OPER_HRS = 5;
	public static final int IISOPGN__FU_LVL_PER = 6;
	public static final int IISOPGN__FU_LVL_PER2 = 7;
	public static final int IISOPGN__GND_BASD_MAC_SPD = 8;
	public static final int IISOPGN__TACHO_VEH_SPD = 9;
	public static final int IISOPGN__TOTAL_VEH_DIST = 10;
	public static final int IISOPGN__TOT_VEH_HRS = 11;
	public static final int IISOPGN__WHL_BASD_MAC_SPD = 12;
	public static final int IISOPGN_FEATURE_COUNT = 13;
	public static final int IISOPGN_OPERATION_COUNT = 0;

	public static final int ISOPGN = 1;
	public static final int ISOPGN_FEATURE_COUNT = CommonPackage.TOPIC_OBJECT_FEATURE_COUNT + 0;
	public static final int ISOPGN_OPERATION_COUNT = CommonPackage.TOPIC_OBJECT_OPERATION_COUNT + 0;

	public static final int IISOPGN_PROVIDER = 2;
	public static final int IISOPGN_PROVIDER__ISOPGN = 0;
	public static final int IISOPGN_PROVIDER_FEATURE_COUNT = 1;
	public static final int IISOPGN_PROVIDER_OPERATION_COUNT = 0;

	public static final int ISOPGN_PROVIDER = 3;
	public static final int ISOPGN_PROVIDER_FEATURE_COUNT = 0;
	public static final int ISOPGN_PROVIDER_OPERATION_COUNT = 0;

	public static final int I_ISOPGN_FACTORY = 4;
	public static final int I_ISOPGN_FACTORY_FEATURE_COUNT = 0;
	public static final int I_ISOPGN_FACTORY_OPERATION_COUNT = 0;


	private EClass iISOPGNEClass = null;
	private EClass iSOPGNEClass = null;
	private EClass iISOPGNProviderEClass = null;
	private EClass iSOPGNProviderEClass = null;
	private EClass iIsopgnFactoryEClass = null;

	private static boolean isInited = false;
	private boolean isCreated = false;
	private boolean isInitialized = false;

	public IsopgnPackage() {
		super();
		setName(eNAME);
		setNsPrefix(eNS_PREFIX);
		setNsURI(eNS_URI);
		setEFactoryInstance(IsopgnFactory.eINSTANCE);
	}

	public static IsopgnPackage init() {
		if (isInited) return (IsopgnPackage) EPackage.Registry.INSTANCE.getEPackage(eNS_URI);
		Object registered = EPackage.Registry.INSTANCE.get(eNS_URI);
		IsopgnPackage thePackage = (registered instanceof IsopgnPackage) ? (IsopgnPackage) registered : new IsopgnPackage();
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
		iISOPGNEClass = createEClass(IISOPGN);
		createEAttribute(iISOPGNEClass, IISOPGN__ACCPED_POS1);
		createEAttribute(iISOPGNEClass, IISOPGN__AMB_AIRT);
		createEAttribute(iISOPGNEClass, IISOPGN__BRK_PED_POS);
		createEAttribute(iISOPGNEClass, IISOPGN__ENG_FU_RATE_PER_TIME);
		createEAttribute(iISOPGNEClass, IISOPGN__ENG_SPD);
		createEAttribute(iISOPGNEClass, IISOPGN__ENG_TOT_OPER_HRS);
		createEAttribute(iISOPGNEClass, IISOPGN__FU_LVL_PER);
		createEAttribute(iISOPGNEClass, IISOPGN__FU_LVL_PER2);
		createEAttribute(iISOPGNEClass, IISOPGN__GND_BASD_MAC_SPD);
		createEAttribute(iISOPGNEClass, IISOPGN__TACHO_VEH_SPD);
		createEAttribute(iISOPGNEClass, IISOPGN__TOTAL_VEH_DIST);
		createEAttribute(iISOPGNEClass, IISOPGN__TOT_VEH_HRS);
		createEAttribute(iISOPGNEClass, IISOPGN__WHL_BASD_MAC_SPD);

		iSOPGNEClass = createEClass(ISOPGN);

		iISOPGNProviderEClass = createEClass(IISOPGN_PROVIDER);
		createEReference(iISOPGNProviderEClass, IISOPGN_PROVIDER__ISOPGN);

		iSOPGNProviderEClass = createEClass(ISOPGN_PROVIDER);

		iIsopgnFactoryEClass = createEClass(I_ISOPGN_FACTORY);

	}

	private void initializePackageContents(IsopgnPackage thePackage) {
		if (isInitialized) return;
		isInitialized = true;
		initializePackageContents_part0(thePackage);
	}

	private void initializePackageContents_part0(IsopgnPackage thePackage) {
		thePackage.iISOPGNEClass.setName("IISOPGN");
		thePackage.iISOPGNEClass.setInstanceClassName("com.bosch.nevonex.isopgn.IISOPGN");
		thePackage.iISOPGNEClass.setAbstract(true);
		thePackage.iISOPGNEClass.setInterface(true);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(0)).setName("accpedPos1");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(0)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(0)).setUpperBound(1);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(0)).setLowerBound(0);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(0)).setDefaultValueLiteral("0.0");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(1)).setName("ambAirt");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(1)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(1)).setUpperBound(1);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(1)).setLowerBound(0);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(1)).setDefaultValueLiteral("0.0");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(2)).setName("brkPedPos");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(2)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(2)).setUpperBound(1);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(2)).setLowerBound(0);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(2)).setDefaultValueLiteral("0.0");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(3)).setName("engFuRatePerTime");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(3)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(3)).setUpperBound(1);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(3)).setLowerBound(0);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(3)).setDefaultValueLiteral("0.0");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(4)).setName("engSpd");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(4)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(4)).setUpperBound(1);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(4)).setLowerBound(0);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(4)).setDefaultValueLiteral("0.0");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(5)).setName("engTotOperHrs");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(5)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(5)).setUpperBound(1);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(5)).setLowerBound(0);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(5)).setDefaultValueLiteral("0.0");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(6)).setName("fuLvlPer");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(6)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(6)).setUpperBound(1);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(6)).setLowerBound(0);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(6)).setDefaultValueLiteral("0.0");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(7)).setName("fuLvlPer2");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(7)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(7)).setUpperBound(1);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(7)).setLowerBound(0);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(7)).setDefaultValueLiteral("0.0");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(8)).setName("gndBasdMacSpd");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(8)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(8)).setUpperBound(1);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(8)).setLowerBound(0);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(8)).setDefaultValueLiteral("0.0");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(9)).setName("tachoVehSpd");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(9)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(9)).setUpperBound(1);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(9)).setLowerBound(0);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(9)).setDefaultValueLiteral("0.0");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(10)).setName("totalVehDist");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(10)).setEType((EClassifier) EcorePackage.eINSTANCE.getEString());
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(10)).setUpperBound(1);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(10)).setLowerBound(0);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(11)).setName("totVehHrs");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(11)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(11)).setUpperBound(1);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(11)).setLowerBound(0);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(11)).setDefaultValueLiteral("0.0");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(12)).setName("whlBasdMacSpd");
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(12)).setEType((EClassifier) EcorePackage.eINSTANCE.getEFloat());
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(12)).setUpperBound(1);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(12)).setLowerBound(0);
		((EAttribute) thePackage.iISOPGNEClass.getEStructuralFeatures().get(12)).setDefaultValueLiteral("0.0");
		thePackage.iSOPGNEClass.setName("ISOPGN");
		thePackage.iSOPGNEClass.setInstanceClassName("com.bosch.nevonex.isopgn.IISOPGN");
		thePackage.iSOPGNEClass.setAbstract(false);
		thePackage.iSOPGNEClass.setInterface(false);
		thePackage.iSOPGNEClass.getESuperTypes().add((EClass) CommonPackage.eINSTANCE.getTopicObject());
		thePackage.iISOPGNProviderEClass.setName("IISOPGNProvider");
		thePackage.iISOPGNProviderEClass.setInstanceClassName("com.bosch.nevonex.isopgn.IISOPGNProvider");
		thePackage.iISOPGNProviderEClass.setAbstract(true);
		thePackage.iISOPGNProviderEClass.setInterface(true);
		((EReference) thePackage.iISOPGNProviderEClass.getEStructuralFeatures().get(0)).setName("iSOPGN");
		((EReference) thePackage.iISOPGNProviderEClass.getEStructuralFeatures().get(0)).setEType((EClassifier) thePackage.iISOPGNEClass);
		((EReference) thePackage.iISOPGNProviderEClass.getEStructuralFeatures().get(0)).setUpperBound(1);
		((EReference) thePackage.iISOPGNProviderEClass.getEStructuralFeatures().get(0)).setLowerBound(0);
		((EReference) ((EReference) thePackage.iISOPGNProviderEClass.getEStructuralFeatures().get(0))).setContainment(true);
		thePackage.iSOPGNProviderEClass.setName("ISOPGNProvider");
		thePackage.iSOPGNProviderEClass.setInstanceClassName("com.bosch.nevonex.isopgn.IISOPGNProvider");
		thePackage.iSOPGNProviderEClass.setAbstract(false);
		thePackage.iSOPGNProviderEClass.setInterface(false);
		thePackage.iIsopgnFactoryEClass.setName("IIsopgnFactory");
		thePackage.iIsopgnFactoryEClass.setInstanceClassName("com.bosch.nevonex.isopgn.IIsopgnFactory");
		thePackage.iIsopgnFactoryEClass.setAbstract(true);
		thePackage.iIsopgnFactoryEClass.setInterface(true);
	}

	public EClass getIISOPGN() { return iISOPGNEClass; }
	public EClass getISOPGN() { return iSOPGNEClass; }
	public EClass getIISOPGNProvider() { return iISOPGNProviderEClass; }
	public EClass getISOPGNProvider() { return iSOPGNProviderEClass; }
	public EClass getIIsopgnFactory() { return iIsopgnFactoryEClass; }
	public EAttribute getIISOPGN_AccpedPos1() {
		return (EAttribute) iISOPGNEClass.getEStructuralFeature("accpedPos1");
	}
	public EAttribute getIISOPGN_AmbAirt() {
		return (EAttribute) iISOPGNEClass.getEStructuralFeature("ambAirt");
	}
	public EAttribute getIISOPGN_BrkPedPos() {
		return (EAttribute) iISOPGNEClass.getEStructuralFeature("brkPedPos");
	}
	public EAttribute getIISOPGN_EngFuRatePerTime() {
		return (EAttribute) iISOPGNEClass.getEStructuralFeature("engFuRatePerTime");
	}
	public EAttribute getIISOPGN_EngSpd() {
		return (EAttribute) iISOPGNEClass.getEStructuralFeature("engSpd");
	}
	public EAttribute getIISOPGN_EngTotOperHrs() {
		return (EAttribute) iISOPGNEClass.getEStructuralFeature("engTotOperHrs");
	}
	public EAttribute getIISOPGN_FuLvlPer() {
		return (EAttribute) iISOPGNEClass.getEStructuralFeature("fuLvlPer");
	}
	public EAttribute getIISOPGN_FuLvlPer2() {
		return (EAttribute) iISOPGNEClass.getEStructuralFeature("fuLvlPer2");
	}
	public EAttribute getIISOPGN_GndBasdMacSpd() {
		return (EAttribute) iISOPGNEClass.getEStructuralFeature("gndBasdMacSpd");
	}
	public EAttribute getIISOPGN_TachoVehSpd() {
		return (EAttribute) iISOPGNEClass.getEStructuralFeature("tachoVehSpd");
	}
	public EAttribute getIISOPGN_TotalVehDist() {
		return (EAttribute) iISOPGNEClass.getEStructuralFeature("totalVehDist");
	}
	public EAttribute getIISOPGN_TotVehHrs() {
		return (EAttribute) iISOPGNEClass.getEStructuralFeature("totVehHrs");
	}
	public EAttribute getIISOPGN_WhlBasdMacSpd() {
		return (EAttribute) iISOPGNEClass.getEStructuralFeature("whlBasdMacSpd");
	}
	public EReference getIISOPGNProvider_ISOPGN() {
		return (EReference) iISOPGNProviderEClass.getEStructuralFeature("iSOPGN");
	}

	public IIsopgnFactory getIsopgnFactory() {
		return (IIsopgnFactory) getEFactoryInstance();
	}

	public interface Literals {
		public static final EClass IISOPGN = eINSTANCE.getIISOPGN();
		public static final EClass ISOPGN = eINSTANCE.getISOPGN();
		public static final EClass IISOPGN_PROVIDER = eINSTANCE.getIISOPGNProvider();
		public static final EClass ISOPGN_PROVIDER = eINSTANCE.getISOPGNProvider();
		public static final EClass I_ISOPGN_FACTORY = eINSTANCE.getIIsopgnFactory();
	}

} //IsopgnPackage
