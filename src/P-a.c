/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "P-a.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_P_a_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_P_a_value2enum_1[] = {
	{ 0,	4,	"dB-6" },
	{ 1,	9,	"dB-4dot77" },
	{ 2,	4,	"dB-3" },
	{ 3,	9,	"dB-1dot77" },
	{ 4,	3,	"dB0" },
	{ 5,	3,	"dB1" },
	{ 6,	3,	"dB2" },
	{ 7,	3,	"dB3" }
};
static const unsigned int asn_MAP_P_a_enum2value_1[] = {
	3,	/* dB-1dot77(3) */
	2,	/* dB-3(2) */
	1,	/* dB-4dot77(1) */
	0,	/* dB-6(0) */
	4,	/* dB0(4) */
	5,	/* dB1(5) */
	6,	/* dB2(6) */
	7	/* dB3(7) */
};
const asn_INTEGER_specifics_t asn_SPC_P_a_specs_1 = {
	asn_MAP_P_a_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_P_a_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_P_a_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_P_a = {
	"P-a",
	"P-a",
	&asn_OP_NativeEnumerated,
	asn_DEF_P_a_tags_1,
	sizeof(asn_DEF_P_a_tags_1)
		/sizeof(asn_DEF_P_a_tags_1[0]), /* 1 */
	asn_DEF_P_a_tags_1,	/* Same as above */
	sizeof(asn_DEF_P_a_tags_1)
		/sizeof(asn_DEF_P_a_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_P_a_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_P_a_specs_1	/* Additional specs */
};

