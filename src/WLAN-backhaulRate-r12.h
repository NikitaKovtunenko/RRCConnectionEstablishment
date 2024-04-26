/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_WLAN_backhaulRate_r12_H_
#define	_WLAN_backhaulRate_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WLAN_backhaulRate_r12 {
	WLAN_backhaulRate_r12_r0	= 0,
	WLAN_backhaulRate_r12_r4	= 1,
	WLAN_backhaulRate_r12_r8	= 2,
	WLAN_backhaulRate_r12_r16	= 3,
	WLAN_backhaulRate_r12_r32	= 4,
	WLAN_backhaulRate_r12_r64	= 5,
	WLAN_backhaulRate_r12_r128	= 6,
	WLAN_backhaulRate_r12_r256	= 7,
	WLAN_backhaulRate_r12_r512	= 8,
	WLAN_backhaulRate_r12_r1024	= 9,
	WLAN_backhaulRate_r12_r2048	= 10,
	WLAN_backhaulRate_r12_r4096	= 11,
	WLAN_backhaulRate_r12_r8192	= 12,
	WLAN_backhaulRate_r12_r16384	= 13,
	WLAN_backhaulRate_r12_r32768	= 14,
	WLAN_backhaulRate_r12_r65536	= 15,
	WLAN_backhaulRate_r12_r131072	= 16,
	WLAN_backhaulRate_r12_r262144	= 17,
	WLAN_backhaulRate_r12_r524288	= 18,
	WLAN_backhaulRate_r12_r1048576	= 19,
	WLAN_backhaulRate_r12_r2097152	= 20,
	WLAN_backhaulRate_r12_r4194304	= 21,
	WLAN_backhaulRate_r12_r8388608	= 22,
	WLAN_backhaulRate_r12_r16777216	= 23,
	WLAN_backhaulRate_r12_r33554432	= 24,
	WLAN_backhaulRate_r12_r67108864	= 25,
	WLAN_backhaulRate_r12_r134217728	= 26,
	WLAN_backhaulRate_r12_r268435456	= 27,
	WLAN_backhaulRate_r12_r536870912	= 28,
	WLAN_backhaulRate_r12_r1073741824	= 29,
	WLAN_backhaulRate_r12_r2147483648	= 30,
	WLAN_backhaulRate_r12_r4294967296	= 31
} e_WLAN_backhaulRate_r12;

/* WLAN-backhaulRate-r12 */
typedef long	 WLAN_backhaulRate_r12_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_WLAN_backhaulRate_r12_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_WLAN_backhaulRate_r12;
extern const asn_INTEGER_specifics_t asn_SPC_WLAN_backhaulRate_r12_specs_1;
asn_struct_free_f WLAN_backhaulRate_r12_free;
asn_struct_print_f WLAN_backhaulRate_r12_print;
asn_constr_check_f WLAN_backhaulRate_r12_constraint;
ber_type_decoder_f WLAN_backhaulRate_r12_decode_ber;
der_type_encoder_f WLAN_backhaulRate_r12_encode_der;
xer_type_decoder_f WLAN_backhaulRate_r12_decode_xer;
xer_type_encoder_f WLAN_backhaulRate_r12_encode_xer;
per_type_decoder_f WLAN_backhaulRate_r12_decode_uper;
per_type_encoder_f WLAN_backhaulRate_r12_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _WLAN_backhaulRate_r12_H_ */
#include <asn_internal.h>
