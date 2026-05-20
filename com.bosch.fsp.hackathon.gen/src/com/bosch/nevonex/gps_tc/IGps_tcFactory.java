/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.gps_tc;

/**
 * @generated
 */
public interface IGps_tcFactory {
	IGps_tcFactory INSTANCE = com.bosch.nevonex.gps_tc.impl.Gps_tcFactory.eINSTANCE;

	IGPS_TC createGPS_TC();

	IGPS_TCProvider createGPS_TCProvider();

} //IGps_tcFactory
