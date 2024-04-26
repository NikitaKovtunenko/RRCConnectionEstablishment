/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RadioResourceConfigDedicatedPSCell_r12_H_
#define	_RadioResourceConfigDedicatedPSCell_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhysicalConfigDedicated;
struct SPS_Config;
struct NAICS_AssistanceInfo_r12;

/* RadioResourceConfigDedicatedPSCell-r12 */
typedef struct RadioResourceConfigDedicatedPSCell_r12 {
	struct PhysicalConfigDedicated	*physicalConfigDedicatedPSCell_r12	/* OPTIONAL */;
	struct SPS_Config	*sps_Config_r12	/* OPTIONAL */;
	struct NAICS_AssistanceInfo_r12	*naics_Info_r12	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigDedicatedPSCell_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicatedPSCell_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigDedicatedPSCell_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioResourceConfigDedicatedPSCell_r12_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RadioResourceConfigDedicatedPSCell_r12_H_ */
#include <asn_internal.h>
