/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PowerRampingParameters_H_
#define	_PowerRampingParameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PowerRampingParameters__powerRampingStep {
	PowerRampingParameters__powerRampingStep_dB0	= 0,
	PowerRampingParameters__powerRampingStep_dB2	= 1,
	PowerRampingParameters__powerRampingStep_dB4	= 2,
	PowerRampingParameters__powerRampingStep_dB6	= 3
} e_PowerRampingParameters__powerRampingStep;
typedef enum PowerRampingParameters__preambleInitialReceivedTargetPower {
	PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_120	= 0,
	PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_118	= 1,
	PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_116	= 2,
	PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_114	= 3,
	PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_112	= 4,
	PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_110	= 5,
	PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_108	= 6,
	PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_106	= 7,
	PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_104	= 8,
	PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_102	= 9,
	PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_100	= 10,
	PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_98	= 11,
	PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_96	= 12,
	PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_94	= 13,
	PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_92	= 14,
	PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_90	= 15
} e_PowerRampingParameters__preambleInitialReceivedTargetPower;

/* PowerRampingParameters */
typedef struct PowerRampingParameters {
	long	 powerRampingStep;
	long	 preambleInitialReceivedTargetPower;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PowerRampingParameters_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_powerRampingStep_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_preambleInitialReceivedTargetPower_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PowerRampingParameters;
extern asn_SEQUENCE_specifics_t asn_SPC_PowerRampingParameters_specs_1;
extern asn_TYPE_member_t asn_MBR_PowerRampingParameters_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PowerRampingParameters_H_ */
#include <asn_internal.h>
