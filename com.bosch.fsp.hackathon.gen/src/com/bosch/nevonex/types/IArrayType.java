/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.types;

import com.bosch.fsp.runtime.feature.exception.MachineInitException;
import com.bosch.fsp.runtime.feature.exception.MachineReadException;

import org.eclipse.emf.common.util.Enumerator;

import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.EStructuralFeature;

/**
 * @generated
 */
public interface IArrayType extends EObject {
	/**
	 * @generated
	 */
	default String[] getFeatureNames() {
		java.util.List<String> names = new java.util.ArrayList<>();
		for (EStructuralFeature f : eClass().getEAllStructuralFeatures()) {
			names.add(f.getName());
		}
		return names.toArray(new String[0]);
	}

	/**
	 * @generated
	 */
	default void setArrayFeature(int index, Object value) throws MachineReadException {
		String[] featureNames = getFeatureNames();
		if (index < featureNames.length) {
			EStructuralFeature feature = eClass().getEStructuralFeature(featureNames[index]);
			if (feature != null) {
				eSet(feature, value);
			}
		}
	}

	/**
	 * @generated
	 */
	default Object[] getArrayValues() {
		String[] featureNames = getFeatureNames();
		Object[] values = new Object[featureNames.length];
		int index = 0;
		for (String featureName : featureNames) {
			EStructuralFeature feature = eClass().getEStructuralFeature(featureName);
			if (feature != null) {
				Object value = eGet(feature);
				if (value instanceof Enumerator) {
					values[index] = ((Enumerator) value).getValue();
				} else if (value instanceof Boolean) {
					values[index] = ((Boolean) value) ? 1 : 0;
				} else if (value instanceof boolean[]) {
					boolean[] booleanArray = (boolean[]) value;
					int[] intArray = new int[booleanArray.length];
					for (int i = 0; i < intArray.length; i++) {
						intArray[i] = booleanArray[i] ? 1 : 0;
					}
					values[index] = intArray;
				} else {
					values[index] = value;
				}
				index++;
			}
		}
		return values;
	}

	/**
	 * @generated
	 */
	default void setArrayFeature(String name, String value) throws MachineInitException {
		String[] featureNames = getFeatureNames();
		for (String featureName : featureNames) {
			if (featureName.equalsIgnoreCase(name)) {
				EStructuralFeature feature = eClass().getEStructuralFeature(featureName);
				if (feature != null) {
					eSet(feature, value);
				}
				break;
			}
		}
	}

} // IArrayType
