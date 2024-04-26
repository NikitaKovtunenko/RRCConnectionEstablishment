/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PUCCH_ConfigCommon_H_
#define	_PUCCH_ConfigCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUCCH_ConfigCommon__deltaPUCCH_Shift {
	PUCCH_ConfigCommon__deltaPUCCH_Shift_ds1	= 0,
	PUCCH_ConfigCommon__deltaPUCCH_Shift_ds2	= 1,
	PUCCH_ConfigCommon__deltaPUCCH_Shift_ds3	= 2
} e_PUCCH_ConfigCommon__deltaPUCCH_Shift;

/* PUCCH-ConfigCommon */
typedef struct PUCCH_ConfigCommon {
	long	 deltaPUCCH_Shift;
	long	 nRB_CQI;
	long	 nCS_AN;
	long	 n1PUCCH_AN;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_ConfigCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaPUCCH_Shift_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_ConfigCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_PUCCH_ConfigCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_PUCCH_ConfigCommon_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _PUCCH_ConfigCommon_H_ */
#include <asn_internal.h>
