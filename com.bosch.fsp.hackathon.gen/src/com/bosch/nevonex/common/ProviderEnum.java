/**
Copyright (c) Robert Bosch GmbH. All rights reserved.
*/
package com.bosch.nevonex.common;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;

/**
 * A representation of the literals of the enumeration '<em><b>ProviderEnum</b></em>',
 * and utility methods for working with them.
 * @see com.bosch.nevonex.common.impl.CommonPackage#getProviderEnum()
 * @generated
 */
public enum ProviderEnum implements InternalProviderEnum {
	/**
	 * The '<em><b>GPS_TCProvider</b></em>' literal object.
	 * @see #GPS_TC_PROVIDER_VALUE
	 * @generated
	 * @ordered
	 */
	GPS_TC_PROVIDER(0, "GPS_TCProvider", "GPS_TCProvider"),

	/**
	 * The '<em><b>ImplementProvider</b></em>' literal object.
	 * @see #IMPLEMENT_PROVIDER_VALUE
	 * @generated
	 * @ordered
	 */
	IMPLEMENT_PROVIDER(1, "ImplementProvider", "ImplementProvider"),

	/**
	 * The '<em><b>ISOPGNProvider</b></em>' literal object.
	 * @see #ISOPGN_PROVIDER_VALUE
	 * @generated
	 * @ordered
	 */
	ISOPGN_PROVIDER(2, "ISOPGNProvider", "ISOPGNProvider");

	/**
	 * The '<em><b>GPS_TCProvider</b></em>' literal value.
	 * @see #GPS_TC_PROVIDER
	 * @generated
	 * @ordered
	 */
	public static final int GPS_TC_PROVIDER_VALUE = 0;

	/**
	 * The '<em><b>ImplementProvider</b></em>' literal value.
	 * @see #IMPLEMENT_PROVIDER
	 * @generated
	 * @ordered
	 */
	public static final int IMPLEMENT_PROVIDER_VALUE = 1;

	/**
	 * The '<em><b>ISOPGNProvider</b></em>' literal value.
	 * @see #ISOPGN_PROVIDER
	 * @generated
	 * @ordered
	 */
	public static final int ISOPGN_PROVIDER_VALUE = 2;

	/**
	 * An array of all the '<em><b>ProviderEnum</b></em>' enumerators.
	 * @generated
	 */
	private static final ProviderEnum[] VALUES_ARRAY = new ProviderEnum[] { GPS_TC_PROVIDER, IMPLEMENT_PROVIDER, ISOPGN_PROVIDER, };

	/**
	 * A public read-only list of all the '<em><b>ProviderEnum</b></em>' enumerators.
	 * @generated
	 */
	public static final List<ProviderEnum> VALUES = Collections.unmodifiableList(Arrays.asList(VALUES_ARRAY));

	/**
	 * Returns the '<em><b>ProviderEnum</b></em>' literal with the specified literal value.
	 * @param literal the literal.
	 * @return the matching enumerator or <code>null</code>.
	 * @generated
	 */
	public static ProviderEnum get(String literal) {
		for (int i = 0; i < VALUES_ARRAY.length; ++i) {
			ProviderEnum result = VALUES_ARRAY[i];
			if (result.toString().equals(literal)) {
				return result;
			}
		}
		return null;
	}

	/**
	 * Returns the '<em><b>ProviderEnum</b></em>' literal with the specified name.
	 * @param name the name.
	 * @return the matching enumerator or <code>null</code>.
	 * @generated
	 */
	public static ProviderEnum getByName(String name) {
		for (int i = 0; i < VALUES_ARRAY.length; ++i) {
			ProviderEnum result = VALUES_ARRAY[i];
			if (result.getName().equals(name)) {
				return result;
			}
		}
		return null;
	}

	/**
	 * Returns the '<em><b>ProviderEnum</b></em>' literal with the specified integer value.
	 * @param value the integer value.
	 * @return the matching enumerator or <code>null</code>.
	 * @generated
	 */
	public static ProviderEnum get(int value) {
		switch (value) {
		case GPS_TC_PROVIDER_VALUE:
			return GPS_TC_PROVIDER;
		case IMPLEMENT_PROVIDER_VALUE:
			return IMPLEMENT_PROVIDER;
		case ISOPGN_PROVIDER_VALUE:
			return ISOPGN_PROVIDER;
		}
		return null;
	}

	/**
	 * @generated
	 */
	private final int value;

	/**
	 * @generated
	 */
	private final String name;

	/**
	 * @generated
	 */
	private final String literal;

	/**
	 * Only this class can construct instances.
	 * @generated
	 */
	private ProviderEnum(int value, String name, String literal) {
		this.value = value;
		this.name = name;
		this.literal = literal;
	}

	/**
	 * @generated
	 */
	@Override
	public int getValue() {
		return value;
	}

	/**
	 * @generated
	 */
	@Override
	public String getName() {
		return name;
	}

	/**
	 * @generated
	 */
	@Override
	public String getLiteral() {
		return literal;
	}

	/**
	 * Returns the literal value of the enumerator, which is its string representation.
	 * @generated
	 */
	@Override
	public String toString() {
		return literal;
	}

} //ProviderEnum

/**
 * A private implementation interface used to hide the inheritance from Enumerator.
 * @generated
 */
interface InternalProviderEnum extends org.eclipse.emf.common.util.Enumerator {
	// Empty 
}
