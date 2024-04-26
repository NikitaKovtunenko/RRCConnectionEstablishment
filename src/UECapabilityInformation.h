/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UECapabilityInformation_H_
#define	_UECapabilityInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "UECapabilityInformation-r8-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UECapabilityInformation__criticalExtensions_PR {
	UECapabilityInformation__criticalExtensions_PR_NOTHING,	/* No components present */
	UECapabilityInformation__criticalExtensions_PR_c1,
	UECapabilityInformation__criticalExtensions_PR_criticalExtensionsFuture
} UECapabilityInformation__criticalExtensions_PR;
typedef enum UECapabilityInformation__criticalExtensions__c1_PR {
	UECapabilityInformation__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	UECapabilityInformation__criticalExtensions__c1_PR_ueCapabilityInformation_r8,
	UECapabilityInformation__criticalExtensions__c1_PR_spare7,
	UECapabilityInformation__criticalExtensions__c1_PR_spare6,
	UECapabilityInformation__criticalExtensions__c1_PR_spare5,
	UECapabilityInformation__criticalExtensions__c1_PR_spare4,
	UECapabilityInformation__criticalExtensions__c1_PR_spare3,
	UECapabilityInformation__criticalExtensions__c1_PR_spare2,
	UECapabilityInformation__criticalExtensions__c1_PR_spare1
} UECapabilityInformation__criticalExtensions__c1_PR;

/* UECapabilityInformation */
typedef struct UECapabilityInformation {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct UECapabilityInformation__criticalExtensions {
		UECapabilityInformation__criticalExtensions_PR present;
		union UECapabilityInformation__criticalExtensions_u {
			struct UECapabilityInformation__criticalExtensions__c1 {
				UECapabilityInformation__criticalExtensions__c1_PR present;
				union UECapabilityInformation__criticalExtensions__c1_u {
					UECapabilityInformation_r8_IEs_t	 ueCapabilityInformation_r8;
					NULL_t	 spare7;
					NULL_t	 spare6;
					NULL_t	 spare5;
					NULL_t	 spare4;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct UECapabilityInformation__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_UECapabilityInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_UECapabilityInformation_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UECapabilityInformation_H_ */
#include <asn_internal.h>
