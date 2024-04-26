/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_AntennaInfoCommon_H_
#define	_AntennaInfoCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AntennaInfoCommon__antennaPortsCount {
	AntennaInfoCommon__antennaPortsCount_an1	= 0,
	AntennaInfoCommon__antennaPortsCount_an2	= 1,
	AntennaInfoCommon__antennaPortsCount_an4	= 2,
	AntennaInfoCommon__antennaPortsCount_spare1	= 3
} e_AntennaInfoCommon__antennaPortsCount;

/* AntennaInfoCommon */
typedef struct AntennaInfoCommon {
	long	 antennaPortsCount;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AntennaInfoCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_antennaPortsCount_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_AntennaInfoCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_AntennaInfoCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_AntennaInfoCommon_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _AntennaInfoCommon_H_ */
#include <asn_internal.h>