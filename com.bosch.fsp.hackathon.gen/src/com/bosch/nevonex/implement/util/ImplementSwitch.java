/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.implement.util;

import com.bosch.nevonex.implement.IImplement;
import com.bosch.nevonex.implement.IImplementProvider;
import com.bosch.nevonex.implement.IImplementFactory;

import com.bosch.nevonex.implement.impl.ImplementPackage;

import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.EPackage;

import org.eclipse.emf.ecore.util.Switch;
import com.bosch.nevonex.common.ITopicObject;

/**
 * @generated
 */
public class ImplementSwitch<T> extends Switch<T> {
	protected static ImplementPackage modelPackage;

	public ImplementSwitch() {
		if (modelPackage == null) {
			modelPackage = ImplementPackage.eINSTANCE;
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
			case ImplementPackage.I_IMPLEMENT: {
				IImplement iImplement = (IImplement) theEObject;
				T result = caseIImplement(iImplement);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case ImplementPackage.IMPLEMENT: {
				IImplement implement = (IImplement) theEObject;
				T result = caseImplement(implement);
				if (result == null)
					result = caseTopicObject((ITopicObject) implement);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case ImplementPackage.I_IMPLEMENT_PROVIDER: {
				IImplementProvider iImplementProvider = (IImplementProvider) theEObject;
				T result = caseIImplementProvider(iImplementProvider);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case ImplementPackage.IMPLEMENT_PROVIDER: {
				IImplementProvider implementProvider = (IImplementProvider) theEObject;
				T result = caseImplementProvider(implementProvider);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			case ImplementPackage.I_IMPLEMENT_FACTORY: {
				IImplementFactory iImplementFactory = (IImplementFactory) theEObject;
				T result = caseIImplementFactory(iImplementFactory);
				if (result == null)
					result = defaultCase(theEObject);
				return result;
			}
			default:
				return defaultCase(theEObject);
		}
	}

	public T caseIImplement(IImplement object) {
		return null;
	}

	public T caseImplement(IImplement object) {
		return null;
	}

	public T caseIImplementProvider(IImplementProvider object) {
		return null;
	}

	public T caseImplementProvider(IImplementProvider object) {
		return null;
	}

	public T caseIImplementFactory(IImplementFactory object) {
		return null;
	}

	public T caseTopicObject(ITopicObject object) {
		return null;
	}

	@Override
	public T defaultCase(EObject object) {
		return null;
	}

} //ImplementSwitch
