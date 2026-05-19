/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.implement.impl;

import com.bosch.fsp.logger.FCALLogs;
import com.bosch.fsp.logger.LoggerConstants;

import com.bosch.fsp.platform.InterfaceDetails;

import com.bosch.fsp.runtime.feature.IMachine;

import com.bosch.nevonex.common.ITopicObject;
import com.bosch.nevonex.common.impl.TopicObject;

import com.bosch.nevonex.implement.IImplement;

import com.bosch.nevonex.types.IPropertyChange;
import com.bosch.nevonex.types.impl.TypesPackage;

import java.beans.PropertyChangeEvent;
import java.beans.PropertyChangeListener;

import java.lang.reflect.InvocationTargetException;

import java.util.Collection;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.eclipse.emf.common.util.BasicEList;
import org.eclipse.emf.common.util.EList;

import org.eclipse.emf.ecore.EClass;
import org.eclipse.emf.ecore.InternalEObject;

import org.eclipse.emf.ecore.util.EDataTypeUniqueEList;

/**
 * An implementation of the model object '<em><b>Implement</b></em>'.
 * @generated
 */
public class Implement extends TopicObject implements IImplement {
	protected EList<PropertyChangeListener> listeners;
	protected Map<String, InterfaceDetails> interfaceDetailMap = new HashMap<>();
	protected double lifetimeWorkingHours = 0.0;

	/**
	 * @generated
	 */
	protected Implement() {
		super();
		initInterfaceDetails();
	}

	private void initInterfaceDetails() {
		// Interface details initialization
	}

	/**
	 * @generated
	 */
	@Override
	protected EClass eStaticClass() {
		return ImplementPackage.Literals.IMPLEMENT;
	}

	public double getLifetimeWorkingHours() {
		return lifetimeWorkingHours;
	}

	public void setLifetimeWorkingHours(double newLifetimeWorkingHours) {
		lifetimeWorkingHours = newLifetimeWorkingHours;
	}

	/**
	 * @generated
	 */
	public void addPropertyChangeListener(PropertyChangeListener listener) {
		if (listeners == null) {
			listeners = new BasicEList<>();
		}
		listeners.add(listener);
	}

	/**
	 * @generated
	 */
	public void removePropertyChangeListener(PropertyChangeListener listener) {
		if (listeners != null) {
			listeners.remove(listener);
		}
	}

	/**
	 * @generated
	 */
	public void notifyPropertyChange(String name, Object oldValue, Object newValue) {
		if (listeners != null) {
			for (PropertyChangeListener listener : this.listeners) {
				listener.propertyChange(new PropertyChangeEvent(this, name, oldValue, newValue));
			}
		}
	}

	/**
	 * @generated
	 */
	@Override
	public Object eGet(int featureID, boolean resolve, boolean coreType) {
		switch (featureID) {
		case ImplementPackage.I_IMPLEMENT__LIFETIME_WORKING_HOURS:
			return getLifetimeWorkingHours();
		}
		return super.eGet(featureID, resolve, coreType);
	}

	/**
	 * @generated
	 */
	@SuppressWarnings("unchecked")
	@Override
	public void eSet(int featureID, Object newValue) {
		switch (featureID) {
		case ImplementPackage.I_IMPLEMENT__LIFETIME_WORKING_HOURS:
			setLifetimeWorkingHours((Double) newValue);
			return;
		}
		super.eSet(featureID, newValue);
	}

	/**
	 * @generated
	 */
	@Override
	public void eUnset(int featureID) {
		switch (featureID) {
		case ImplementPackage.I_IMPLEMENT__LIFETIME_WORKING_HOURS:
			setLifetimeWorkingHours(0.0);
			return;
		}
		super.eUnset(featureID);
	}

	/**
	 * @generated
	 */
	@Override
	public boolean eIsSet(int featureID) {
		switch (featureID) {
		case ImplementPackage.I_IMPLEMENT__LIFETIME_WORKING_HOURS:
			return lifetimeWorkingHours != 0.0;
		}
		return super.eIsSet(featureID);
	}
} //Implement
