/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SL-HoppingConfigComm-r12.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_hoppingParameter_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 504)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rb_Offset_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 110)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_numSubbands_r12_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_hoppingParameter_r12_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  504 }	/* (0..504) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rb_Offset_r12_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  110 }	/* (0..110) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_numSubbands_r12_value2enum_3[] = {
	{ 0,	3,	"ns1" },
	{ 1,	3,	"ns2" },
	{ 2,	3,	"ns4" }
};
static const unsigned int asn_MAP_numSubbands_r12_enum2value_3[] = {
	0,	/* ns1(0) */
	1,	/* ns2(1) */
	2	/* ns4(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_numSubbands_r12_specs_3 = {
	asn_MAP_numSubbands_r12_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_numSubbands_r12_enum2value_3,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_numSubbands_r12_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numSubbands_r12_3 = {
	"numSubbands-r12",
	"numSubbands-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_numSubbands_r12_tags_3,
	sizeof(asn_DEF_numSubbands_r12_tags_3)
		/sizeof(asn_DEF_numSubbands_r12_tags_3[0]) - 1, /* 1 */
	asn_DEF_numSubbands_r12_tags_3,	/* Same as above */
	sizeof(asn_DEF_numSubbands_r12_tags_3)
		/sizeof(asn_DEF_numSubbands_r12_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_numSubbands_r12_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_numSubbands_r12_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_HoppingConfigComm_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_HoppingConfigComm_r12, hoppingParameter_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_hoppingParameter_r12_constr_2,  memb_hoppingParameter_r12_constraint_1 },
		0, 0, /* No default value */
		"hoppingParameter-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_HoppingConfigComm_r12, numSubbands_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numSubbands_r12_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numSubbands-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_HoppingConfigComm_r12, rb_Offset_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rb_Offset_r12_constr_7,  memb_rb_Offset_r12_constraint_1 },
		0, 0, /* No default value */
		"rb-Offset-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_SL_HoppingConfigComm_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_HoppingConfigComm_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hoppingParameter-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* numSubbands-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* rb-Offset-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_HoppingConfigComm_r12_specs_1 = {
	sizeof(struct SL_HoppingConfigComm_r12),
	offsetof(struct SL_HoppingConfigComm_r12, _asn_ctx),
	asn_MAP_SL_HoppingConfigComm_r12_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_HoppingConfigComm_r12 = {
	"SL-HoppingConfigComm-r12",
	"SL-HoppingConfigComm-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_HoppingConfigComm_r12_tags_1,
	sizeof(asn_DEF_SL_HoppingConfigComm_r12_tags_1)
		/sizeof(asn_DEF_SL_HoppingConfigComm_r12_tags_1[0]), /* 1 */
	asn_DEF_SL_HoppingConfigComm_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_HoppingConfigComm_r12_tags_1)
		/sizeof(asn_DEF_SL_HoppingConfigComm_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_HoppingConfigComm_r12_1,
	3,	/* Elements count */
	&asn_SPC_SL_HoppingConfigComm_r12_specs_1	/* Additional specs */
};

