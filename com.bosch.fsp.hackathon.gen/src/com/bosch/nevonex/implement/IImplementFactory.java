/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.implement;

/**
 * @generated
 */
public interface IImplementFactory {
	IImplementFactory INSTANCE = com.bosch.nevonex.implement.impl.ImplementFactory.eINSTANCE;

	IImplement createImplement();

	IImplementProvider createImplementProvider();

} //IImplementFactory
