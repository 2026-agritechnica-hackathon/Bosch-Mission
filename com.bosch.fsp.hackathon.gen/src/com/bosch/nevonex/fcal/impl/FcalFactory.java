/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.fcal.impl;

import com.bosch.nevonex.fcal.IFcalFactory;
import com.bosch.nevonex.fcal.IBulkProcessor;
import com.bosch.nevonex.fcal.IINTERNAL_GPS_DETAILEDINFO_R;

import org.eclipse.emf.ecore.EClass;
import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.EPackage;

import org.eclipse.emf.ecore.impl.EFactoryImpl;

import org.eclipse.emf.ecore.plugin.EcorePlugin;

/**
 * @generated
 */
public class FcalFactory extends EFactoryImpl implements IFcalFactory {
	public static final FcalFactory eINSTANCE = init();

	public static FcalFactory init() {
		try {
			FcalFactory theFcalFactory = (FcalFactory) EPackage.Registry.INSTANCE.getEFactory(FcalPackage.eNS_URI);
			if (theFcalFactory != null) {
				return theFcalFactory;
			}
		} catch (Exception exception) {
			EcorePlugin.INSTANCE.log(exception);
		}
		return new FcalFactory();
	}

	public FcalFactory() {
		super();
	}

	@Override
	public EObject create(EClass eClass) {
		switch (eClass.getClassifierID()) {
		case FcalPackage.BULK_PROCESSOR:
			return createBulkProcessor();
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R:
			return createINTERNAL_GPS_DETAILEDINFO_R();
		default:
			throw new IllegalArgumentException("The class '" + eClass.getName() + "' is not a valid classifier");
		}
	}

	public IBulkProcessor createBulkProcessor() {
		BulkProcessor bulkProcessor = new BulkProcessor();
		return bulkProcessor;
	}

	public IINTERNAL_GPS_DETAILEDINFO_R createINTERNAL_GPS_DETAILEDINFO_R() {
		INTERNAL_GPS_DETAILEDINFO_R iNTERNAL_GPS_DETAILEDINFO_R = new INTERNAL_GPS_DETAILEDINFO_R();
		return iNTERNAL_GPS_DETAILEDINFO_R;
	}

	public FcalPackage getFcalPackage() {
		return (FcalPackage) getEPackage();
	}

	@Deprecated
	public static FcalPackage getPackage() {
		return FcalPackage.eINSTANCE;
	}

} //FcalFactory
