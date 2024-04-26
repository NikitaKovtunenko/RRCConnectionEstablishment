/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "TargetMBSFN-Area-r12.h"

asn_TYPE_member_t asn_MBR_TargetMBSFN_Area_r12_1[] = {
	{ ATF_POINTER, 1, offsetof(struct TargetMBSFN_Area_r12, mbsfn_AreaId_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFN_AreaId_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbsfn-AreaId-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TargetMBSFN_Area_r12, carrierFreq_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r12"
		},
};
static const int asn_MAP_TargetMBSFN_Area_r12_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_TargetMBSFN_Area_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TargetMBSFN_Area_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbsfn-AreaId-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* carrierFreq-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_TargetMBSFN_Area_r12_specs_1 = {
	sizeof(struct TargetMBSFN_Area_r12),
	offsetof(struct TargetMBSFN_Area_r12, _asn_ctx),
	asn_MAP_TargetMBSFN_Area_r12_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_TargetMBSFN_Area_r12_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TargetMBSFN_Area_r12 = {
	"TargetMBSFN-Area-r12",
	"TargetMBSFN-Area-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_TargetMBSFN_Area_r12_tags_1,
	sizeof(asn_DEF_TargetMBSFN_Area_r12_tags_1)
		/sizeof(asn_DEF_TargetMBSFN_Area_r12_tags_1[0]), /* 1 */
	asn_DEF_TargetMBSFN_Area_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_TargetMBSFN_Area_r12_tags_1)
		/sizeof(asn_DEF_TargetMBSFN_Area_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TargetMBSFN_Area_r12_1,
	2,	/* Elements count */
	&asn_SPC_TargetMBSFN_Area_r12_specs_1	/* Additional specs */
};
