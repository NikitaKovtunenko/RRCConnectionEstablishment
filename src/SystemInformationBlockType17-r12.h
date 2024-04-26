/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType17_r12_H_
#define	_SystemInformationBlockType17_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct WLAN_OffloadInfoPerPLMN_r12;

/* SystemInformationBlockType17-r12 */
typedef struct SystemInformationBlockType17_r12 {
	struct SystemInformationBlockType17_r12__wlan_OffloadInfoPerPLMN_List_r12 {
		A_SEQUENCE_OF(struct WLAN_OffloadInfoPerPLMN_r12) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *wlan_OffloadInfoPerPLMN_List_r12;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType17_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType17_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType17_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType17_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType17_r12_H_ */
#include <asn_internal.h>
