/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_DiscResourcePool_r12_H_
#define	_SL_DiscResourcePool_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-CP-Len-r12.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "SL-TF-ResourceConfig-r12.h"
#include "SL-TxParameters-r12.h"
#include "SL-PoolSelectionConfig-r12.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_DiscResourcePool_r12__discPeriod_r12 {
	SL_DiscResourcePool_r12__discPeriod_r12_rf32	= 0,
	SL_DiscResourcePool_r12__discPeriod_r12_rf64	= 1,
	SL_DiscResourcePool_r12__discPeriod_r12_rf128	= 2,
	SL_DiscResourcePool_r12__discPeriod_r12_rf256	= 3,
	SL_DiscResourcePool_r12__discPeriod_r12_rf512	= 4,
	SL_DiscResourcePool_r12__discPeriod_r12_rf1024	= 5,
	SL_DiscResourcePool_r12__discPeriod_r12_spare2	= 6,
	SL_DiscResourcePool_r12__discPeriod_r12_spare	= 7
} e_SL_DiscResourcePool_r12__discPeriod_r12;
typedef enum SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_PR {
	SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_PR_NOTHING,	/* No components present */
	SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_PR_rsrpBased_r12,
	SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_PR_random_r12
} SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_PR;
typedef enum SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__txProbability_r12 {
	SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__txProbability_r12_p25	= 0,
	SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__txProbability_r12_p50	= 1,
	SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__txProbability_r12_p75	= 2,
	SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__txProbability_r12_p100	= 3
} e_SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__txProbability_r12;

/* Forward declarations */
struct TDD_Config;

/* SL-DiscResourcePool-r12 */
typedef struct SL_DiscResourcePool_r12 {
	SL_CP_Len_r12_t	 cp_Len_r12;
	long	 discPeriod_r12;
	long	 numRetx_r12;
	long	 numRepetition_r12;
	SL_TF_ResourceConfig_r12_t	 tf_ResourceConfig_r12;
	struct SL_DiscResourcePool_r12__txParameters_r12 {
		SL_TxParameters_r12_t	 txParametersGeneral_r12;
		struct SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12 {
			struct SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12 {
				SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_PR present;
				union SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_u {
					SL_PoolSelectionConfig_r12_t	 rsrpBased_r12;
					NULL_t	 random_r12;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} poolSelection_r12;
			long	 txProbability_r12;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ue_SelectedResourceConfig_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *txParameters_r12;
	struct SL_DiscResourcePool_r12__rxParameters_r12 {
		struct TDD_Config	*tdd_Config_r12	/* OPTIONAL */;
		long	 syncConfigIndex_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rxParameters_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_DiscResourcePool_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_discPeriod_r12_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_txProbability_r12_21;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_DiscResourcePool_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_DiscResourcePool_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_DiscResourcePool_r12_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_DiscResourcePool_r12_H_ */
#include <asn_internal.h>