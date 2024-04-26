/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_ZeroTxPowerCSI_RS_Conf_r12_H_
#define	_ZeroTxPowerCSI_RS_Conf_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "ZeroTxPowerCSI-RS-r12.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ZeroTxPowerCSI_RS_Conf_r12_PR {
	ZeroTxPowerCSI_RS_Conf_r12_PR_NOTHING,	/* No components present */
	ZeroTxPowerCSI_RS_Conf_r12_PR_release,
	ZeroTxPowerCSI_RS_Conf_r12_PR_setup
} ZeroTxPowerCSI_RS_Conf_r12_PR;

/* ZeroTxPowerCSI-RS-Conf-r12 */
typedef struct ZeroTxPowerCSI_RS_Conf_r12 {
	ZeroTxPowerCSI_RS_Conf_r12_PR present;
	union ZeroTxPowerCSI_RS_Conf_r12_u {
		NULL_t	 release;
		ZeroTxPowerCSI_RS_r12_t	 setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ZeroTxPowerCSI_RS_Conf_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ZeroTxPowerCSI_RS_Conf_r12;
extern asn_CHOICE_specifics_t asn_SPC_ZeroTxPowerCSI_RS_Conf_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_ZeroTxPowerCSI_RS_Conf_r12_1[2];
extern asn_per_constraints_t asn_PER_type_ZeroTxPowerCSI_RS_Conf_r12_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ZeroTxPowerCSI_RS_Conf_r12_H_ */
#include <asn_internal.h>
