/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.platform_service.util;

import com.bosch.nevonex.platform_service.IPlatform_Service;
import com.bosch.nevonex.platform_service.IPlatform_ServiceProvider;
import com.bosch.nevonex.platform_service.IPlatform_serviceFactory;

import com.bosch.nevonex.platform_service.impl.Platform_servicePackage;

import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.EPackage;

import org.eclipse.emf.ecore.util.Switch;
import com.bosch.nevonex.common.ITopicObject;

/**
 * @generated
 */
public class Platform_serviceSwitch<T> extends Switch<T> {
	protected static Platform_servicePackage modelPackage;

	public Platform_serviceSwitch() {
		if (modelPackage == null) {
			modelPackage = Platform_servicePackage.eINSTANCE;
		}
	}

	@Override
	protected boolean isSwitchFor(EPackage ePackage) {
		return ePackage == modelPackage;
	}

	@Override
	protected T doSwitch(int classifierID, EObject theEObject) {
		if (classifierID < 80) return doSwitch_chunk0(classifierID, theEObject);
		return defaultCase(theEObject);
	}

	private T doSwitch_chunk0(int classifierID, EObject theEObject) {
		switch (classifierID) {
			case Platform_servicePackage.I_PLATFORM_SERVICE: {
				IPlatform_Service iPlatform_Service = (IPlatform_Service) theEObject;
				T result = caseIPlatform_Service(iPlatform_Service);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case Platform_servicePackage.PLATFORM_SERVICE: {
				IPlatform_Service platform_Service = (IPlatform_Service) theEObject;
				T result = casePlatform_Service(platform_Service);
				if (result == null)
					result = caseTopicObject((ITopicObject) platform_Service);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case Platform_servicePackage.I_PLATFORM_SERVICE_PROVIDER: {
				IPlatform_ServiceProvider iPlatform_ServiceProvider = (IPlatform_ServiceProvider) theEObject;
				T result = caseIPlatform_ServiceProvider(iPlatform_ServiceProvider);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case Platform_servicePackage.PLATFORM_SERVICE_PROVIDER: {
				IPlatform_ServiceProvider platform_ServiceProvider = (IPlatform_ServiceProvider) theEObject;
				T result = casePlatform_ServiceProvider(platform_ServiceProvider);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case Platform_servicePackage.I_PLATFORM_SERVICE_FACTORY: {
				IPlatform_serviceFactory iPlatform_serviceFactory = (IPlatform_serviceFactory) theEObject;
				T result = caseIPlatform_serviceFactory(iPlatform_serviceFactory);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			default:
				return defaultCase(theEObject);
		}
	}

	public T caseIPlatform_Service(IPlatform_Service object) {
		return null;
	}

	public T casePlatform_Service(IPlatform_Service object) {
		return null;
	}

	public T caseIPlatform_ServiceProvider(IPlatform_ServiceProvider object) {
		return null;
	}

	public T casePlatform_ServiceProvider(IPlatform_ServiceProvider object) {
		return null;
	}

	public T caseIPlatform_serviceFactory(IPlatform_serviceFactory object) {
		return null;
	}

	public T caseTopicObject(ITopicObject object) {
		return null;
	}

	@Override
	public T defaultCase(EObject object) {
		return null;
	}

} //Platform_serviceSwitch
