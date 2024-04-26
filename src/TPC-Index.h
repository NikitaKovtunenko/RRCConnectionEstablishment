/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_TPC_Index_H_
#define	_TPC_Index_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TPC_Index_PR {
	TPC_Index_PR_NOTHING,	/* No components present */
	TPC_Index_PR_indexOfFormat3,
	TPC_Index_PR_indexOfFormat3A
} TPC_Index_PR;

/* TPC-Index */
typedef struct TPC_Index {
	TPC_Index_PR present;
	union TPC_Index_u {
		long	 indexOfFormat3;
		long	 indexOfFormat3A;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TPC_Index_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TPC_Index;
extern asn_CHOICE_specifics_t asn_SPC_TPC_Index_specs_1;
extern asn_TYPE_member_t asn_MBR_TPC_Index_1[2];
extern asn_per_constraints_t asn_PER_type_TPC_Index_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _TPC_Index_H_ */
#include <asn_internal.h>
