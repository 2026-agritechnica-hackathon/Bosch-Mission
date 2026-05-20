/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.gps_tc.impl;

import com.bosch.nevonex.gps_tc.IGps_tcFactory;
import com.bosch.nevonex.gps_tc.IGPS_TC;
import com.bosch.nevonex.gps_tc.IGPS_TCProvider;

import org.eclipse.emf.ecore.EClass;
import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.EPackage;

import org.eclipse.emf.ecore.impl.EFactoryImpl;

import org.eclipse.emf.ecore.plugin.EcorePlugin;

/**
 * @generated
 */
public class Gps_tcFactory extends EFactoryImpl implements IGps_tcFactory {
	public static final Gps_tcFactory eINSTANCE = init();

	public static Gps_tcFactory init() {
		try {
			Gps_tcFactory theGps_tcFactory = (Gps_tcFactory) EPackage.Registry.INSTANCE.getEFactory(Gps_tcPackage.eNS_URI);
			if (theGps_tcFactory != null) {
				return theGps_tcFactory;
			}
		} catch (Exception exception) {
			EcorePlugin.INSTANCE.log(exception);
		}
		return new Gps_tcFactory();
	}

	public Gps_tcFactory() {
		super();
	}

	@Override
	public EObject create(EClass eClass) {
		switch (eClass.getClassifierID()) {
		case Gps_tcPackage.GPS_TC:
			return createGPS_TC();
		case Gps_tcPackage.GPS_TC_PROVIDER:
			return createGPS_TCProvider();
		default:
			throw new IllegalArgumentException("The class '" + eClass.getName() + "' is not a valid classifier");
		}
	}

	public IGPS_TC createGPS_TC() {
		GPS_TC gPS_TC = new GPS_TC();
		return gPS_TC;
	}

	public IGPS_TCProvider createGPS_TCProvider() {
		GPS_TCProvider gPS_TCProvider = new GPS_TCProvider();
		return gPS_TCProvider;
	}

	public Gps_tcPackage getGps_tcPackage() {
		return (Gps_tcPackage) getEPackage();
	}

	@Deprecated
	public static Gps_tcPackage getPackage() {
		return Gps_tcPackage.eINSTANCE;
	}

} //Gps_tcFactory
