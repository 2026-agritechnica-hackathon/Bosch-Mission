/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.gpsplugin.impl;

import com.bosch.nevonex.gpsplugin.IGpspluginFactory;
import com.bosch.nevonex.gpsplugin.IGPSPlugin;
import com.bosch.nevonex.gpsplugin.IGPSPluginProvider;

import org.eclipse.emf.ecore.EClass;
import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.EPackage;

import org.eclipse.emf.ecore.impl.EFactoryImpl;

import org.eclipse.emf.ecore.plugin.EcorePlugin;

/**
 * @generated
 */
public class GpspluginFactory extends EFactoryImpl implements IGpspluginFactory {
	public static final GpspluginFactory eINSTANCE = init();

	public static GpspluginFactory init() {
		try {
			GpspluginFactory theGpspluginFactory = (GpspluginFactory) EPackage.Registry.INSTANCE.getEFactory(GpspluginPackage.eNS_URI);
			if (theGpspluginFactory != null) {
				return theGpspluginFactory;
			}
		} catch (Exception exception) {
			EcorePlugin.INSTANCE.log(exception);
		}
		return new GpspluginFactory();
	}

	public GpspluginFactory() {
		super();
	}

	@Override
	public EObject create(EClass eClass) {
		switch (eClass.getClassifierID()) {
		case GpspluginPackage.GPS_PLUGIN:
			return createGPSPlugin();
		case GpspluginPackage.GPS_PLUGIN_PROVIDER:
			return createGPSPluginProvider();
		default:
			throw new IllegalArgumentException("The class '" + eClass.getName() + "' is not a valid classifier");
		}
	}

	public IGPSPlugin createGPSPlugin() {
		GPSPlugin gPSPlugin = new GPSPlugin();
		return gPSPlugin;
	}

	public IGPSPluginProvider createGPSPluginProvider() {
		GPSPluginProvider gPSPluginProvider = new GPSPluginProvider();
		return gPSPluginProvider;
	}

	public GpspluginPackage getGpspluginPackage() {
		return (GpspluginPackage) getEPackage();
	}

	@Deprecated
	public static GpspluginPackage getPackage() {
		return GpspluginPackage.eINSTANCE;
	}

} //GpspluginFactory
