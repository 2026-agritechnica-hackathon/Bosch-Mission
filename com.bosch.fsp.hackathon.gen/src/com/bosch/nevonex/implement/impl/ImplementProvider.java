/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.implement.impl;

import com.bosch.fsp.logger.FCALLogs;
import com.bosch.fsp.logger.LoggerConstants;

import com.bosch.fsp.runtime.feature.IMachine;
import com.bosch.fsp.runtime.feature.IMachineProvider;
import com.bosch.fsp.runtime.feature.MachineConnectionInfo;

import com.bosch.fsp.runtime.feature.exception.CommunicationException;
import com.bosch.fsp.runtime.feature.exception.MachineInitException;
import com.bosch.fsp.runtime.feature.exception.NevonexException;

import com.bosch.fsp.runtime.util.internal.Util;

import com.bosch.nevonex.common.ITopicObject;

import com.bosch.nevonex.fcb.IFCALController;
import com.bosch.nevonex.fcb.impl.ConnectionFactory;
import com.bosch.nevonex.fcb.impl.FCALController;
import com.bosch.nevonex.fcb.impl.PublishConnectionFactory;

import com.bosch.nevonex.implement.IImplement;
import com.bosch.nevonex.implement.IImplementProvider;

import com.bosch.nevonex.types.IPropertyChange;
import com.bosch.nevonex.types.impl.TypesPackage;

import java.beans.PropertyChangeEvent;
import java.beans.PropertyChangeListener;

import java.io.InputStream;

import java.lang.reflect.InvocationTargetException;

import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.apache.commons.lang3.exception.ExceptionUtils;

import org.eclipse.emf.common.notify.NotificationChain;
import org.eclipse.emf.common.util.BasicEList;
import org.eclipse.emf.common.util.EList;
import org.eclipse.emf.common.util.Enumerator;

import org.eclipse.emf.ecore.EClass;
import org.eclipse.emf.ecore.EClassifier;
import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.EReference;
import org.eclipse.emf.ecore.EStructuralFeature;
import org.eclipse.emf.ecore.InternalEObject;

import org.eclipse.emf.ecore.impl.EObjectImpl;

import org.eclipse.emf.ecore.util.EDataTypeUniqueEList;

import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;

/**
 * An implementation of the model object '<em><b>ImplementProvider</b></em>'.
 * @generated
 */
public class ImplementProvider extends EObjectImpl implements IImplementProvider, IMachineProvider {
	protected EList<PropertyChangeListener> listeners;
	protected IFCALController controller;
	protected IImplement implement;

	private Map<String, ITopicObject> indexToObjectMap = new HashMap<>();

	/**
	 * @generated
	 */
	public ImplementProvider() {
		super();
	}

	public IImplement getImplement() {
		if (implement != null && ((org.eclipse.emf.ecore.EObject) implement).eIsProxy()) {
			org.eclipse.emf.ecore.InternalEObject old = (org.eclipse.emf.ecore.InternalEObject) implement;
			implement = (IImplement) eResolveProxy(old);
		}
		return implement;
	}

	public IImplement basicGetImplement() {
		return implement;
	}

	public void setImplement(IImplement newImplement) {
		implement = newImplement;
	}

	public boolean acceptDom(String root) {
		return "implement".equalsIgnoreCase(root);
	}

	/**
	 * @generated
	 */
	public void createMachines(InputStream stream) throws MachineInitException {
		try {
			Element root = Util.getDomRootElement(stream);
			List<Node> secondLevelNodeList = new ArrayList<Node>();
			if ("root".equalsIgnoreCase(root.getNodeName())) {
				NodeList childNodes = root.getChildNodes();
				for (int i = 0; i < childNodes.getLength(); i++) {
					Node secondLevelNode = childNodes.item(i);
					if (secondLevelNode.getNodeType() == Node.ELEMENT_NODE
							&& acceptDom(secondLevelNode.getNodeName())) {
						secondLevelNodeList.add(secondLevelNode);
					}
				}
			} else {
				if (root.getNodeType() == Node.ELEMENT_NODE && acceptDom(root.getNodeName())) {
					secondLevelNodeList.add(root);
				}
			}
			if (secondLevelNodeList.isEmpty()) {
				return;
			}
			// Machine creation logic
		} catch (Exception e) {
			throw new MachineInitException("Exception while initializing machine data", e);
		}
	}

	/**
	 * @generated
	 */
	public void constructChildTypes(Node parent, Object parentObj, String path) {
		// Child type construction logic
	}

	/**
	 * @generated
	 */
	public void initMachineProvider() throws MachineInitException {
		try {
			this.controller = new FCALController();
			ConnectionFactory.getInstance().getProviders().add(this);
			PublishConnectionFactory.getInstance();
		} catch (Exception e) {
			throw new MachineInitException("Exception while initializing the machine provider.", e);
		}
	}

	/**
	 * @generated
	 */
	public void startMachineProvider() throws MachineInitException {
		try {
			ConnectionFactory.getInstance().initConnectionFactory();
			PublishConnectionFactory.getInstance().initConnectionFactory();
		} catch (CommunicationException e) {
			throw new MachineInitException(e.getMessage(), e);
		}
	}

	/**
	 * @generated
	 */
	public void stopMachineProvider() throws NevonexException {
		try {
			ConnectionFactory.getInstance().terminateConnectionFactory();
			PublishConnectionFactory.getInstance().terminateConnectionFactory();
		} catch (Exception e) {
			throw new NevonexException(e.getMessage(), e);
		}
	}

	/**
	 * @generated
	 */
	public ITopicObject getTopicElement(String index) {
		return indexToObjectMap.get(index);
	}

	/**
	 * @generated
	 */
	public void onConnectionStatusChange(IMachine machine, MachineConnectionInfo info) {
		notifyPropertyChange(machine, MachineConnectionInfo.CONNECT_PROPERTY, null, info);
	}

	public void notifyPropertyChange(Object source, String name, Object oldValue, Object newValue) {
		if (listeners != null) {
			for (PropertyChangeListener listener : this.listeners) {
				listener.propertyChange(new PropertyChangeEvent(source, name, oldValue, newValue));
			}
		}
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
	protected EClass eStaticClass() {
		return ImplementPackage.Literals.IMPLEMENT_PROVIDER;
	}
} //ImplementProvider
