/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RetxBSR_Timer_r12_H_
#define	_RetxBSR_Timer_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RetxBSR_Timer_r12 {
	RetxBSR_Timer_r12_sf320	= 0,
	RetxBSR_Timer_r12_sf640	= 1,
	RetxBSR_Timer_r12_sf1280	= 2,
	RetxBSR_Timer_r12_sf2560	= 3,
	RetxBSR_Timer_r12_sf5120	= 4,
	RetxBSR_Timer_r12_sf10240	= 5,
	RetxBSR_Timer_r12_spare2	= 6,
	RetxBSR_Timer_r12_spare1	= 7
} e_RetxBSR_Timer_r12;

/* RetxBSR-Timer-r12 */
typedef long	 RetxBSR_Timer_r12_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RetxBSR_Timer_r12_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RetxBSR_Timer_r12;
extern const asn_INTEGER_specifics_t asn_SPC_RetxBSR_Timer_r12_specs_1;
asn_struct_free_f RetxBSR_Timer_r12_free;
asn_struct_print_f RetxBSR_Timer_r12_print;
asn_constr_check_f RetxBSR_Timer_r12_constraint;
ber_type_decoder_f RetxBSR_Timer_r12_decode_ber;
der_type_encoder_f RetxBSR_Timer_r12_encode_der;
xer_type_decoder_f RetxBSR_Timer_r12_decode_xer;
xer_type_encoder_f RetxBSR_Timer_r12_encode_xer;
per_type_decoder_f RetxBSR_Timer_r12_decode_uper;
per_type_encoder_f RetxBSR_Timer_r12_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RetxBSR_Timer_r12_H_ */
#include <asn_internal.h>
