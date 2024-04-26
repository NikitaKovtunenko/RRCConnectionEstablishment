/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CQI_ReportConfig_H_
#define	_CQI_ReportConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CQI-ReportModeAperiodic.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CQI_ReportPeriodic;

/* CQI-ReportConfig */
typedef struct CQI_ReportConfig {
	CQI_ReportModeAperiodic_t	*cqi_ReportModeAperiodic	/* OPTIONAL */;
	long	 nomPDSCH_RS_EPRE_Offset;
	struct CQI_ReportPeriodic	*cqi_ReportPeriodic	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_CQI_ReportConfig_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportConfig_H_ */
#include <asn_internal.h>
