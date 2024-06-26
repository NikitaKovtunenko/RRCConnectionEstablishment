/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_CommResourcePool_r12_H_
#define	_SL_CommResourcePool_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-CP-Len-r12.h"
#include "SL-PeriodComm-r12.h"
#include "SL-TF-ResourceConfig-r12.h"
#include "SL-HoppingConfigComm-r12.h"
#include "SL-TRPT-Subset-r12.h"
#include <constr_SEQUENCE.h>
#include <NativeInteger.h>
#include "SL-TxParameters-r12.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TDD_Config;

/* SL-CommResourcePool-r12 */
typedef struct SL_CommResourcePool_r12 {
	SL_CP_Len_r12_t	 sc_CP_Len_r12;
	SL_PeriodComm_r12_t	 sc_Period_r12;
	SL_TF_ResourceConfig_r12_t	 sc_TF_ResourceConfig_r12;
	SL_CP_Len_r12_t	 data_CP_Len_r12;
	SL_HoppingConfigComm_r12_t	 dataHoppingConfig_r12;
	struct SL_CommResourcePool_r12__ue_SelectedResourceConfig_r12 {
		SL_TF_ResourceConfig_r12_t	 data_TF_ResourceConfig_r12;
		SL_TRPT_Subset_r12_t	*trpt_Subset_r12	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ue_SelectedResourceConfig_r12;
	struct SL_CommResourcePool_r12__rxParametersNCell_r12 {
		struct TDD_Config	*tdd_Config_r12	/* OPTIONAL */;
		long	 syncConfigIndex_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rxParametersNCell_r12;
	struct SL_CommResourcePool_r12__txParameters_r12 {
		SL_TxParameters_r12_t	 sc_TxParameters_r12;
		SL_TxParameters_r12_t	 dataTxParameters_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *txParameters_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_CommResourcePool_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_CommResourcePool_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_CommResourcePool_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_CommResourcePool_r12_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_CommResourcePool_r12_H_ */
#include <asn_internal.h>
