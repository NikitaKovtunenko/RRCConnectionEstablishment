/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "MAC-MainConfigSL-r12.h"

asn_TYPE_member_t asn_MBR_MAC_MainConfigSL_r12_1[] = {
	{ ATF_POINTER, 1, offsetof(struct MAC_MainConfigSL_r12, periodic_BSR_TimerSL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PeriodicBSR_Timer_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodic-BSR-TimerSL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_MainConfigSL_r12, retx_BSR_TimerSL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RetxBSR_Timer_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"retx-BSR-TimerSL"
		},
};
static const int asn_MAP_MAC_MainConfigSL_r12_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_MAC_MainConfigSL_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MAC_MainConfigSL_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* periodic-BSR-TimerSL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* retx-BSR-TimerSL */
};
asn_SEQUENCE_specifics_t asn_SPC_MAC_MainConfigSL_r12_specs_1 = {
	sizeof(struct MAC_MainConfigSL_r12),
	offsetof(struct MAC_MainConfigSL_r12, _asn_ctx),
	asn_MAP_MAC_MainConfigSL_r12_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MAC_MainConfigSL_r12_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MAC_MainConfigSL_r12 = {
	"MAC-MainConfigSL-r12",
	"MAC-MainConfigSL-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_MAC_MainConfigSL_r12_tags_1,
	sizeof(asn_DEF_MAC_MainConfigSL_r12_tags_1)
		/sizeof(asn_DEF_MAC_MainConfigSL_r12_tags_1[0]), /* 1 */
	asn_DEF_MAC_MainConfigSL_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_MAC_MainConfigSL_r12_tags_1)
		/sizeof(asn_DEF_MAC_MainConfigSL_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MAC_MainConfigSL_r12_1,
	2,	/* Elements count */
	&asn_SPC_MAC_MainConfigSL_r12_specs_1	/* Additional specs */
};

