/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UE_RadioPagingInfo_r12_H_
#define	_UE_RadioPagingInfo_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-RadioPagingInfo-r12 */
typedef struct UE_RadioPagingInfo_r12 {
	long	*ue_Category_v1250	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_RadioPagingInfo_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_RadioPagingInfo_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_RadioPagingInfo_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_RadioPagingInfo_r12_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_RadioPagingInfo_r12_H_ */
#include <asn_internal.h>