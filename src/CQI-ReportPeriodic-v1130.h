/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CQI_ReportPeriodic_v1130_H_
#define	_CQI_ReportPeriodic_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_ReportPeriodic_v1130__simultaneousAckNackAndCQI_Format3_r11 {
	CQI_ReportPeriodic_v1130__simultaneousAckNackAndCQI_Format3_r11_setup	= 0
} e_CQI_ReportPeriodic_v1130__simultaneousAckNackAndCQI_Format3_r11;

/* Forward declarations */
struct CQI_ReportPeriodicProcExtToReleaseList_r11;
struct CQI_ReportPeriodicProcExtToAddModList_r11;

/* CQI-ReportPeriodic-v1130 */
typedef struct CQI_ReportPeriodic_v1130 {
	long	*simultaneousAckNackAndCQI_Format3_r11	/* OPTIONAL */;
	struct CQI_ReportPeriodicProcExtToReleaseList_r11	*cqi_ReportPeriodicProcExtToReleaseList_r11	/* OPTIONAL */;
	struct CQI_ReportPeriodicProcExtToAddModList_r11	*cqi_ReportPeriodicProcExtToAddModList_r11	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportPeriodic_v1130_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_simultaneousAckNackAndCQI_Format3_r11_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportPeriodic_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportPeriodic_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_CQI_ReportPeriodic_v1130_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportPeriodic_v1130_H_ */
#include <asn_internal.h>
