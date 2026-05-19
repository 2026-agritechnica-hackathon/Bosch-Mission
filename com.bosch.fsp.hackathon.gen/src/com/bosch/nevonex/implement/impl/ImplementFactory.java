/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.implement.impl;

import com.bosch.nevonex.implement.IImplementFactory;
import com.bosch.nevonex.implement.IImplement;
import com.bosch.nevonex.implement.IImplementProvider;

import org.eclipse.emf.ecore.EClass;
import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.EPackage;

import org.eclipse.emf.ecore.impl.EFactoryImpl;

import org.eclipse.emf.ecore.plugin.EcorePlugin;

/**
 * @generated
 */
public class ImplementFactory extends EFactoryImpl implements IImplementFactory {
	public static final ImplementFactory eINSTANCE = init();

	public static ImplementFactory init() {
		try {
			ImplementFactory theImplementFactory = (ImplementFactory) EPackage.Registry.INSTANCE.getEFactory(ImplementPackage.eNS_URI);
			if (theImplementFactory != null) {
				return theImplementFactory;
			}
		} catch (Exception exception) {
			EcorePlugin.INSTANCE.log(exception);
		}
		return new ImplementFactory();
	}

	public ImplementFactory() {
		super();
	}

	@Override
	public EObject create(EClass eClass) {
		switch (eClass.getClassifierID()) {
		case ImplementPackage.IMPLEMENT:
			return createImplement();
		case ImplementPackage.IMPLEMENT_PROVIDER:
			return createImplementProvider();
		default:
			throw new IllegalArgumentException("The class '" + eClass.getName() + "' is not a valid classifier");
		}
	}

	public IImplement createImplement() {
		Implement implement = new Implement();
		return implement;
	}

	public IImplementProvider createImplementProvider() {
		ImplementProvider implementProvider = new ImplementProvider();
		return implementProvider;
	}

	public ImplementPackage getImplementPackage() {
		return (ImplementPackage) getEPackage();
	}

	@Deprecated
	public static ImplementPackage getPackage() {
		return ImplementPackage.eINSTANCE;
	}

} //ImplementFactory
