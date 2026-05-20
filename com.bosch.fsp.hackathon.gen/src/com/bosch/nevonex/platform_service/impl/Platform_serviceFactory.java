/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.platform_service.impl;

import com.bosch.nevonex.platform_service.IPlatform_serviceFactory;
import com.bosch.nevonex.platform_service.IPlatform_Service;
import com.bosch.nevonex.platform_service.IPlatform_ServiceProvider;

import org.eclipse.emf.ecore.EClass;
import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.EPackage;

import org.eclipse.emf.ecore.impl.EFactoryImpl;

import org.eclipse.emf.ecore.plugin.EcorePlugin;

/**
 * @generated
 */
public class Platform_serviceFactory extends EFactoryImpl implements IPlatform_serviceFactory {
	public static final Platform_serviceFactory eINSTANCE = init();

	public static Platform_serviceFactory init() {
		try {
			Platform_serviceFactory thePlatform_serviceFactory = (Platform_serviceFactory) EPackage.Registry.INSTANCE.getEFactory(Platform_servicePackage.eNS_URI);
			if (thePlatform_serviceFactory != null) {
				return thePlatform_serviceFactory;
			}
		} catch (Exception exception) {
			EcorePlugin.INSTANCE.log(exception);
		}
		return new Platform_serviceFactory();
	}

	public Platform_serviceFactory() {
		super();
	}

	@Override
	public EObject create(EClass eClass) {
		switch (eClass.getClassifierID()) {
		case Platform_servicePackage.PLATFORM_SERVICE:
			return createPlatform_Service();
		case Platform_servicePackage.PLATFORM_SERVICE_PROVIDER:
			return createPlatform_ServiceProvider();
		default:
			throw new IllegalArgumentException("The class '" + eClass.getName() + "' is not a valid classifier");
		}
	}

	public IPlatform_Service createPlatform_Service() {
		Platform_Service platform_Service = new Platform_Service();
		return platform_Service;
	}

	public IPlatform_ServiceProvider createPlatform_ServiceProvider() {
		Platform_ServiceProvider platform_ServiceProvider = new Platform_ServiceProvider();
		return platform_ServiceProvider;
	}

	public Platform_servicePackage getPlatform_servicePackage() {
		return (Platform_servicePackage) getEPackage();
	}

	@Deprecated
	public static Platform_servicePackage getPackage() {
		return Platform_servicePackage.eINSTANCE;
	}

} //Platform_serviceFactory
