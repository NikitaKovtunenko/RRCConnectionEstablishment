/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RegisteredMME_H_
#define	_RegisteredMME_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "MMEC.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_Identity;

/* RegisteredMME */
typedef struct RegisteredMME {
	struct PLMN_Identity	*plmn_Identity	/* OPTIONAL */;
	BIT_STRING_t	 mmegi;
	MMEC_t	 mmec;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RegisteredMME_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RegisteredMME;
extern asn_SEQUENCE_specifics_t asn_SPC_RegisteredMME_specs_1;
extern asn_TYPE_member_t asn_MBR_RegisteredMME_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RegisteredMME_H_ */
#include <asn_internal.h>
