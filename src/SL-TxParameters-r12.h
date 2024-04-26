/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_TxParameters_r12_H_
#define	_SL_TxParameters_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Alpha-r12.h"
#include "P0-SL-r12.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SL-TxParameters-r12 */
typedef struct SL_TxParameters_r12 {
	Alpha_r12_t	 alpha_r12;
	P0_SL_r12_t	 p0_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_TxParameters_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_TxParameters_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_TxParameters_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_TxParameters_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_TxParameters_r12_H_ */
#include <asn_internal.h>
