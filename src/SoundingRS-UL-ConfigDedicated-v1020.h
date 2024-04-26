/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SoundingRS_UL_ConfigDedicated_v1020_H_
#define	_SoundingRS_UL_ConfigDedicated_v1020_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SRS-AntennaPort.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SoundingRS-UL-ConfigDedicated-v1020 */
typedef struct SoundingRS_UL_ConfigDedicated_v1020 {
	SRS_AntennaPort_t	 srs_AntennaPort_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SoundingRS_UL_ConfigDedicated_v1020_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SoundingRS_UL_ConfigDedicated_v1020;
extern asn_SEQUENCE_specifics_t asn_SPC_SoundingRS_UL_ConfigDedicated_v1020_specs_1;
extern asn_TYPE_member_t asn_MBR_SoundingRS_UL_ConfigDedicated_v1020_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SoundingRS_UL_ConfigDedicated_v1020_H_ */
#include <asn_internal.h>
