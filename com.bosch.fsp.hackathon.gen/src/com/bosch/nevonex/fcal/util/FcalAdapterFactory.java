/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.fcal.util;

import com.bosch.nevonex.fcal.IBulkProcessor;
import com.bosch.nevonex.fcal.IFcalFactory;
import com.bosch.nevonex.fcal.IGPS_INFO_R;

import com.bosch.nevonex.fcal.impl.FcalPackage;

import org.eclipse.emf.common.notify.Adapter;
import org.eclipse.emf.common.notify.Notifier;

import org.eclipse.emf.common.notify.impl.AdapterFactoryImpl;

import org.eclipse.emf.ecore.EObject;

/**
 * @generated
 */
public class FcalAdapterFactory extends AdapterFactoryImpl {
	protected static FcalPackage modelPackage;

	public FcalAdapterFactory() {
		if (modelPackage == null) {
			modelPackage = FcalPackage.eINSTANCE;
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

	protected FcalSwitch<Adapter> modelSwitch = new FcalSwitch<Adapter>() {
		@Override
		public Adapter caseIBulkProcessor(IBulkProcessor object) {
			return createIBulkProcessorAdapter();
		}

		@Override
		public Adapter caseBulkProcessor(IBulkProcessor object) {
			return createBulkProcessorAdapter();
		}

		@Override
		public Adapter caseIFcalFactory(IFcalFactory object) {
			return createIFcalFactoryAdapter();
		}

		@Override
		public Adapter caseGPS_INFO_R(IGPS_INFO_R object) {
			return createGPS_INFO_RAdapter();
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

	public Adapter createIBulkProcessorAdapter() {
		return null;
	}

	public Adapter createBulkProcessorAdapter() {
		return null;
	}

	public Adapter createIFcalFactoryAdapter() {
		return null;
	}

	public Adapter createGPS_INFO_RAdapter() {
		return null;
	}

	public Adapter createEObjectAdapter() {
		return null;
	}

} //FcalAdapterFactory
