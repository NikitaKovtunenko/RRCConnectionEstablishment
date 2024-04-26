/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CSFBParametersResponseCDMA2000-r8-IEs.h"

#include "CSFBParametersResponseCDMA2000-v8a0-IEs.h"
asn_TYPE_member_t asn_MBR_CSFBParametersResponseCDMA2000_r8_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSFBParametersResponseCDMA2000_r8_IEs, rand),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RAND_CDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rand"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSFBParametersResponseCDMA2000_r8_IEs, mobilityParameters),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MobilityParametersCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityParameters"
		},
	{ ATF_POINTER, 1, offsetof(struct CSFBParametersResponseCDMA2000_r8_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSFBParametersResponseCDMA2000_v8a0_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_CSFBParametersResponseCDMA2000_r8_IEs_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_CSFBParametersResponseCDMA2000_r8_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CSFBParametersResponseCDMA2000_r8_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rand */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mobilityParameters */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_CSFBParametersResponseCDMA2000_r8_IEs_specs_1 = {
	sizeof(struct CSFBParametersResponseCDMA2000_r8_IEs),
	offsetof(struct CSFBParametersResponseCDMA2000_r8_IEs, _asn_ctx),
	asn_MAP_CSFBParametersResponseCDMA2000_r8_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_CSFBParametersResponseCDMA2000_r8_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CSFBParametersResponseCDMA2000_r8_IEs = {
	"CSFBParametersResponseCDMA2000-r8-IEs",
	"CSFBParametersResponseCDMA2000-r8-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_CSFBParametersResponseCDMA2000_r8_IEs_tags_1,
	sizeof(asn_DEF_CSFBParametersResponseCDMA2000_r8_IEs_tags_1)
		/sizeof(asn_DEF_CSFBParametersResponseCDMA2000_r8_IEs_tags_1[0]), /* 1 */
	asn_DEF_CSFBParametersResponseCDMA2000_r8_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSFBParametersResponseCDMA2000_r8_IEs_tags_1)
		/sizeof(asn_DEF_CSFBParametersResponseCDMA2000_r8_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CSFBParametersResponseCDMA2000_r8_IEs_1,
	3,	/* Elements count */
	&asn_SPC_CSFBParametersResponseCDMA2000_r8_IEs_specs_1	/* Additional specs */
};

