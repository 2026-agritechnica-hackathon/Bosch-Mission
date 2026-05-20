/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.fcal.impl;

import com.bosch.nevonex.fcal.IFcalFactory;
import com.bosch.nevonex.fcal.IBulkProcessor;
import com.bosch.nevonex.fcal.IGPS_INFO_R;

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
		case FcalPackage.GPS_INFO_R:
			return createGPS_INFO_R();
		default:
			throw new IllegalArgumentException("The class '" + eClass.getName() + "' is not a valid classifier");
		}
	}

	public IBulkProcessor createBulkProcessor() {
		BulkProcessor bulkProcessor = new BulkProcessor();
		return bulkProcessor;
	}

	public IGPS_INFO_R createGPS_INFO_R() {
		GPS_INFO_R gPS_INFO_R = new GPS_INFO_R();
		return gPS_INFO_R;
	}

	public FcalPackage getFcalPackage() {
		return (FcalPackage) getEPackage();
	}

	@Deprecated
	public static FcalPackage getPackage() {
		return FcalPackage.eINSTANCE;
	}

} //FcalFactory
