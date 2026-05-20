/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.platform_service;

/**
 * @generated
 */
public interface IPlatform_serviceFactory {
	IPlatform_serviceFactory INSTANCE = com.bosch.nevonex.platform_service.impl.Platform_serviceFactory.eINSTANCE;

	IPlatform_Service createPlatform_Service();

	IPlatform_ServiceProvider createPlatform_ServiceProvider();

} //IPlatform_serviceFactory
