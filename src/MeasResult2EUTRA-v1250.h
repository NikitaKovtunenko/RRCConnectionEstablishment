/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasResult2EUTRA_v1250_H_
#define	_MeasResult2EUTRA_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RSRQ_Type_r12;

/* MeasResult2EUTRA-v1250 */
typedef struct MeasResult2EUTRA_v1250 {
	struct RSRQ_Type_r12	*rsrq_Type_r12	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResult2EUTRA_v1250_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResult2EUTRA_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResult2EUTRA_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResult2EUTRA_v1250_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResult2EUTRA_v1250_H_ */
#include <asn_internal.h>