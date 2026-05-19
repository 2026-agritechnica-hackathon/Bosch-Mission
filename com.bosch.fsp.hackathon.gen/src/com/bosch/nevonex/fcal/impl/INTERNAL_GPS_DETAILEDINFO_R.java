/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.fcal.impl;

import com.bosch.nevonex.fcal.IINTERNAL_GPS_DETAILEDINFO_R;

import org.eclipse.emf.ecore.EClass;
import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.InternalEObject;

import org.eclipse.emf.ecore.impl.EObjectImpl;

/**
 * @generated
 */
public class INTERNAL_GPS_DETAILEDINFO_R extends EObjectImpl implements IINTERNAL_GPS_DETAILEDINFO_R {
	protected double latitude = 0.0;
	protected double longitude = 0.0;
	protected double altitude = 0.0;
	protected String timeStamp = null;
	protected float horizontalAccuracy = 0.0f;
	protected float verticalAccuracy = 0.0f;
	protected float horizontalDil = 0.0f;
	protected float positionDil = 0.0f;
	protected float verticalDil = 0.0f;
	protected float timeDil = 0.0f;
	protected float speed = 0.0f;
	protected float course = 0.0f;
	protected int numberOfSatellites = 0;

	protected INTERNAL_GPS_DETAILEDINFO_R() {
		super();
	}

	@Override
	protected EClass eStaticClass() {
		return FcalPackage.Literals.INTERNAL_GPS_DETAILEDINFO_R;
	}

	public double getLatitude() {
		return latitude;
	}

	public void setLatitude(double newLatitude) {
		latitude = newLatitude;
	}

	public double getLongitude() {
		return longitude;
	}

	public void setLongitude(double newLongitude) {
		longitude = newLongitude;
	}

	public double getAltitude() {
		return altitude;
	}

	public void setAltitude(double newAltitude) {
		altitude = newAltitude;
	}

	public String getTimeStamp() {
		return timeStamp;
	}

	public void setTimeStamp(String newTimeStamp) {
		timeStamp = newTimeStamp;
	}

	public float getHorizontalAccuracy() {
		return horizontalAccuracy;
	}

	public void setHorizontalAccuracy(float newHorizontalAccuracy) {
		horizontalAccuracy = newHorizontalAccuracy;
	}

	public float getVerticalAccuracy() {
		return verticalAccuracy;
	}

	public void setVerticalAccuracy(float newVerticalAccuracy) {
		verticalAccuracy = newVerticalAccuracy;
	}

	public float getHorizontalDil() {
		return horizontalDil;
	}

	public void setHorizontalDil(float newHorizontalDil) {
		horizontalDil = newHorizontalDil;
	}

	public float getPositionDil() {
		return positionDil;
	}

	public void setPositionDil(float newPositionDil) {
		positionDil = newPositionDil;
	}

	public float getVerticalDil() {
		return verticalDil;
	}

	public void setVerticalDil(float newVerticalDil) {
		verticalDil = newVerticalDil;
	}

	public float getTimeDil() {
		return timeDil;
	}

	public void setTimeDil(float newTimeDil) {
		timeDil = newTimeDil;
	}

	public float getSpeed() {
		return speed;
	}

	public void setSpeed(float newSpeed) {
		speed = newSpeed;
	}

	public float getCourse() {
		return course;
	}

	public void setCourse(float newCourse) {
		course = newCourse;
	}

	public int getNumberOfSatellites() {
		return numberOfSatellites;
	}

	public void setNumberOfSatellites(int newNumberOfSatellites) {
		numberOfSatellites = newNumberOfSatellites;
	}

	@Override
	public Object eGet(int featureID, boolean resolve, boolean coreType) {
		switch (featureID) {
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__LATITUDE:
			return getLatitude();
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__LONGITUDE:
			return getLongitude();
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__ALTITUDE:
			return getAltitude();
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__TIME_STAMP:
			return getTimeStamp();
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__HORIZONTAL_ACCURACY:
			return getHorizontalAccuracy();
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__VERTICAL_ACCURACY:
			return getVerticalAccuracy();
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__HORIZONTAL_DIL:
			return getHorizontalDil();
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__POSITION_DIL:
			return getPositionDil();
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__VERTICAL_DIL:
			return getVerticalDil();
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__TIME_DIL:
			return getTimeDil();
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__SPEED:
			return getSpeed();
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__COURSE:
			return getCourse();
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__NUMBER_OF_SATELLITES:
			return getNumberOfSatellites();
		}
		return super.eGet(featureID, resolve, coreType);
	}

	@Override
	public void eSet(int featureID, Object newValue) {
		switch (featureID) {
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__LATITUDE:
			setLatitude((Double) newValue);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__LONGITUDE:
			setLongitude((Double) newValue);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__ALTITUDE:
			setAltitude((Double) newValue);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__TIME_STAMP:
			setTimeStamp((String) newValue);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__HORIZONTAL_ACCURACY:
			setHorizontalAccuracy((Float) newValue);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__VERTICAL_ACCURACY:
			setVerticalAccuracy((Float) newValue);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__HORIZONTAL_DIL:
			setHorizontalDil((Float) newValue);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__POSITION_DIL:
			setPositionDil((Float) newValue);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__VERTICAL_DIL:
			setVerticalDil((Float) newValue);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__TIME_DIL:
			setTimeDil((Float) newValue);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__SPEED:
			setSpeed((Float) newValue);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__COURSE:
			setCourse((Float) newValue);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__NUMBER_OF_SATELLITES:
			setNumberOfSatellites((Integer) newValue);
			return;
		}
		super.eSet(featureID, newValue);
	}

	@Override
	public void eUnset(int featureID) {
		switch (featureID) {
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__LATITUDE:
			setLatitude(0.0);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__LONGITUDE:
			setLongitude(0.0);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__ALTITUDE:
			setAltitude(0.0);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__TIME_STAMP:
			setTimeStamp(null);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__HORIZONTAL_ACCURACY:
			setHorizontalAccuracy(0.0f);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__VERTICAL_ACCURACY:
			setVerticalAccuracy(0.0f);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__HORIZONTAL_DIL:
			setHorizontalDil(0.0f);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__POSITION_DIL:
			setPositionDil(0.0f);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__VERTICAL_DIL:
			setVerticalDil(0.0f);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__TIME_DIL:
			setTimeDil(0.0f);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__SPEED:
			setSpeed(0.0f);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__COURSE:
			setCourse(0.0f);
			return;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__NUMBER_OF_SATELLITES:
			setNumberOfSatellites(0);
			return;
		}
		super.eUnset(featureID);
	}

	@Override
	public boolean eIsSet(int featureID) {
		switch (featureID) {
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__LATITUDE:
			return latitude != 0.0;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__LONGITUDE:
			return longitude != 0.0;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__ALTITUDE:
			return altitude != 0.0;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__TIME_STAMP:
			return timeStamp != null;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__HORIZONTAL_ACCURACY:
			return horizontalAccuracy != 0.0f;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__VERTICAL_ACCURACY:
			return verticalAccuracy != 0.0f;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__HORIZONTAL_DIL:
			return horizontalDil != 0.0f;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__POSITION_DIL:
			return positionDil != 0.0f;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__VERTICAL_DIL:
			return verticalDil != 0.0f;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__TIME_DIL:
			return timeDil != 0.0f;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__SPEED:
			return speed != 0.0f;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__COURSE:
			return course != 0.0f;
		case FcalPackage.INTERNAL_GPS_DETAILEDINFO_R__NUMBER_OF_SATELLITES:
			return numberOfSatellites != 0;
		}
		return super.eIsSet(featureID);
	}
} //INTERNAL_GPS_DETAILEDINFO_R
