/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.fcal;

import com.bosch.nevonex.types.IArrayType;

/**
 * @generated
 */
public interface IGPS_INFO_R extends IArrayType {
	double getLatitude();

	void setLatitude(double value);
	double getLongitude();

	void setLongitude(double value);
	double getAltitude();

	void setAltitude(double value);
	double getPositionTime();

	void setPositionTime(double value);
	float getHDOP();

	void setHDOP(float value);
	float getPDOP();

	void setPDOP(float value);
	int getNumberOfSattelites();

	void setNumberOfSattelites(int value);
} // IGPS_INFO_R
