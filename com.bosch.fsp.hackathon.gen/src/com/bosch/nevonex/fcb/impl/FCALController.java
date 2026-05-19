/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.fcb.impl;

import com.bosch.fsp.logger.FCALLogs;
import com.bosch.fsp.logger.LoggerConstants;

import com.bosch.fsp.platform.InterfaceDetails;

import com.bosch.fsp.runtime.feature.exception.CommunicationException;
import com.bosch.fsp.runtime.feature.exception.InterfaceDisabledException;
import com.bosch.fsp.runtime.feature.exception.MachineReadException;
import com.bosch.fsp.runtime.feature.exception.MachineWriteException;

import com.bosch.nevonex.common.ITopicObject;

import com.bosch.nevonex.fcb.IFCALController;
import com.bosch.nevonex.fcb.SubscriberEnum;

import java.lang.reflect.InvocationTargetException;

import java.util.List;

import org.eclipse.emf.common.util.EList;

import org.eclipse.emf.ecore.EClass;
import org.eclipse.emf.ecore.EObject;

import org.eclipse.emf.ecore.impl.EObjectImpl;

/**
 * An implementation of the model object '<em><b>FCALController</b></em>'.
 * @generated
 */
public class FCALController extends EObjectImpl implements IFCALController {
	/**
	 * @generated
	 */
	public FCALController() {
		super();
	}

	/**
	 * @generated
	 */
	@Override
	protected EClass eStaticClass() {
		return FcbPackage.Literals.FCAL_CONTROLLER;
	}

	/**
	 * @generated
	 */
	public void setMachineUpdate(ITopicObject machine, String attribute, Object payload, InterfaceDetails details,
			long timestamp) throws MachineReadException {
		// Machine update logic
	}

	/**
	 * @generated
	 */
	public void publish(String interfaceKey, String interfaceName, List<EObject> payloadValue, SubscriberEnum subscriber)
			throws MachineWriteException, CommunicationException, InterfaceDisabledException {
		// MQTT publish logic
	}
} //FCALController
