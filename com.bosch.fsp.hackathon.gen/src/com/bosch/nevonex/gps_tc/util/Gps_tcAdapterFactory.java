/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.gps_tc.util;

import com.bosch.nevonex.gps_tc.IGPS_TC;
import com.bosch.nevonex.gps_tc.IGPS_TCProvider;
import com.bosch.nevonex.gps_tc.IGps_tcFactory;

import com.bosch.nevonex.gps_tc.impl.Gps_tcPackage;

import org.eclipse.emf.common.notify.Adapter;
import org.eclipse.emf.common.notify.Notifier;

import org.eclipse.emf.common.notify.impl.AdapterFactoryImpl;

import org.eclipse.emf.ecore.EObject;

/**
 * @generated
 */
public class Gps_tcAdapterFactory extends AdapterFactoryImpl {
	protected static Gps_tcPackage modelPackage;

	public Gps_tcAdapterFactory() {
		if (modelPackage == null) {
			modelPackage = Gps_tcPackage.eINSTANCE;
		}
	}

	@Override
	public boolean isFactoryForType(Object object) {
		if (object == modelPackage) {
			return true;
		}
		if (object instanceof EObject) {
			return ((EObject) object).eClass().getEPackage() == modelPackage;
		}
		return false;
	}

	protected Gps_tcSwitch<Adapter> modelSwitch = new Gps_tcSwitch<Adapter>() {
		@Override
		public Adapter caseIGPS_TC(IGPS_TC object) {
			return createIGPS_TCAdapter();
		}

		@Override
		public Adapter caseGPS_TC(IGPS_TC object) {
			return createGPS_TCAdapter();
		}

		@Override
		public Adapter caseIGPS_TCProvider(IGPS_TCProvider object) {
			return createIGPS_TCProviderAdapter();
		}

		@Override
		public Adapter caseGPS_TCProvider(IGPS_TCProvider object) {
			return createGPS_TCProviderAdapter();
		}

		@Override
		public Adapter caseIGps_tcFactory(IGps_tcFactory object) {
			return createIGps_tcFactoryAdapter();
		}

		@Override
		public Adapter defaultCase(EObject object) {
			return createEObjectAdapter();
		}
	};

	@Override
	public Adapter createAdapter(Notifier target) {
		return modelSwitch.doSwitch((EObject) target);
	}

	public Adapter createIGPS_TCAdapter() {
		return null;
	}

	public Adapter createGPS_TCAdapter() {
		return null;
	}

	public Adapter createIGPS_TCProviderAdapter() {
		return null;
	}

	public Adapter createGPS_TCProviderAdapter() {
		return null;
	}

	public Adapter createIGps_tcFactoryAdapter() {
		return null;
	}

	public Adapter createEObjectAdapter() {
		return null;
	}

} //Gps_tcAdapterFactory
