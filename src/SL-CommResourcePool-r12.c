/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SL-CommResourcePool-r12.h"

#include "TDD-Config.h"
static int
memb_syncConfigIndex_r12_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_syncConfigIndex_r12_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ue_SelectedResourceConfig_r12_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommResourcePool_r12__ue_SelectedResourceConfig_r12, data_TF_ResourceConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_TF_ResourceConfig_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"data-TF-ResourceConfig-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_CommResourcePool_r12__ue_SelectedResourceConfig_r12, trpt_Subset_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_TRPT_Subset_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trpt-Subset-r12"
		},
};
static const int asn_MAP_ue_SelectedResourceConfig_r12_oms_7[] = { 1 };
static const ber_tlv_tag_t asn_DEF_ue_SelectedResourceConfig_r12_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ue_SelectedResourceConfig_r12_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* data-TF-ResourceConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* trpt-Subset-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ue_SelectedResourceConfig_r12_specs_7 = {
	sizeof(struct SL_CommResourcePool_r12__ue_SelectedResourceConfig_r12),
	offsetof(struct SL_CommResourcePool_r12__ue_SelectedResourceConfig_r12, _asn_ctx),
	asn_MAP_ue_SelectedResourceConfig_r12_tag2el_7,
	2,	/* Count of tags in the map */
	asn_MAP_ue_SelectedResourceConfig_r12_oms_7,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_SelectedResourceConfig_r12_7 = {
	"ue-SelectedResourceConfig-r12",
	"ue-SelectedResourceConfig-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_ue_SelectedResourceConfig_r12_tags_7,
	sizeof(asn_DEF_ue_SelectedResourceConfig_r12_tags_7)
		/sizeof(asn_DEF_ue_SelectedResourceConfig_r12_tags_7[0]) - 1, /* 1 */
	asn_DEF_ue_SelectedResourceConfig_r12_tags_7,	/* Same as above */
	sizeof(asn_DEF_ue_SelectedResourceConfig_r12_tags_7)
		/sizeof(asn_DEF_ue_SelectedResourceConfig_r12_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ue_SelectedResourceConfig_r12_7,
	2,	/* Elements count */
	&asn_SPC_ue_SelectedResourceConfig_r12_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rxParametersNCell_r12_10[] = {
	{ ATF_POINTER, 1, offsetof(struct SL_CommResourcePool_r12__rxParametersNCell_r12, tdd_Config_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Config-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommResourcePool_r12__rxParametersNCell_r12, syncConfigIndex_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_syncConfigIndex_r12_constr_12,  memb_syncConfigIndex_r12_constraint_10 },
		0, 0, /* No default value */
		"syncConfigIndex-r12"
		},
};
static const int asn_MAP_rxParametersNCell_r12_oms_10[] = { 0 };
static const ber_tlv_tag_t asn_DEF_rxParametersNCell_r12_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_rxParametersNCell_r12_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd-Config-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* syncConfigIndex-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_rxParametersNCell_r12_specs_10 = {
	sizeof(struct SL_CommResourcePool_r12__rxParametersNCell_r12),
	offsetof(struct SL_CommResourcePool_r12__rxParametersNCell_r12, _asn_ctx),
	asn_MAP_rxParametersNCell_r12_tag2el_10,
	2,	/* Count of tags in the map */
	asn_MAP_rxParametersNCell_r12_oms_10,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rxParametersNCell_r12_10 = {
	"rxParametersNCell-r12",
	"rxParametersNCell-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_rxParametersNCell_r12_tags_10,
	sizeof(asn_DEF_rxParametersNCell_r12_tags_10)
		/sizeof(asn_DEF_rxParametersNCell_r12_tags_10[0]) - 1, /* 1 */
	asn_DEF_rxParametersNCell_r12_tags_10,	/* Same as above */
	sizeof(asn_DEF_rxParametersNCell_r12_tags_10)
		/sizeof(asn_DEF_rxParametersNCell_r12_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_rxParametersNCell_r12_10,
	2,	/* Elements count */
	&asn_SPC_rxParametersNCell_r12_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_txParameters_r12_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommResourcePool_r12__txParameters_r12, sc_TxParameters_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_TxParameters_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-TxParameters-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommResourcePool_r12__txParameters_r12, dataTxParameters_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_TxParameters_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dataTxParameters-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_txParameters_r12_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_txParameters_r12_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sc-TxParameters-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dataTxParameters-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_txParameters_r12_specs_13 = {
	sizeof(struct SL_CommResourcePool_r12__txParameters_r12),
	offsetof(struct SL_CommResourcePool_r12__txParameters_r12, _asn_ctx),
	asn_MAP_txParameters_r12_tag2el_13,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_txParameters_r12_13 = {
	"txParameters-r12",
	"txParameters-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_txParameters_r12_tags_13,
	sizeof(asn_DEF_txParameters_r12_tags_13)
		/sizeof(asn_DEF_txParameters_r12_tags_13[0]) - 1, /* 1 */
	asn_DEF_txParameters_r12_tags_13,	/* Same as above */
	sizeof(asn_DEF_txParameters_r12_tags_13)
		/sizeof(asn_DEF_txParameters_r12_tags_13[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_txParameters_r12_13,
	2,	/* Elements count */
	&asn_SPC_txParameters_r12_specs_13	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_CommResourcePool_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommResourcePool_r12, sc_CP_Len_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CP_Len_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-CP-Len-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommResourcePool_r12, sc_Period_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_PeriodComm_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-Period-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommResourcePool_r12, sc_TF_ResourceConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_TF_ResourceConfig_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-TF-ResourceConfig-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommResourcePool_r12, data_CP_Len_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CP_Len_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"data-CP-Len-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommResourcePool_r12, dataHoppingConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_HoppingConfigComm_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dataHoppingConfig-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct SL_CommResourcePool_r12, ue_SelectedResourceConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_ue_SelectedResourceConfig_r12_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-SelectedResourceConfig-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_CommResourcePool_r12, rxParametersNCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_rxParametersNCell_r12_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rxParametersNCell-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_CommResourcePool_r12, txParameters_r12),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_txParameters_r12_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"txParameters-r12"
		},
};
static const int asn_MAP_SL_CommResourcePool_r12_oms_1[] = { 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_SL_CommResourcePool_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_CommResourcePool_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sc-CP-Len-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sc-Period-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sc-TF-ResourceConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* data-CP-Len-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dataHoppingConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ue-SelectedResourceConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* rxParametersNCell-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* txParameters-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_CommResourcePool_r12_specs_1 = {
	sizeof(struct SL_CommResourcePool_r12),
	offsetof(struct SL_CommResourcePool_r12, _asn_ctx),
	asn_MAP_SL_CommResourcePool_r12_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_SL_CommResourcePool_r12_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_CommResourcePool_r12 = {
	"SL-CommResourcePool-r12",
	"SL-CommResourcePool-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_CommResourcePool_r12_tags_1,
	sizeof(asn_DEF_SL_CommResourcePool_r12_tags_1)
		/sizeof(asn_DEF_SL_CommResourcePool_r12_tags_1[0]), /* 1 */
	asn_DEF_SL_CommResourcePool_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_CommResourcePool_r12_tags_1)
		/sizeof(asn_DEF_SL_CommResourcePool_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_CommResourcePool_r12_1,
	8,	/* Elements count */
	&asn_SPC_SL_CommResourcePool_r12_specs_1	/* Additional specs */
};

