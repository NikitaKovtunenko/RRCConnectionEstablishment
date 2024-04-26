/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SecondaryPreRegistrationZoneIdListHRPD.h"

asn_per_constraints_t asn_PER_type_SecondaryPreRegistrationZoneIdListHRPD_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SecondaryPreRegistrationZoneIdListHRPD_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PreRegistrationZoneIdHRPD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_SecondaryPreRegistrationZoneIdListHRPD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_SecondaryPreRegistrationZoneIdListHRPD_specs_1 = {
	sizeof(struct SecondaryPreRegistrationZoneIdListHRPD),
	offsetof(struct SecondaryPreRegistrationZoneIdListHRPD, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_SecondaryPreRegistrationZoneIdListHRPD = {
	"SecondaryPreRegistrationZoneIdListHRPD",
	"SecondaryPreRegistrationZoneIdListHRPD",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_SecondaryPreRegistrationZoneIdListHRPD_tags_1,
	sizeof(asn_DEF_SecondaryPreRegistrationZoneIdListHRPD_tags_1)
		/sizeof(asn_DEF_SecondaryPreRegistrationZoneIdListHRPD_tags_1[0]), /* 1 */
	asn_DEF_SecondaryPreRegistrationZoneIdListHRPD_tags_1,	/* Same as above */
	sizeof(asn_DEF_SecondaryPreRegistrationZoneIdListHRPD_tags_1)
		/sizeof(asn_DEF_SecondaryPreRegistrationZoneIdListHRPD_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_SecondaryPreRegistrationZoneIdListHRPD_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_SecondaryPreRegistrationZoneIdListHRPD_1,
	1,	/* Single element */
	&asn_SPC_SecondaryPreRegistrationZoneIdListHRPD_specs_1	/* Additional specs */
};

