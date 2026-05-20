/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.platform_service.util;

import com.bosch.nevonex.platform_service.IPlatform_Service;
import com.bosch.nevonex.platform_service.IPlatform_ServiceProvider;
import com.bosch.nevonex.platform_service.IPlatform_serviceFactory;

import com.bosch.nevonex.platform_service.impl.Platform_servicePackage;

import org.eclipse.emf.common.notify.Adapter;
import org.eclipse.emf.common.notify.Notifier;

import org.eclipse.emf.common.notify.impl.AdapterFactoryImpl;

import org.eclipse.emf.ecore.EObject;

/**
 * @generated
 */
public class Platform_serviceAdapterFactory extends AdapterFactoryImpl {
	protected static Platform_servicePackage modelPackage;

	public Platform_serviceAdapterFactory() {
		if (modelPackage == null) {
			modelPackage = Platform_servicePackage.eINSTANCE;
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

	protected Platform_serviceSwitch<Adapter> modelSwitch = new Platform_serviceSwitch<Adapter>() {
		@Override
		public Adapter caseIPlatform_Service(IPlatform_Service object) {
			return createIPlatform_ServiceAdapter();
		}

		@Override
		public Adapter casePlatform_Service(IPlatform_Service object) {
			return createPlatform_ServiceAdapter();
		}

		@Override
		public Adapter caseIPlatform_ServiceProvider(IPlatform_ServiceProvider object) {
			return createIPlatform_ServiceProviderAdapter();
		}

		@Override
		public Adapter casePlatform_ServiceProvider(IPlatform_ServiceProvider object) {
			return createPlatform_ServiceProviderAdapter();
		}

		@Override
		public Adapter caseIPlatform_serviceFactory(IPlatform_serviceFactory object) {
			return createIPlatform_serviceFactoryAdapter();
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

	public Adapter createIPlatform_ServiceAdapter() {
		return null;
	}

	public Adapter createPlatform_ServiceAdapter() {
		return null;
	}

	public Adapter createIPlatform_ServiceProviderAdapter() {
		return null;
	}

	public Adapter createPlatform_ServiceProviderAdapter() {
		return null;
	}

	public Adapter createIPlatform_serviceFactoryAdapter() {
		return null;
	}

	public Adapter createEObjectAdapter() {
		return null;
	}

} //Platform_serviceAdapterFactory
