/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.gpsplugin;

import com.bosch.nevonex.fcal.IINTERNAL_GPS_DETAILEDINFO_R;
import org.eclipse.emf.ecore.EObject;

/**
 * @generated
 */
public interface IGPSPlugin extends EObject {
	String getGPSSensorPosition();

	void setGPSSensorPosition(String value);
	IINTERNAL_GPS_DETAILEDINFO_R getInternalGpsDetailedInfo();

	void setInternalGpsDetailedInfo(IINTERNAL_GPS_DETAILEDINFO_R value);
} // IGPSPlugin
