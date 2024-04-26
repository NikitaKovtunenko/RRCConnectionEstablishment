/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UplinkPowerControlCommon_H_
#define	_UplinkPowerControlCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "Alpha-r12.h"
#include "DeltaFList-PUCCH.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UplinkPowerControlCommon */
typedef struct UplinkPowerControlCommon {
	long	 p0_NominalPUSCH;
	Alpha_r12_t	 alpha;
	long	 p0_NominalPUCCH;
	DeltaFList_PUCCH_t	 deltaFList_PUCCH;
	long	 deltaPreambleMsg3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkPowerControlCommon_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_UplinkPowerControlCommon_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _UplinkPowerControlCommon_H_ */
#include <asn_internal.h>