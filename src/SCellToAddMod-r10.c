/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SCellToAddMod-r10.h"

#include "RadioResourceConfigCommonSCell-r10.h"
#include "RadioResourceConfigDedicatedSCell-r10.h"
static asn_TYPE_member_t asn_MBR_cellIdentification_r10_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SCellToAddMod_r10__cellIdentification_r10, physCellId_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SCellToAddMod_r10__cellIdentification_r10, dl_CarrierFreq_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-CarrierFreq-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_cellIdentification_r10_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cellIdentification_r10_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dl-CarrierFreq-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellIdentification_r10_specs_3 = {
	sizeof(struct SCellToAddMod_r10__cellIdentification_r10),
	offsetof(struct SCellToAddMod_r10__cellIdentification_r10, _asn_ctx),
	asn_MAP_cellIdentification_r10_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellIdentification_r10_3 = {
	"cellIdentification-r10",
	"cellIdentification-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_cellIdentification_r10_tags_3,
	sizeof(asn_DEF_cellIdentification_r10_tags_3)
		/sizeof(asn_DEF_cellIdentification_r10_tags_3[0]) - 1, /* 1 */
	asn_DEF_cellIdentification_r10_tags_3,	/* Same as above */
	sizeof(asn_DEF_cellIdentification_r10_tags_3)
		/sizeof(asn_DEF_cellIdentification_r10_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cellIdentification_r10_3,
	2,	/* Elements count */
	&asn_SPC_cellIdentification_r10_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SCellToAddMod_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SCellToAddMod_r10, sCellIndex_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellIndex_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellIndex-r10"
		},
	{ ATF_POINTER, 4, offsetof(struct SCellToAddMod_r10, cellIdentification_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cellIdentification_r10_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIdentification-r10"
		},
	{ ATF_POINTER, 3, offsetof(struct SCellToAddMod_r10, radioResourceConfigCommonSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigCommonSCell_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigCommonSCell-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct SCellToAddMod_r10, radioResourceConfigDedicatedSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicatedSCell_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigDedicatedSCell-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct SCellToAddMod_r10, dl_CarrierFreq_v1090),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_v9e0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-CarrierFreq-v1090"
		},
};
static const int asn_MAP_SCellToAddMod_r10_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_SCellToAddMod_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SCellToAddMod_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sCellIndex-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellIdentification-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* radioResourceConfigCommonSCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* radioResourceConfigDedicatedSCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* dl-CarrierFreq-v1090 */
};
asn_SEQUENCE_specifics_t asn_SPC_SCellToAddMod_r10_specs_1 = {
	sizeof(struct SCellToAddMod_r10),
	offsetof(struct SCellToAddMod_r10, _asn_ctx),
	asn_MAP_SCellToAddMod_r10_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_SCellToAddMod_r10_oms_1,	/* Optional members */
	3, 1,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SCellToAddMod_r10 = {
	"SCellToAddMod-r10",
	"SCellToAddMod-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_SCellToAddMod_r10_tags_1,
	sizeof(asn_DEF_SCellToAddMod_r10_tags_1)
		/sizeof(asn_DEF_SCellToAddMod_r10_tags_1[0]), /* 1 */
	asn_DEF_SCellToAddMod_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCellToAddMod_r10_tags_1)
		/sizeof(asn_DEF_SCellToAddMod_r10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SCellToAddMod_r10_1,
	5,	/* Elements count */
	&asn_SPC_SCellToAddMod_r10_specs_1	/* Additional specs */
};
