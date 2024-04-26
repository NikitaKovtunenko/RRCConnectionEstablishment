/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_TraceReference_r10_H_
#define	_TraceReference_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-Identity.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TraceReference-r10 */
typedef struct TraceReference_r10 {
	PLMN_Identity_t	 plmn_Identity_r10;
	OCTET_STRING_t	 traceId_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TraceReference_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TraceReference_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_TraceReference_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_TraceReference_r10_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TraceReference_r10_H_ */
#include <asn_internal.h>