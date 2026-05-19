/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.gpsplugin;

/**
 * @generated
 */
public interface IGpspluginFactory {
	IGpspluginFactory INSTANCE = com.bosch.nevonex.gpsplugin.impl.GpspluginFactory.eINSTANCE;

	IGPSPlugin createGPSPlugin();

	IGPSPluginProvider createGPSPluginProvider();

} //IGpspluginFactory
