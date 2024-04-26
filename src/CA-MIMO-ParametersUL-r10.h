/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CA_MIMO_ParametersUL_r10_H_
#define	_CA_MIMO_ParametersUL_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CA-BandwidthClass-r10.h"
#include "MIMO-CapabilityUL-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CA-MIMO-ParametersUL-r10 */
typedef struct CA_MIMO_ParametersUL_r10 {
	CA_BandwidthClass_r10_t	 ca_BandwidthClassUL_r10;
	MIMO_CapabilityUL_r10_t	*supportedMIMO_CapabilityUL_r10	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CA_MIMO_ParametersUL_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CA_MIMO_ParametersUL_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_CA_MIMO_ParametersUL_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_CA_MIMO_ParametersUL_r10_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CA_MIMO_ParametersUL_r10_H_ */
#include <asn_internal.h>
