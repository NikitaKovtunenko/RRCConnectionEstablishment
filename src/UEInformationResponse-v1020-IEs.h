/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UEInformationResponse_v1020_IEs_H_
#define	_UEInformationResponse_v1020_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LogMeasReport_r10;
struct UEInformationResponse_v1130_IEs;

/* UEInformationResponse-v1020-IEs */
typedef struct UEInformationResponse_v1020_IEs {
	struct LogMeasReport_r10	*logMeasReport_r10	/* OPTIONAL */;
	struct UEInformationResponse_v1130_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEInformationResponse_v1020_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEInformationResponse_v1020_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UEInformationResponse_v1020_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UEInformationResponse_v1020_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UEInformationResponse_v1020_IEs_H_ */
#include <asn_internal.h>
