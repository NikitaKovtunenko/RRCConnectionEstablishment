/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RadioResourceConfigCommonSCell_r10_H_
#define	_RadioResourceConfigCommonSCell_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-v9e0.h"
#include <NativeEnumerated.h>
#include "AntennaInfoCommon.h"
#include "PHICH-Config.h"
#include "PDSCH-ConfigCommon.h"
#include <constr_SEQUENCE.h>
#include "P-Max.h"
#include "UplinkPowerControlCommonSCell-r10.h"
#include "SoundingRS-UL-ConfigCommon.h"
#include "UL-CyclicPrefixLength.h"
#include "PUSCH-ConfigCommon.h"
#include "ARFCN-ValueEUTRA.h"
#include "AdditionalSpectrumEmission.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10__dl_Bandwidth_r10 {
	RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10__dl_Bandwidth_r10_n6	= 0,
	RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10__dl_Bandwidth_r10_n15	= 1,
	RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10__dl_Bandwidth_r10_n25	= 2,
	RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10__dl_Bandwidth_r10_n50	= 3,
	RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10__dl_Bandwidth_r10_n75	= 4,
	RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10__dl_Bandwidth_r10_n100	= 5
} e_RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10__dl_Bandwidth_r10;
typedef enum RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10__ul_Bandwidth_r10 {
	RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10__ul_Bandwidth_r10_n6	= 0,
	RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10__ul_Bandwidth_r10_n15	= 1,
	RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10__ul_Bandwidth_r10_n25	= 2,
	RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10__ul_Bandwidth_r10_n50	= 3,
	RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10__ul_Bandwidth_r10_n75	= 4,
	RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10__ul_Bandwidth_r10_n100	= 5
} e_RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10__ul_Bandwidth_r10;

/* Forward declarations */
struct RACH_ConfigCommonSCell_r11;
struct PRACH_Config;
struct TDD_Config_v1130;
struct UplinkPowerControlCommonSCell_v1130;
struct MBSFN_SubframeConfigList;
struct TDD_Config;
struct PRACH_ConfigSCell_r10;

/* RadioResourceConfigCommonSCell-r10 */
typedef struct RadioResourceConfigCommonSCell_r10 {
	struct RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10 {
		long	 dl_Bandwidth_r10;
		AntennaInfoCommon_t	 antennaInfoCommon_r10;
		struct MBSFN_SubframeConfigList	*mbsfn_SubframeConfigList_r10	/* OPTIONAL */;
		PHICH_Config_t	 phich_Config_r10;
		PDSCH_ConfigCommon_t	 pdsch_ConfigCommon_r10;
		struct TDD_Config	*tdd_Config_r10	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} nonUL_Configuration_r10;
	struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10 {
		struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10 {
			ARFCN_ValueEUTRA_t	*ul_CarrierFreq_r10	/* OPTIONAL */;
			long	*ul_Bandwidth_r10	/* OPTIONAL */;
			AdditionalSpectrumEmission_t	 additionalSpectrumEmissionSCell_r10;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} ul_FreqInfo_r10;
		P_Max_t	*p_Max_r10	/* OPTIONAL */;
		UplinkPowerControlCommonSCell_r10_t	 uplinkPowerControlCommonSCell_r10;
		SoundingRS_UL_ConfigCommon_t	 soundingRS_UL_ConfigCommon_r10;
		UL_CyclicPrefixLength_t	 ul_CyclicPrefixLength_r10;
		struct PRACH_ConfigSCell_r10	*prach_ConfigSCell_r10	/* OPTIONAL */;
		PUSCH_ConfigCommon_t	 pusch_ConfigCommon_r10;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ul_Configuration_r10;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	ARFCN_ValueEUTRA_v9e0_t	*ul_CarrierFreq_v1090	/* OPTIONAL */;
	struct RACH_ConfigCommonSCell_r11	*rach_ConfigCommonSCell_r11	/* OPTIONAL */;
	struct PRACH_Config	*prach_ConfigSCell_r11	/* OPTIONAL */;
	struct TDD_Config_v1130	*tdd_Config_v1130	/* OPTIONAL */;
	struct UplinkPowerControlCommonSCell_v1130	*uplinkPowerControlCommonSCell_v1130	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigCommonSCell_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_Bandwidth_r10_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_Bandwidth_r10_18;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigCommonSCell_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigCommonSCell_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioResourceConfigCommonSCell_r10_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _RadioResourceConfigCommonSCell_r10_H_ */
#include <asn_internal.h>