/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.gpsplugin.util;

import com.bosch.nevonex.gpsplugin.IGPSPlugin;
import com.bosch.nevonex.gpsplugin.IGPSPluginProvider;
import com.bosch.nevonex.gpsplugin.IGpspluginFactory;

import com.bosch.nevonex.gpsplugin.impl.GpspluginPackage;

import org.eclipse.emf.common.notify.Adapter;
import org.eclipse.emf.common.notify.Notifier;

import org.eclipse.emf.common.notify.impl.AdapterFactoryImpl;

import org.eclipse.emf.ecore.EObject;

/**
 * @generated
 */
public class GpspluginAdapterFactory extends AdapterFactoryImpl {
	protected static GpspluginPackage modelPackage;

	public GpspluginAdapterFactory() {
		if (modelPackage == null) {
			modelPackage = GpspluginPackage.eINSTANCE;
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

	protected GpspluginSwitch<Adapter> modelSwitch = new GpspluginSwitch<Adapter>() {
		@Override
		public Adapter caseIGPSPlugin(IGPSPlugin object) {
			return createIGPSPluginAdapter();
		}

		@Override
		public Adapter caseGPSPlugin(IGPSPlugin object) {
			return createGPSPluginAdapter();
		}

		@Override
		public Adapter caseIGPSPluginProvider(IGPSPluginProvider object) {
			return createIGPSPluginProviderAdapter();
		}

		@Override
		public Adapter caseGPSPluginProvider(IGPSPluginProvider object) {
			return createGPSPluginProviderAdapter();
		}

		@Override
		public Adapter caseIGpspluginFactory(IGpspluginFactory object) {
			return createIGpspluginFactoryAdapter();
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

	public Adapter createIGPSPluginAdapter() {
		return null;
	}

	public Adapter createGPSPluginAdapter() {
		return null;
	}

	public Adapter createIGPSPluginProviderAdapter() {
		return null;
	}

	public Adapter createGPSPluginProviderAdapter() {
		return null;
	}

	public Adapter createIGpspluginFactoryAdapter() {
		return null;
	}

	public Adapter createEObjectAdapter() {
		return null;
	}

} //GpspluginAdapterFactory
