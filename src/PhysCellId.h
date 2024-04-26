/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PhysCellId_H_
#define	_PhysCellId_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PhysCellId */
typedef long	 PhysCellId_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PhysCellId_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PhysCellId;
asn_struct_free_f PhysCellId_free;
asn_struct_print_f PhysCellId_print;
asn_constr_check_f PhysCellId_constraint;
ber_type_decoder_f PhysCellId_decode_ber;
der_type_encoder_f PhysCellId_encode_der;
xer_type_decoder_f PhysCellId_decode_xer;
xer_type_encoder_f PhysCellId_encode_xer;
per_type_decoder_f PhysCellId_decode_uper;
per_type_encoder_f PhysCellId_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PhysCellId_H_ */
#include <asn_internal.h>