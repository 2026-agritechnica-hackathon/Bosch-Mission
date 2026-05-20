/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.fcal.util;

import com.bosch.nevonex.fcal.IBulkProcessor;
import com.bosch.nevonex.fcal.IFcalFactory;
import com.bosch.nevonex.fcal.IGPS_INFO_R;

import com.bosch.nevonex.fcal.impl.FcalPackage;

import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.EPackage;

import org.eclipse.emf.ecore.util.Switch;
import com.bosch.nevonex.types.IArrayType;

/**
 * @generated
 */
public class FcalSwitch<T> extends Switch<T> {
	protected static FcalPackage modelPackage;

	public FcalSwitch() {
		if (modelPackage == null) {
			modelPackage = FcalPackage.eINSTANCE;
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
			case FcalPackage.I_BULK_PROCESSOR: {
				IBulkProcessor iBulkProcessor = (IBulkProcessor) theEObject;
				T result = caseIBulkProcessor(iBulkProcessor);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case FcalPackage.BULK_PROCESSOR: {
				IBulkProcessor bulkProcessor = (IBulkProcessor) theEObject;
				T result = caseBulkProcessor(bulkProcessor);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case FcalPackage.I_FCAL_FACTORY: {
				IFcalFactory iFcalFactory = (IFcalFactory) theEObject;
				T result = caseIFcalFactory(iFcalFactory);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case FcalPackage.GPS_INFO_R: {
				IGPS_INFO_R gPS_INFO_R = (IGPS_INFO_R) theEObject;
				T result = caseGPS_INFO_R(gPS_INFO_R);
				if (result == null)
					result = caseIArrayType((IArrayType) gPS_INFO_R);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			default:
				return defaultCase(theEObject);
		}
	}

	public T caseIBulkProcessor(IBulkProcessor object) {
		return null;
	}

	public T caseBulkProcessor(IBulkProcessor object) {
		return null;
	}

	public T caseIFcalFactory(IFcalFactory object) {
		return null;
	}

	public T caseGPS_INFO_R(IGPS_INFO_R object) {
		return null;
	}

	public T caseIArrayType(IArrayType object) {
		return null;
	}

	@Override
	public T defaultCase(EObject object) {
		return null;
	}

} //FcalSwitch
