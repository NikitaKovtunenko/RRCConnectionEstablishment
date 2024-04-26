/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_SyncConfig_r12_H_
#define	_SL_SyncConfig_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-CP-Len-r12.h"
#include "SL-OffsetIndicatorSync-r12.h"
#include "SLSSID-r12.h"
#include "SL-TxParameters-r12.h"
#include "RSRP-RangeSL-r12.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include "PhysCellId.h"
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_SyncConfig_r12__rxParamsNCell_r12__discSyncWindow_r12 {
	SL_SyncConfig_r12__rxParamsNCell_r12__discSyncWindow_r12_w1	= 0,
	SL_SyncConfig_r12__rxParamsNCell_r12__discSyncWindow_r12_w2	= 1
} e_SL_SyncConfig_r12__rxParamsNCell_r12__discSyncWindow_r12;

/* SL-SyncConfig-r12 */
typedef struct SL_SyncConfig_r12 {
	SL_CP_Len_r12_t	 syncCP_Len_r12;
	SL_OffsetIndicatorSync_r12_t	 syncOffsetIndicator_r12;
	SLSSID_r12_t	 slssid_r12;
	struct SL_SyncConfig_r12__txParameters_r12 {
		SL_TxParameters_r12_t	 syncTxParameters_r12;
		RSRP_RangeSL_r12_t	 syncTxThreshIC_r12;
		BIT_STRING_t	*syncInfoReserved_r12	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *txParameters_r12;
	struct SL_SyncConfig_r12__rxParamsNCell_r12 {
		PhysCellId_t	 physCellId_r12;
		long	 discSyncWindow_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rxParamsNCell_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_SyncConfig_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_discSyncWindow_r12_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_SyncConfig_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_SyncConfig_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_SyncConfig_r12_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_SyncConfig_r12_H_ */
#include <asn_internal.h>
