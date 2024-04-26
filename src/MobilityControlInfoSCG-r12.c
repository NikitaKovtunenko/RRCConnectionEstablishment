/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "MobilityControlInfoSCG-r12.h"

#include "RACH-ConfigDedicated.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_t307_r12_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_t307_r12_value2enum_2[] = {
	{ 0,	4,	"ms50" },
	{ 1,	5,	"ms100" },
	{ 2,	5,	"ms150" },
	{ 3,	5,	"ms200" },
	{ 4,	5,	"ms500" },
	{ 5,	6,	"ms1000" },
	{ 6,	6,	"ms2000" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_t307_r12_enum2value_2[] = {
	1,	/* ms100(1) */
	5,	/* ms1000(5) */
	2,	/* ms150(2) */
	3,	/* ms200(3) */
	6,	/* ms2000(6) */
	0,	/* ms50(0) */
	4,	/* ms500(4) */
	7	/* spare1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_t307_r12_specs_2 = {
	asn_MAP_t307_r12_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_t307_r12_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_t307_r12_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t307_r12_2 = {
	"t307-r12",
	"t307-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_t307_r12_tags_2,
	sizeof(asn_DEF_t307_r12_tags_2)
		/sizeof(asn_DEF_t307_r12_tags_2[0]) - 1, /* 1 */
	asn_DEF_t307_r12_tags_2,	/* Same as above */
	sizeof(asn_DEF_t307_r12_tags_2)
		/sizeof(asn_DEF_t307_r12_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_t307_r12_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t307_r12_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MobilityControlInfoSCG_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MobilityControlInfoSCG_r12, t307_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t307_r12_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t307-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct MobilityControlInfoSCG_r12, ue_IdentitySCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-IdentitySCG-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct MobilityControlInfoSCG_r12, rach_ConfigDedicated_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RACH_ConfigDedicated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-ConfigDedicated-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct MobilityControlInfoSCG_r12, cipheringAlgorithmSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CipheringAlgorithm_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cipheringAlgorithmSCG-r12"
		},
};
static const int asn_MAP_MobilityControlInfoSCG_r12_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_MobilityControlInfoSCG_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MobilityControlInfoSCG_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t307-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ue-IdentitySCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rach-ConfigDedicated-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* cipheringAlgorithmSCG-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_MobilityControlInfoSCG_r12_specs_1 = {
	sizeof(struct MobilityControlInfoSCG_r12),
	offsetof(struct MobilityControlInfoSCG_r12, _asn_ctx),
	asn_MAP_MobilityControlInfoSCG_r12_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MobilityControlInfoSCG_r12_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MobilityControlInfoSCG_r12 = {
	"MobilityControlInfoSCG-r12",
	"MobilityControlInfoSCG-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_MobilityControlInfoSCG_r12_tags_1,
	sizeof(asn_DEF_MobilityControlInfoSCG_r12_tags_1)
		/sizeof(asn_DEF_MobilityControlInfoSCG_r12_tags_1[0]), /* 1 */
	asn_DEF_MobilityControlInfoSCG_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_MobilityControlInfoSCG_r12_tags_1)
		/sizeof(asn_DEF_MobilityControlInfoSCG_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MobilityControlInfoSCG_r12_1,
	4,	/* Elements count */
	&asn_SPC_MobilityControlInfoSCG_r12_specs_1	/* Additional specs */
};
