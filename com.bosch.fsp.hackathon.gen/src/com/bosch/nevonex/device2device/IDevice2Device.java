/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.device2device;

import com.bosch.fsp.runtime.feature.IDeviceDownload;
import com.bosch.fsp.runtime.feature.exception.CloudAccessDeniedException;
import com.bosch.fsp.runtime.feature.exception.CloudBadRequestException;
import com.bosch.fsp.runtime.feature.exception.CloudConnectionException;
import com.bosch.fsp.runtime.feature.exception.CloudUnAuthorizedException;
import com.bosch.fsp.runtime.feature.exception.MachineInitException;
import com.bosch.fsp.runtime.feature.exception.NevonexException;
import com.bosch.fsp.runtime.feature.exception.PlatformServiceException;
import com.bosch.nevonex.types.IPropertyChange;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;

/**
 * @generated
 */
public interface IDevice2Device extends IDeviceDownload, IPropertyChange {
	void processDownloadMessage(String message);
	void initPlatformService() throws MachineInitException;
	void startPlatformService() throws MachineInitException;
	void stopPlatformService() throws NevonexException;
	String sendCommand(String command) throws CloudBadRequestException, CloudUnAuthorizedException, CloudAccessDeniedException, CloudConnectionException, PlatformServiceException, FileNotFoundException, IOException;
	boolean isDeviceConnected() throws CloudBadRequestException, CloudUnAuthorizedException;
	String sendFile(File file) throws CloudBadRequestException, CloudUnAuthorizedException, CloudAccessDeniedException, CloudConnectionException, PlatformServiceException, FileNotFoundException, IOException;
	String sendFile(String filePath) throws CloudBadRequestException, CloudUnAuthorizedException, CloudAccessDeniedException, CloudConnectionException, PlatformServiceException, FileNotFoundException, IOException;
} // IDevice2Device
