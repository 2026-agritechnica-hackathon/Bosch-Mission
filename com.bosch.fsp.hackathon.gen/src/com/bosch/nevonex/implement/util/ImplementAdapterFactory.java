/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.implement.util;

import com.bosch.nevonex.implement.IImplement;
import com.bosch.nevonex.implement.IImplementProvider;
import com.bosch.nevonex.implement.IImplementFactory;

import com.bosch.nevonex.implement.impl.ImplementPackage;

import org.eclipse.emf.common.notify.Adapter;
import org.eclipse.emf.common.notify.Notifier;

import org.eclipse.emf.common.notify.impl.AdapterFactoryImpl;

import org.eclipse.emf.ecore.EObject;

/**
 * @generated
 */
public class ImplementAdapterFactory extends AdapterFactoryImpl {
	protected static ImplementPackage modelPackage;

	public ImplementAdapterFactory() {
		if (modelPackage == null) {
			modelPackage = ImplementPackage.eINSTANCE;
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

	protected ImplementSwitch<Adapter> modelSwitch = new ImplementSwitch<Adapter>() {
		@Override
		public Adapter caseIImplement(IImplement object) {
			return createIImplementAdapter();
		}

		@Override
		public Adapter caseImplement(IImplement object) {
			return createImplementAdapter();
		}

		@Override
		public Adapter caseIImplementProvider(IImplementProvider object) {
			return createIImplementProviderAdapter();
		}

		@Override
		public Adapter caseImplementProvider(IImplementProvider object) {
			return createImplementProviderAdapter();
		}

		@Override
		public Adapter caseIImplementFactory(IImplementFactory object) {
			return createIImplementFactoryAdapter();
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

	public Adapter createIImplementAdapter() {
		return null;
	}

	public Adapter createImplementAdapter() {
		return null;
	}

	public Adapter createIImplementProviderAdapter() {
		return null;
	}

	public Adapter createImplementProviderAdapter() {
		return null;
	}

	public Adapter createIImplementFactoryAdapter() {
		return null;
	}

	public Adapter createEObjectAdapter() {
		return null;
	}

} //ImplementAdapterFactory
