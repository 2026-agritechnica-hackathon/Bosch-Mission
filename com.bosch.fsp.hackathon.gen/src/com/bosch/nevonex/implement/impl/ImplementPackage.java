/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.implement.impl;

import com.bosch.nevonex.implement.IImplement;
import com.bosch.nevonex.implement.IImplementProvider;
import com.bosch.nevonex.implement.IImplementFactory;
import com.bosch.nevonex.implement.impl.ImplementFactory;

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
public class ImplementPackage extends EPackageImpl {
	public static final String eNAME = "implement";
	public static final String eNS_URI = "com.bosch.nevonex.implement";
	public static final String eNS_PREFIX = "implement";
	public static final ImplementPackage eINSTANCE = com.bosch.nevonex.implement.impl.ImplementPackage.init();

	public static final int I_IMPLEMENT = 0;
	public static final int I_IMPLEMENT__LIFETIME_WORKING_HOURS = 0;
	public static final int I_IMPLEMENT_FEATURE_COUNT = 1;
	public static final int I_IMPLEMENT_OPERATION_COUNT = 0;

	public static final int IMPLEMENT = 1;
	public static final int IMPLEMENT_FEATURE_COUNT = CommonPackage.TOPIC_OBJECT_FEATURE_COUNT + 0;
	public static final int IMPLEMENT_OPERATION_COUNT = CommonPackage.TOPIC_OBJECT_OPERATION_COUNT + 0;

	public static final int I_IMPLEMENT_PROVIDER = 2;
	public static final int I_IMPLEMENT_PROVIDER__IMPLEMENT = 0;
	public static final int I_IMPLEMENT_PROVIDER_FEATURE_COUNT = 1;
	public static final int I_IMPLEMENT_PROVIDER_OPERATION_COUNT = 0;

	public static final int IMPLEMENT_PROVIDER = 3;
	public static final int IMPLEMENT_PROVIDER_FEATURE_COUNT = 0;
	public static final int IMPLEMENT_PROVIDER_OPERATION_COUNT = 0;

	public static final int I_IMPLEMENT_FACTORY = 4;
	public static final int I_IMPLEMENT_FACTORY_FEATURE_COUNT = 0;
	public static final int I_IMPLEMENT_FACTORY_OPERATION_COUNT = 0;


	private EClass iImplementEClass = null;
	private EClass implementEClass = null;
	private EClass iImplementProviderEClass = null;
	private EClass implementProviderEClass = null;
	private EClass iImplementFactoryEClass = null;

	private static boolean isInited = false;
	private boolean isCreated = false;
	private boolean isInitialized = false;

	public ImplementPackage() {
		super();
		setName(eNAME);
		setNsPrefix(eNS_PREFIX);
		setNsURI(eNS_URI);
		setEFactoryInstance(ImplementFactory.eINSTANCE);
	}

	public static ImplementPackage init() {
		if (isInited) return (ImplementPackage) EPackage.Registry.INSTANCE.getEPackage(eNS_URI);
		Object registered = EPackage.Registry.INSTANCE.get(eNS_URI);
		ImplementPackage thePackage = (registered instanceof ImplementPackage) ? (ImplementPackage) registered : new ImplementPackage();
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
		iImplementEClass = createEClass(I_IMPLEMENT);
		createEAttribute(iImplementEClass, I_IMPLEMENT__LIFETIME_WORKING_HOURS);

		implementEClass = createEClass(IMPLEMENT);

		iImplementProviderEClass = createEClass(I_IMPLEMENT_PROVIDER);
		createEReference(iImplementProviderEClass, I_IMPLEMENT_PROVIDER__IMPLEMENT);

		implementProviderEClass = createEClass(IMPLEMENT_PROVIDER);

		iImplementFactoryEClass = createEClass(I_IMPLEMENT_FACTORY);

	}

	private void initializePackageContents(ImplementPackage thePackage) {
		if (isInitialized) return;
		isInitialized = true;
		initializePackageContents_part0(thePackage);
	}

	private void initializePackageContents_part0(ImplementPackage thePackage) {
		thePackage.iImplementEClass.setName("IImplement");
		thePackage.iImplementEClass.setInstanceClassName("com.bosch.nevonex.implement.IImplement");
		thePackage.iImplementEClass.setAbstract(true);
		thePackage.iImplementEClass.setInterface(true);
		((EAttribute) thePackage.iImplementEClass.getEStructuralFeatures().get(0)).setName("lifetimeWorkingHours");
		((EAttribute) thePackage.iImplementEClass.getEStructuralFeatures().get(0)).setEType((EClassifier) EcorePackage.eINSTANCE.getEDouble());
		((EAttribute) thePackage.iImplementEClass.getEStructuralFeatures().get(0)).setUpperBound(1);
		((EAttribute) thePackage.iImplementEClass.getEStructuralFeatures().get(0)).setLowerBound(0);
		((EAttribute) thePackage.iImplementEClass.getEStructuralFeatures().get(0)).setDefaultValueLiteral("0.0");
		thePackage.implementEClass.setName("Implement");
		thePackage.implementEClass.setInstanceClassName("com.bosch.nevonex.implement.IImplement");
		thePackage.implementEClass.setAbstract(false);
		thePackage.implementEClass.setInterface(false);
		thePackage.implementEClass.getESuperTypes().add((EClass) CommonPackage.eINSTANCE.getTopicObject());
		thePackage.iImplementProviderEClass.setName("IImplementProvider");
		thePackage.iImplementProviderEClass.setInstanceClassName("com.bosch.nevonex.implement.IImplementProvider");
		thePackage.iImplementProviderEClass.setAbstract(true);
		thePackage.iImplementProviderEClass.setInterface(true);
		((EReference) thePackage.iImplementProviderEClass.getEStructuralFeatures().get(0)).setName("implement");
		((EReference) thePackage.iImplementProviderEClass.getEStructuralFeatures().get(0)).setEType((EClassifier) thePackage.iImplementEClass);
		((EReference) thePackage.iImplementProviderEClass.getEStructuralFeatures().get(0)).setUpperBound(1);
		((EReference) thePackage.iImplementProviderEClass.getEStructuralFeatures().get(0)).setLowerBound(0);
		((EReference) ((EReference) thePackage.iImplementProviderEClass.getEStructuralFeatures().get(0))).setContainment(true);
		thePackage.implementProviderEClass.setName("ImplementProvider");
		thePackage.implementProviderEClass.setInstanceClassName("com.bosch.nevonex.implement.IImplementProvider");
		thePackage.implementProviderEClass.setAbstract(false);
		thePackage.implementProviderEClass.setInterface(false);
		thePackage.iImplementFactoryEClass.setName("IImplementFactory");
		thePackage.iImplementFactoryEClass.setInstanceClassName("com.bosch.nevonex.implement.IImplementFactory");
		thePackage.iImplementFactoryEClass.setAbstract(true);
		thePackage.iImplementFactoryEClass.setInterface(true);
	}

	public EClass getIImplement() { return iImplementEClass; }
	public EClass getImplement() { return implementEClass; }
	public EClass getIImplementProvider() { return iImplementProviderEClass; }
	public EClass getImplementProvider() { return implementProviderEClass; }
	public EClass getIImplementFactory() { return iImplementFactoryEClass; }
	public EAttribute getIImplement_LifetimeWorkingHours() {
		return (EAttribute) iImplementEClass.getEStructuralFeature("lifetimeWorkingHours");
	}
	public EReference getIImplementProvider_Implement() {
		return (EReference) iImplementProviderEClass.getEStructuralFeature("implement");
	}

	public IImplementFactory getImplementFactory() {
		return (IImplementFactory) getEFactoryInstance();
	}

	public interface Literals {
		public static final EClass I_IMPLEMENT = eINSTANCE.getIImplement();
		public static final EClass IMPLEMENT = eINSTANCE.getImplement();
		public static final EClass I_IMPLEMENT_PROVIDER = eINSTANCE.getIImplementProvider();
		public static final EClass IMPLEMENT_PROVIDER = eINSTANCE.getImplementProvider();
		public static final EClass I_IMPLEMENT_FACTORY = eINSTANCE.getIImplementFactory();
	}

} //ImplementPackage
