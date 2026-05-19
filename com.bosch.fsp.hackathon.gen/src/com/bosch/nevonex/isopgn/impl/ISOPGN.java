/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.isopgn.impl;

import com.bosch.fsp.logger.FCALLogs;
import com.bosch.fsp.logger.LoggerConstants;

import com.bosch.fsp.platform.InterfaceDetails;

import com.bosch.fsp.runtime.feature.IMachine;

import com.bosch.nevonex.common.ITopicObject;
import com.bosch.nevonex.common.impl.TopicObject;

import com.bosch.nevonex.isopgn.IISOPGN;

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
 * An implementation of the model object '<em><b>ISOPGN</b></em>'.
 * @generated
 */
public class ISOPGN extends TopicObject implements IISOPGN {
	protected EList<PropertyChangeListener> listeners;
	protected Map<String, InterfaceDetails> interfaceDetailMap = new HashMap<>();
	protected float accpedPos1 = 0.0f;
	protected float ambAirt = 0.0f;
	protected float brkPedPos = 0.0f;
	protected float engFuRatePerTime = 0.0f;
	protected float engSpd = 0.0f;
	protected float engTotOperHrs = 0.0f;
	protected float fuLvlPer = 0.0f;
	protected float fuLvlPer2 = 0.0f;
	protected float gndBasdMacSpd = 0.0f;
	protected float tachoVehSpd = 0.0f;
	protected String totalVehDist = null;
	protected float totVehHrs = 0.0f;
	protected float whlBasdMacSpd = 0.0f;

	/**
	 * @generated
	 */
	protected ISOPGN() {
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
		return IsopgnPackage.Literals.ISOPGN;
	}

	public float getAccpedPos1() {
		return accpedPos1;
	}

	public void setAccpedPos1(float newAccpedPos1) {
		accpedPos1 = newAccpedPos1;
	}

	public float getAmbAirt() {
		return ambAirt;
	}

	public void setAmbAirt(float newAmbAirt) {
		ambAirt = newAmbAirt;
	}

	public float getBrkPedPos() {
		return brkPedPos;
	}

	public void setBrkPedPos(float newBrkPedPos) {
		brkPedPos = newBrkPedPos;
	}

	public float getEngFuRatePerTime() {
		return engFuRatePerTime;
	}

	public void setEngFuRatePerTime(float newEngFuRatePerTime) {
		engFuRatePerTime = newEngFuRatePerTime;
	}

	public float getEngSpd() {
		return engSpd;
	}

	public void setEngSpd(float newEngSpd) {
		engSpd = newEngSpd;
	}

	public float getEngTotOperHrs() {
		return engTotOperHrs;
	}

	public void setEngTotOperHrs(float newEngTotOperHrs) {
		engTotOperHrs = newEngTotOperHrs;
	}

	public float getFuLvlPer() {
		return fuLvlPer;
	}

	public void setFuLvlPer(float newFuLvlPer) {
		fuLvlPer = newFuLvlPer;
	}

	public float getFuLvlPer2() {
		return fuLvlPer2;
	}

	public void setFuLvlPer2(float newFuLvlPer2) {
		fuLvlPer2 = newFuLvlPer2;
	}

	public float getGndBasdMacSpd() {
		return gndBasdMacSpd;
	}

	public void setGndBasdMacSpd(float newGndBasdMacSpd) {
		gndBasdMacSpd = newGndBasdMacSpd;
	}

	public float getTachoVehSpd() {
		return tachoVehSpd;
	}

	public void setTachoVehSpd(float newTachoVehSpd) {
		tachoVehSpd = newTachoVehSpd;
	}

	public String getTotalVehDist() {
		return totalVehDist;
	}

	public void setTotalVehDist(String newTotalVehDist) {
		totalVehDist = newTotalVehDist;
	}

	public float getTotVehHrs() {
		return totVehHrs;
	}

	public void setTotVehHrs(float newTotVehHrs) {
		totVehHrs = newTotVehHrs;
	}

	public float getWhlBasdMacSpd() {
		return whlBasdMacSpd;
	}

	public void setWhlBasdMacSpd(float newWhlBasdMacSpd) {
		whlBasdMacSpd = newWhlBasdMacSpd;
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
		case IsopgnPackage.IISOPGN__ACCPED_POS1:
			return getAccpedPos1();
		case IsopgnPackage.IISOPGN__AMB_AIRT:
			return getAmbAirt();
		case IsopgnPackage.IISOPGN__BRK_PED_POS:
			return getBrkPedPos();
		case IsopgnPackage.IISOPGN__ENG_FU_RATE_PER_TIME:
			return getEngFuRatePerTime();
		case IsopgnPackage.IISOPGN__ENG_SPD:
			return getEngSpd();
		case IsopgnPackage.IISOPGN__ENG_TOT_OPER_HRS:
			return getEngTotOperHrs();
		case IsopgnPackage.IISOPGN__FU_LVL_PER:
			return getFuLvlPer();
		case IsopgnPackage.IISOPGN__FU_LVL_PER2:
			return getFuLvlPer2();
		case IsopgnPackage.IISOPGN__GND_BASD_MAC_SPD:
			return getGndBasdMacSpd();
		case IsopgnPackage.IISOPGN__TACHO_VEH_SPD:
			return getTachoVehSpd();
		case IsopgnPackage.IISOPGN__TOTAL_VEH_DIST:
			return getTotalVehDist();
		case IsopgnPackage.IISOPGN__TOT_VEH_HRS:
			return getTotVehHrs();
		case IsopgnPackage.IISOPGN__WHL_BASD_MAC_SPD:
			return getWhlBasdMacSpd();
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
		case IsopgnPackage.IISOPGN__ACCPED_POS1:
			setAccpedPos1((Float) newValue);
			return;
		case IsopgnPackage.IISOPGN__AMB_AIRT:
			setAmbAirt((Float) newValue);
			return;
		case IsopgnPackage.IISOPGN__BRK_PED_POS:
			setBrkPedPos((Float) newValue);
			return;
		case IsopgnPackage.IISOPGN__ENG_FU_RATE_PER_TIME:
			setEngFuRatePerTime((Float) newValue);
			return;
		case IsopgnPackage.IISOPGN__ENG_SPD:
			setEngSpd((Float) newValue);
			return;
		case IsopgnPackage.IISOPGN__ENG_TOT_OPER_HRS:
			setEngTotOperHrs((Float) newValue);
			return;
		case IsopgnPackage.IISOPGN__FU_LVL_PER:
			setFuLvlPer((Float) newValue);
			return;
		case IsopgnPackage.IISOPGN__FU_LVL_PER2:
			setFuLvlPer2((Float) newValue);
			return;
		case IsopgnPackage.IISOPGN__GND_BASD_MAC_SPD:
			setGndBasdMacSpd((Float) newValue);
			return;
		case IsopgnPackage.IISOPGN__TACHO_VEH_SPD:
			setTachoVehSpd((Float) newValue);
			return;
		case IsopgnPackage.IISOPGN__TOTAL_VEH_DIST:
			setTotalVehDist((String) newValue);
			return;
		case IsopgnPackage.IISOPGN__TOT_VEH_HRS:
			setTotVehHrs((Float) newValue);
			return;
		case IsopgnPackage.IISOPGN__WHL_BASD_MAC_SPD:
			setWhlBasdMacSpd((Float) newValue);
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
		case IsopgnPackage.IISOPGN__ACCPED_POS1:
			setAccpedPos1(0.0f);
			return;
		case IsopgnPackage.IISOPGN__AMB_AIRT:
			setAmbAirt(0.0f);
			return;
		case IsopgnPackage.IISOPGN__BRK_PED_POS:
			setBrkPedPos(0.0f);
			return;
		case IsopgnPackage.IISOPGN__ENG_FU_RATE_PER_TIME:
			setEngFuRatePerTime(0.0f);
			return;
		case IsopgnPackage.IISOPGN__ENG_SPD:
			setEngSpd(0.0f);
			return;
		case IsopgnPackage.IISOPGN__ENG_TOT_OPER_HRS:
			setEngTotOperHrs(0.0f);
			return;
		case IsopgnPackage.IISOPGN__FU_LVL_PER:
			setFuLvlPer(0.0f);
			return;
		case IsopgnPackage.IISOPGN__FU_LVL_PER2:
			setFuLvlPer2(0.0f);
			return;
		case IsopgnPackage.IISOPGN__GND_BASD_MAC_SPD:
			setGndBasdMacSpd(0.0f);
			return;
		case IsopgnPackage.IISOPGN__TACHO_VEH_SPD:
			setTachoVehSpd(0.0f);
			return;
		case IsopgnPackage.IISOPGN__TOTAL_VEH_DIST:
			setTotalVehDist(null);
			return;
		case IsopgnPackage.IISOPGN__TOT_VEH_HRS:
			setTotVehHrs(0.0f);
			return;
		case IsopgnPackage.IISOPGN__WHL_BASD_MAC_SPD:
			setWhlBasdMacSpd(0.0f);
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
		case IsopgnPackage.IISOPGN__ACCPED_POS1:
			return accpedPos1 != 0.0f;
		case IsopgnPackage.IISOPGN__AMB_AIRT:
			return ambAirt != 0.0f;
		case IsopgnPackage.IISOPGN__BRK_PED_POS:
			return brkPedPos != 0.0f;
		case IsopgnPackage.IISOPGN__ENG_FU_RATE_PER_TIME:
			return engFuRatePerTime != 0.0f;
		case IsopgnPackage.IISOPGN__ENG_SPD:
			return engSpd != 0.0f;
		case IsopgnPackage.IISOPGN__ENG_TOT_OPER_HRS:
			return engTotOperHrs != 0.0f;
		case IsopgnPackage.IISOPGN__FU_LVL_PER:
			return fuLvlPer != 0.0f;
		case IsopgnPackage.IISOPGN__FU_LVL_PER2:
			return fuLvlPer2 != 0.0f;
		case IsopgnPackage.IISOPGN__GND_BASD_MAC_SPD:
			return gndBasdMacSpd != 0.0f;
		case IsopgnPackage.IISOPGN__TACHO_VEH_SPD:
			return tachoVehSpd != 0.0f;
		case IsopgnPackage.IISOPGN__TOTAL_VEH_DIST:
			return totalVehDist != null;
		case IsopgnPackage.IISOPGN__TOT_VEH_HRS:
			return totVehHrs != 0.0f;
		case IsopgnPackage.IISOPGN__WHL_BASD_MAC_SPD:
			return whlBasdMacSpd != 0.0f;
		}
		return super.eIsSet(featureID);
	}
} //ISOPGN
