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

	IINTERNAL_GPS_DETAILEDINFO_R createINTERNAL_GPS_DETAILEDINFO_R();

} //IFcalFactory
