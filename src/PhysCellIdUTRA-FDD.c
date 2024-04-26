/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "PhysCellIdUTRA-FDD.h"

int
PhysCellIdUTRA_FDD_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 511)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_PhysCellIdUTRA_FDD_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  511 }	/* (0..511) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_PhysCellIdUTRA_FDD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PhysCellIdUTRA_FDD = {
	"PhysCellIdUTRA-FDD",
	"PhysCellIdUTRA-FDD",
	&asn_OP_NativeInteger,
	asn_DEF_PhysCellIdUTRA_FDD_tags_1,
	sizeof(asn_DEF_PhysCellIdUTRA_FDD_tags_1)
		/sizeof(asn_DEF_PhysCellIdUTRA_FDD_tags_1[0]), /* 1 */
	asn_DEF_PhysCellIdUTRA_FDD_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysCellIdUTRA_FDD_tags_1)
		/sizeof(asn_DEF_PhysCellIdUTRA_FDD_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_PhysCellIdUTRA_FDD_constr_1, PhysCellIdUTRA_FDD_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

