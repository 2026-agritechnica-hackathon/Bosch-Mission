/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.fcal.impl;

import com.bosch.nevonex.fcal.IGPS_INFO_R;

import org.eclipse.emf.ecore.EClass;
import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.InternalEObject;

import org.eclipse.emf.ecore.impl.EObjectImpl;

/**
 * @generated
 */
public class GPS_INFO_R extends EObjectImpl implements IGPS_INFO_R {
	protected double latitude = 0.0;
	protected double longitude = 0.0;
	protected double altitude = 0.0;
	protected double positionTime = 0.0;
	protected float hDOP = 0.0f;
	protected float pDOP = 0.0f;
	protected int numberOfSattelites = 0;

	protected GPS_INFO_R() {
		super();
	}

	@Override
	protected EClass eStaticClass() {
		return FcalPackage.Literals.GPS_INFO_R;
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

	public double getPositionTime() {
		return positionTime;
	}

	public void setPositionTime(double newPositionTime) {
		positionTime = newPositionTime;
	}

	public float getHDOP() {
		return hDOP;
	}

	public void setHDOP(float newHDOP) {
		hDOP = newHDOP;
	}

	public float getPDOP() {
		return pDOP;
	}

	public void setPDOP(float newPDOP) {
		pDOP = newPDOP;
	}

	public int getNumberOfSattelites() {
		return numberOfSattelites;
	}

	public void setNumberOfSattelites(int newNumberOfSattelites) {
		numberOfSattelites = newNumberOfSattelites;
	}

	@Override
	public Object eGet(int featureID, boolean resolve, boolean coreType) {
		switch (featureID) {
		case FcalPackage.GPS_INFO_R__LATITUDE:
			return getLatitude();
		case FcalPackage.GPS_INFO_R__LONGITUDE:
			return getLongitude();
		case FcalPackage.GPS_INFO_R__ALTITUDE:
			return getAltitude();
		case FcalPackage.GPS_INFO_R__POSITION_TIME:
			return getPositionTime();
		case FcalPackage.GPS_INFO_R__HDOP:
			return getHDOP();
		case FcalPackage.GPS_INFO_R__PDOP:
			return getPDOP();
		case FcalPackage.GPS_INFO_R__NUMBER_OF_SATTELITES:
			return getNumberOfSattelites();
		}
		return super.eGet(featureID, resolve, coreType);
	}

	@Override
	public void eSet(int featureID, Object newValue) {
		switch (featureID) {
		case FcalPackage.GPS_INFO_R__LATITUDE:
			setLatitude((Double) newValue);
			return;
		case FcalPackage.GPS_INFO_R__LONGITUDE:
			setLongitude((Double) newValue);
			return;
		case FcalPackage.GPS_INFO_R__ALTITUDE:
			setAltitude((Double) newValue);
			return;
		case FcalPackage.GPS_INFO_R__POSITION_TIME:
			setPositionTime((Double) newValue);
			return;
		case FcalPackage.GPS_INFO_R__HDOP:
			setHDOP((Float) newValue);
			return;
		case FcalPackage.GPS_INFO_R__PDOP:
			setPDOP((Float) newValue);
			return;
		case FcalPackage.GPS_INFO_R__NUMBER_OF_SATTELITES:
			setNumberOfSattelites((Integer) newValue);
			return;
		}
		super.eSet(featureID, newValue);
	}

	@Override
	public void eUnset(int featureID) {
		switch (featureID) {
		case FcalPackage.GPS_INFO_R__LATITUDE:
			setLatitude(0.0);
			return;
		case FcalPackage.GPS_INFO_R__LONGITUDE:
			setLongitude(0.0);
			return;
		case FcalPackage.GPS_INFO_R__ALTITUDE:
			setAltitude(0.0);
			return;
		case FcalPackage.GPS_INFO_R__POSITION_TIME:
			setPositionTime(0.0);
			return;
		case FcalPackage.GPS_INFO_R__HDOP:
			setHDOP(0.0f);
			return;
		case FcalPackage.GPS_INFO_R__PDOP:
			setPDOP(0.0f);
			return;
		case FcalPackage.GPS_INFO_R__NUMBER_OF_SATTELITES:
			setNumberOfSattelites(0);
			return;
		}
		super.eUnset(featureID);
	}

	@Override
	public boolean eIsSet(int featureID) {
		switch (featureID) {
		case FcalPackage.GPS_INFO_R__LATITUDE:
			return latitude != 0.0;
		case FcalPackage.GPS_INFO_R__LONGITUDE:
			return longitude != 0.0;
		case FcalPackage.GPS_INFO_R__ALTITUDE:
			return altitude != 0.0;
		case FcalPackage.GPS_INFO_R__POSITION_TIME:
			return positionTime != 0.0;
		case FcalPackage.GPS_INFO_R__HDOP:
			return hDOP != 0.0f;
		case FcalPackage.GPS_INFO_R__PDOP:
			return pDOP != 0.0f;
		case FcalPackage.GPS_INFO_R__NUMBER_OF_SATTELITES:
			return numberOfSattelites != 0;
		}
		return super.eIsSet(featureID);
	}
} //GPS_INFO_R
