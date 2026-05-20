/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.fcal;

/**
 * @generated
 */
public interface IFcalFactory {
	IFcalFactory INSTANCE = com.bosch.nevonex.fcal.impl.FcalFactory.eINSTANCE;

	IBulkProcessor createBulkProcessor();

	IGPS_INFO_R createGPS_INFO_R();

} //IFcalFactory
