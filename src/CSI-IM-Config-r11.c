/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CSI-IM-Config-r11.h"

static int
memb_resourceConfig_r11_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
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
memb_subframeConfig_r11_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 154)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_resourceConfig_r11_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_subframeConfig_r11_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  154 }	/* (0..154) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_CSI_IM_Config_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_IM_Config_r11, csi_IM_ConfigId_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_IM_ConfigId_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-IM-ConfigId-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_IM_Config_r11, resourceConfig_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_resourceConfig_r11_constr_3,  memb_resourceConfig_r11_constraint_1 },
		0, 0, /* No default value */
		"resourceConfig-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_IM_Config_r11, subframeConfig_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_subframeConfig_r11_constr_4,  memb_subframeConfig_r11_constraint_1 },
		0, 0, /* No default value */
		"subframeConfig-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_CSI_IM_Config_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CSI_IM_Config_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-IM-ConfigId-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* resourceConfig-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* subframeConfig-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_CSI_IM_Config_r11_specs_1 = {
	sizeof(struct CSI_IM_Config_r11),
	offsetof(struct CSI_IM_Config_r11, _asn_ctx),
	asn_MAP_CSI_IM_Config_r11_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CSI_IM_Config_r11 = {
	"CSI-IM-Config-r11",
	"CSI-IM-Config-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_CSI_IM_Config_r11_tags_1,
	sizeof(asn_DEF_CSI_IM_Config_r11_tags_1)
		/sizeof(asn_DEF_CSI_IM_Config_r11_tags_1[0]), /* 1 */
	asn_DEF_CSI_IM_Config_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSI_IM_Config_r11_tags_1)
		/sizeof(asn_DEF_CSI_IM_Config_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CSI_IM_Config_r11_1,
	3,	/* Elements count */
	&asn_SPC_CSI_IM_Config_r11_specs_1	/* Additional specs */
};

