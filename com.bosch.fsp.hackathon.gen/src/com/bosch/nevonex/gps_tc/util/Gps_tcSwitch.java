/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.gps_tc.util;

import com.bosch.nevonex.gps_tc.IGPS_TC;
import com.bosch.nevonex.gps_tc.IGPS_TCProvider;
import com.bosch.nevonex.gps_tc.IGps_tcFactory;

import com.bosch.nevonex.gps_tc.impl.Gps_tcPackage;

import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.EPackage;

import org.eclipse.emf.ecore.util.Switch;
import com.bosch.nevonex.common.ITopicObject;

/**
 * @generated
 */
public class Gps_tcSwitch<T> extends Switch<T> {
	protected static Gps_tcPackage modelPackage;

	public Gps_tcSwitch() {
		if (modelPackage == null) {
			modelPackage = Gps_tcPackage.eINSTANCE;
		}
	}

	@Override
	protected boolean isSwitchFor(EPackage ePackage) {
		return ePackage == modelPackage;
	}

	@Override
	protected T doSwitch(int classifierID, EObject theEObject) {
		if (classifierID < 80) return doSwitch_chunk0(classifierID, theEObject);
		return defaultCase(theEObject);
	}

	private T doSwitch_chunk0(int classifierID, EObject theEObject) {
		switch (classifierID) {
			case Gps_tcPackage.IGPS_TC: {
				IGPS_TC iGPS_TC = (IGPS_TC) theEObject;
				T result = caseIGPS_TC(iGPS_TC);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case Gps_tcPackage.GPS_TC: {
				IGPS_TC gPS_TC = (IGPS_TC) theEObject;
				T result = caseGPS_TC(gPS_TC);
				if (result == null)
					result = caseTopicObject((ITopicObject) gPS_TC);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case Gps_tcPackage.IGPS_TC_PROVIDER: {
				IGPS_TCProvider iGPS_TCProvider = (IGPS_TCProvider) theEObject;
				T result = caseIGPS_TCProvider(iGPS_TCProvider);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case Gps_tcPackage.GPS_TC_PROVIDER: {
				IGPS_TCProvider gPS_TCProvider = (IGPS_TCProvider) theEObject;
				T result = caseGPS_TCProvider(gPS_TCProvider);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case Gps_tcPackage.I_GPS_TC_FACTORY: {
				IGps_tcFactory iGps_tcFactory = (IGps_tcFactory) theEObject;
				T result = caseIGps_tcFactory(iGps_tcFactory);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			default:
				return defaultCase(theEObject);
		}
	}

	public T caseIGPS_TC(IGPS_TC object) {
		return null;
	}

	public T caseGPS_TC(IGPS_TC object) {
		return null;
	}

	public T caseIGPS_TCProvider(IGPS_TCProvider object) {
		return null;
	}

	public T caseGPS_TCProvider(IGPS_TCProvider object) {
		return null;
	}

	public T caseIGps_tcFactory(IGps_tcFactory object) {
		return null;
	}

	public T caseTopicObject(ITopicObject object) {
		return null;
	}

	@Override
	public T defaultCase(EObject object) {
		return null;
	}

} //Gps_tcSwitch
