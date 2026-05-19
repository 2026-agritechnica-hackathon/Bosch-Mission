/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.fcal;

import com.bosch.nevonex.types.IArrayType;

/**
 * @generated
 */
public interface IINTERNAL_GPS_DETAILEDINFO_R extends IArrayType {
	double getLatitude();

	void setLatitude(double value);
	double getLongitude();

	void setLongitude(double value);
	double getAltitude();

	void setAltitude(double value);
	String getTimeStamp();

	void setTimeStamp(String value);
	float getHorizontalAccuracy();

	void setHorizontalAccuracy(float value);
	float getVerticalAccuracy();

	void setVerticalAccuracy(float value);
	float getHorizontalDil();

	void setHorizontalDil(float value);
	float getPositionDil();

	void setPositionDil(float value);
	float getVerticalDil();

	void setVerticalDil(float value);
	float getTimeDil();

	void setTimeDil(float value);
	float getSpeed();

	void setSpeed(float value);
	float getCourse();

	void setCourse(float value);
	int getNumberOfSatellites();

	void setNumberOfSatellites(int value);
} // IINTERNAL_GPS_DETAILEDINFO_R
