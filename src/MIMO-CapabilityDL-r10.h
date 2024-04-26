/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MIMO_CapabilityDL_r10_H_
#define	_MIMO_CapabilityDL_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MIMO_CapabilityDL_r10 {
	MIMO_CapabilityDL_r10_twoLayers	= 0,
	MIMO_CapabilityDL_r10_fourLayers	= 1,
	MIMO_CapabilityDL_r10_eightLayers	= 2
} e_MIMO_CapabilityDL_r10;

/* MIMO-CapabilityDL-r10 */
typedef long	 MIMO_CapabilityDL_r10_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MIMO_CapabilityDL_r10_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MIMO_CapabilityDL_r10;
extern const asn_INTEGER_specifics_t asn_SPC_MIMO_CapabilityDL_r10_specs_1;
asn_struct_free_f MIMO_CapabilityDL_r10_free;
asn_struct_print_f MIMO_CapabilityDL_r10_print;
asn_constr_check_f MIMO_CapabilityDL_r10_constraint;
ber_type_decoder_f MIMO_CapabilityDL_r10_decode_ber;
der_type_encoder_f MIMO_CapabilityDL_r10_encode_der;
xer_type_decoder_f MIMO_CapabilityDL_r10_decode_xer;
xer_type_encoder_f MIMO_CapabilityDL_r10_encode_xer;
per_type_decoder_f MIMO_CapabilityDL_r10_decode_uper;
per_type_encoder_f MIMO_CapabilityDL_r10_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MIMO_CapabilityDL_r10_H_ */
#include <asn_internal.h>
