/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.gps_tc;

import com.bosch.nevonex.fcal.IGPS_INFO_R;
import org.eclipse.emf.ecore.EObject;

/**
 * @generated
 */
public interface IGPS_TC extends EObject {
	String getActive_TC_GPS_source();

	void setActive_TC_GPS_source(String value);
	String getPositionofGpsSensor();

	void setPositionofGpsSensor(String value);
	IGPS_INFO_R getTcGpsInfo();

	void setTcGpsInfo(IGPS_INFO_R value);
} // IGPS_TC
