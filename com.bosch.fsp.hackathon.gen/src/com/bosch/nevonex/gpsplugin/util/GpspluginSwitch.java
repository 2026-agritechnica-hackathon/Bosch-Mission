/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.gpsplugin.util;

import com.bosch.nevonex.gpsplugin.IGPSPlugin;
import com.bosch.nevonex.gpsplugin.IGPSPluginProvider;
import com.bosch.nevonex.gpsplugin.IGpspluginFactory;

import com.bosch.nevonex.gpsplugin.impl.GpspluginPackage;

import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.EPackage;

import org.eclipse.emf.ecore.util.Switch;
import com.bosch.nevonex.common.ITopicObject;

/**
 * @generated
 */
public class GpspluginSwitch<T> extends Switch<T> {
	protected static GpspluginPackage modelPackage;

	public GpspluginSwitch() {
		if (modelPackage == null) {
			modelPackage = GpspluginPackage.eINSTANCE;
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
			case GpspluginPackage.IGPS_PLUGIN: {
				IGPSPlugin iGPSPlugin = (IGPSPlugin) theEObject;
				T result = caseIGPSPlugin(iGPSPlugin);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case GpspluginPackage.GPS_PLUGIN: {
				IGPSPlugin gPSPlugin = (IGPSPlugin) theEObject;
				T result = caseGPSPlugin(gPSPlugin);
				if (result == null)
					result = caseTopicObject((ITopicObject) gPSPlugin);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case GpspluginPackage.IGPS_PLUGIN_PROVIDER: {
				IGPSPluginProvider iGPSPluginProvider = (IGPSPluginProvider) theEObject;
				T result = caseIGPSPluginProvider(iGPSPluginProvider);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case GpspluginPackage.GPS_PLUGIN_PROVIDER: {
				IGPSPluginProvider gPSPluginProvider = (IGPSPluginProvider) theEObject;
				T result = caseGPSPluginProvider(gPSPluginProvider);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case GpspluginPackage.I_GPSPLUGIN_FACTORY: {
				IGpspluginFactory iGpspluginFactory = (IGpspluginFactory) theEObject;
				T result = caseIGpspluginFactory(iGpspluginFactory);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			default:
				return defaultCase(theEObject);
		}
	}

	public T caseIGPSPlugin(IGPSPlugin object) {
		return null;
	}

	public T caseGPSPlugin(IGPSPlugin object) {
		return null;
	}

	public T caseIGPSPluginProvider(IGPSPluginProvider object) {
		return null;
	}

	public T caseGPSPluginProvider(IGPSPluginProvider object) {
		return null;
	}

	public T caseIGpspluginFactory(IGpspluginFactory object) {
		return null;
	}

	public T caseTopicObject(ITopicObject object) {
		return null;
	}

	@Override
	public T defaultCase(EObject object) {
		return null;
	}

} //GpspluginSwitch
