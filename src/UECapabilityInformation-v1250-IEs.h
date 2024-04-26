/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UECapabilityInformation_v1250_IEs_H_
#define	_UECapabilityInformation_v1250_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_RadioPagingInfo_r12;

/* UECapabilityInformation-v1250-IEs */
typedef struct UECapabilityInformation_v1250_IEs {
	struct UE_RadioPagingInfo_r12	*ue_RadioPagingInfo_r12	/* OPTIONAL */;
	struct UECapabilityInformation_v1250_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityInformation_v1250_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityInformation_v1250_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UECapabilityInformation_v1250_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UECapabilityInformation_v1250_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UECapabilityInformation_v1250_IEs_H_ */
#include <asn_internal.h>
