/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "asn/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "PhysicalConfigDedicated.h"

#include "PDSCH-ConfigDedicated.h"
#include "PUCCH-ConfigDedicated.h"
#include "PUSCH-ConfigDedicated.h"
#include "UplinkPowerControlDedicated.h"
#include "TPC-PDCCH-Config.h"
#include "CQI-ReportConfig.h"
#include "SoundingRS-UL-ConfigDedicated.h"
#include "SchedulingRequestConfig.h"
#include "CQI-ReportConfig-v920.h"
#include "AntennaInfoDedicated-v920.h"
#include "AntennaInfoUL-r10.h"
#include "CQI-ReportConfig-r10.h"
#include "CSI-RS-Config-r10.h"
#include "PUCCH-ConfigDedicated-v1020.h"
#include "PUSCH-ConfigDedicated-v1020.h"
#include "SchedulingRequestConfig-v1020.h"
#include "SoundingRS-UL-ConfigDedicated-v1020.h"
#include "SoundingRS-UL-ConfigDedicatedAperiodic-r10.h"
#include "UplinkPowerControlDedicated-v1020.h"
#include "CSI-RS-ConfigNZPToReleaseList-r11.h"
#include "CSI-RS-ConfigNZPToAddModList-r11.h"
#include "CSI-RS-ConfigZPToReleaseList-r11.h"
#include "CSI-RS-ConfigZPToAddModList-r11.h"
#include "EPDCCH-Config-r11.h"
#include "PDSCH-ConfigDedicated-v1130.h"
#include "CQI-ReportConfig-v1130.h"
#include "PUCCH-ConfigDedicated-v1130.h"
#include "PUSCH-ConfigDedicated-v1130.h"
#include "UplinkPowerControlDedicated-v1130.h"
#include "AntennaInfoDedicated-v1250.h"
#include "EIMTA-MainConfig-r12.h"
#include "EIMTA-MainConfigServCell-r12.h"
#include "PUCCH-ConfigDedicated-v1250.h"
#include "CQI-ReportConfig-v1250.h"
#include "UplinkPowerControlDedicated-v1250.h"
#include "PUSCH-ConfigDedicated-v1250.h"
#include "CSI-RS-Config-v1250.h"
static asn_per_constraints_t asn_PER_type_antennaInfo_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_antennaInfo_r10_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_additionalSpectrumEmissionCA_r10_constr_30 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_antennaInfo_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalConfigDedicated__antennaInfo, choice.explicitValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoDedicated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"explicitValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalConfigDedicated__antennaInfo, choice.defaultValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"defaultValue"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_antennaInfo_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicitValue */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultValue */
};
static asn_CHOICE_specifics_t asn_SPC_antennaInfo_specs_10 = {
	sizeof(struct PhysicalConfigDedicated__antennaInfo),
	offsetof(struct PhysicalConfigDedicated__antennaInfo, _asn_ctx),
	offsetof(struct PhysicalConfigDedicated__antennaInfo, present),
	sizeof(((struct PhysicalConfigDedicated__antennaInfo *)0)->present),
	asn_MAP_antennaInfo_tag2el_10,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_antennaInfo_10 = {
	"antennaInfo",
	"antennaInfo",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_antennaInfo_constr_10, CHOICE_constraint },
	asn_MBR_antennaInfo_10,
	2,	/* Elements count */
	&asn_SPC_antennaInfo_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_antennaInfo_r10_17[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalConfigDedicated__antennaInfo_r10, choice.explicitValue_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoDedicated_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"explicitValue-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalConfigDedicated__antennaInfo_r10, choice.defaultValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"defaultValue"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_antennaInfo_r10_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicitValue-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultValue */
};
static asn_CHOICE_specifics_t asn_SPC_antennaInfo_r10_specs_17 = {
	sizeof(struct PhysicalConfigDedicated__antennaInfo_r10),
	offsetof(struct PhysicalConfigDedicated__antennaInfo_r10, _asn_ctx),
	offsetof(struct PhysicalConfigDedicated__antennaInfo_r10, present),
	sizeof(((struct PhysicalConfigDedicated__antennaInfo_r10 *)0)->present),
	asn_MAP_antennaInfo_r10_tag2el_17,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_antennaInfo_r10_17 = {
	"antennaInfo-r10",
	"antennaInfo-r10",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_antennaInfo_r10_constr_17, CHOICE_constraint },
	asn_MBR_antennaInfo_r10_17,
	2,	/* Elements count */
	&asn_SPC_antennaInfo_r10_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_32[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalConfigDedicated__additionalSpectrumEmissionCA_r10__setup, additionalSpectrumEmissionPCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSpectrumEmission,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSpectrumEmissionPCell-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_32[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_32[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* additionalSpectrumEmissionPCell-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_32 = {
	sizeof(struct PhysicalConfigDedicated__additionalSpectrumEmissionCA_r10__setup),
	offsetof(struct PhysicalConfigDedicated__additionalSpectrumEmissionCA_r10__setup, _asn_ctx),
	asn_MAP_setup_tag2el_32,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_32 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_32,
	sizeof(asn_DEF_setup_tags_32)
		/sizeof(asn_DEF_setup_tags_32[0]) - 1, /* 1 */
	asn_DEF_setup_tags_32,	/* Same as above */
	sizeof(asn_DEF_setup_tags_32)
		/sizeof(asn_DEF_setup_tags_32[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_32,
	1,	/* Elements count */
	&asn_SPC_setup_specs_32	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_additionalSpectrumEmissionCA_r10_30[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalConfigDedicated__additionalSpectrumEmissionCA_r10, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalConfigDedicated__additionalSpectrumEmissionCA_r10, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_32,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_additionalSpectrumEmissionCA_r10_tag2el_30[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_additionalSpectrumEmissionCA_r10_specs_30 = {
	sizeof(struct PhysicalConfigDedicated__additionalSpectrumEmissionCA_r10),
	offsetof(struct PhysicalConfigDedicated__additionalSpectrumEmissionCA_r10, _asn_ctx),
	offsetof(struct PhysicalConfigDedicated__additionalSpectrumEmissionCA_r10, present),
	sizeof(((struct PhysicalConfigDedicated__additionalSpectrumEmissionCA_r10 *)0)->present),
	asn_MAP_additionalSpectrumEmissionCA_r10_tag2el_30,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_additionalSpectrumEmissionCA_r10_30 = {
	"additionalSpectrumEmissionCA-r10",
	"additionalSpectrumEmissionCA-r10",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_additionalSpectrumEmissionCA_r10_constr_30, CHOICE_constraint },
	asn_MBR_additionalSpectrumEmissionCA_r10_30,
	2,	/* Elements count */
	&asn_SPC_additionalSpectrumEmissionCA_r10_specs_30	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PhysicalConfigDedicated_1[] = {
	{ ATF_POINTER, 42, offsetof(struct PhysicalConfigDedicated, pdsch_ConfigDedicated),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_ConfigDedicated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-ConfigDedicated"
		},
	{ ATF_POINTER, 41, offsetof(struct PhysicalConfigDedicated, pucch_ConfigDedicated),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_ConfigDedicated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-ConfigDedicated"
		},
	{ ATF_POINTER, 40, offsetof(struct PhysicalConfigDedicated, pusch_ConfigDedicated),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigDedicated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-ConfigDedicated"
		},
	{ ATF_POINTER, 39, offsetof(struct PhysicalConfigDedicated, uplinkPowerControlDedicated),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlDedicated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlDedicated"
		},
	{ ATF_POINTER, 38, offsetof(struct PhysicalConfigDedicated, tpc_PDCCH_ConfigPUCCH),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TPC_PDCCH_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tpc-PDCCH-ConfigPUCCH"
		},
	{ ATF_POINTER, 37, offsetof(struct PhysicalConfigDedicated, tpc_PDCCH_ConfigPUSCH),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TPC_PDCCH_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tpc-PDCCH-ConfigPUSCH"
		},
	{ ATF_POINTER, 36, offsetof(struct PhysicalConfigDedicated, cqi_ReportConfig),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportConfig"
		},
	{ ATF_POINTER, 35, offsetof(struct PhysicalConfigDedicated, soundingRS_UL_ConfigDedicated),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SoundingRS_UL_ConfigDedicated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"soundingRS-UL-ConfigDedicated"
		},
	{ ATF_POINTER, 34, offsetof(struct PhysicalConfigDedicated, antennaInfo),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_antennaInfo_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antennaInfo"
		},
	{ ATF_POINTER, 33, offsetof(struct PhysicalConfigDedicated, schedulingRequestConfig),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SchedulingRequestConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"schedulingRequestConfig"
		},
	{ ATF_POINTER, 32, offsetof(struct PhysicalConfigDedicated, cqi_ReportConfig_v920),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportConfig_v920,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportConfig-v920"
		},
	{ ATF_POINTER, 31, offsetof(struct PhysicalConfigDedicated, antennaInfo_v920),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoDedicated_v920,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antennaInfo-v920"
		},
	{ ATF_POINTER, 30, offsetof(struct PhysicalConfigDedicated, antennaInfo_r10),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_antennaInfo_r10_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antennaInfo-r10"
		},
	{ ATF_POINTER, 29, offsetof(struct PhysicalConfigDedicated, antennaInfoUL_r10),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoUL_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antennaInfoUL-r10"
		},
	{ ATF_POINTER, 28, offsetof(struct PhysicalConfigDedicated, cif_Presence_r10),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cif-Presence-r10"
		},
	{ ATF_POINTER, 27, offsetof(struct PhysicalConfigDedicated, cqi_ReportConfig_r10),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportConfig_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportConfig-r10"
		},
	{ ATF_POINTER, 26, offsetof(struct PhysicalConfigDedicated, csi_RS_Config_r10),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_Config_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-Config-r10"
		},
	{ ATF_POINTER, 25, offsetof(struct PhysicalConfigDedicated, pucch_ConfigDedicated_v1020),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_ConfigDedicated_v1020,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-ConfigDedicated-v1020"
		},
	{ ATF_POINTER, 24, offsetof(struct PhysicalConfigDedicated, pusch_ConfigDedicated_v1020),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigDedicated_v1020,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-ConfigDedicated-v1020"
		},
	{ ATF_POINTER, 23, offsetof(struct PhysicalConfigDedicated, schedulingRequestConfig_v1020),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SchedulingRequestConfig_v1020,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"schedulingRequestConfig-v1020"
		},
	{ ATF_POINTER, 22, offsetof(struct PhysicalConfigDedicated, soundingRS_UL_ConfigDedicated_v1020),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SoundingRS_UL_ConfigDedicated_v1020,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"soundingRS-UL-ConfigDedicated-v1020"
		},
	{ ATF_POINTER, 21, offsetof(struct PhysicalConfigDedicated, soundingRS_UL_ConfigDedicatedAperiodic_r10),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SoundingRS_UL_ConfigDedicatedAperiodic_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"soundingRS-UL-ConfigDedicatedAperiodic-r10"
		},
	{ ATF_POINTER, 20, offsetof(struct PhysicalConfigDedicated, uplinkPowerControlDedicated_v1020),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlDedicated_v1020,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlDedicated-v1020"
		},
	{ ATF_POINTER, 19, offsetof(struct PhysicalConfigDedicated, additionalSpectrumEmissionCA_r10),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_additionalSpectrumEmissionCA_r10_30,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSpectrumEmissionCA-r10"
		},
	{ ATF_POINTER, 18, offsetof(struct PhysicalConfigDedicated, csi_RS_ConfigNZPToReleaseList_r11),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigNZPToReleaseList_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-ConfigNZPToReleaseList-r11"
		},
	{ ATF_POINTER, 17, offsetof(struct PhysicalConfigDedicated, csi_RS_ConfigNZPToAddModList_r11),
		(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigNZPToAddModList_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-ConfigNZPToAddModList-r11"
		},
	{ ATF_POINTER, 16, offsetof(struct PhysicalConfigDedicated, csi_RS_ConfigZPToReleaseList_r11),
		(ASN_TAG_CLASS_CONTEXT | (26 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigZPToReleaseList_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-ConfigZPToReleaseList-r11"
		},
	{ ATF_POINTER, 15, offsetof(struct PhysicalConfigDedicated, csi_RS_ConfigZPToAddModList_r11),
		(ASN_TAG_CLASS_CONTEXT | (27 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigZPToAddModList_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-ConfigZPToAddModList-r11"
		},
	{ ATF_POINTER, 14, offsetof(struct PhysicalConfigDedicated, epdcch_Config_r11),
		(ASN_TAG_CLASS_CONTEXT | (28 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EPDCCH_Config_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"epdcch-Config-r11"
		},
	{ ATF_POINTER, 13, offsetof(struct PhysicalConfigDedicated, pdsch_ConfigDedicated_v1130),
		(ASN_TAG_CLASS_CONTEXT | (29 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_ConfigDedicated_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-ConfigDedicated-v1130"
		},
	{ ATF_POINTER, 12, offsetof(struct PhysicalConfigDedicated, cqi_ReportConfig_v1130),
		(ASN_TAG_CLASS_CONTEXT | (30 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportConfig_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportConfig-v1130"
		},
	{ ATF_POINTER, 11, offsetof(struct PhysicalConfigDedicated, pucch_ConfigDedicated_v1130),
		(ASN_TAG_CLASS_CONTEXT | (31 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_ConfigDedicated_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-ConfigDedicated-v1130"
		},
	{ ATF_POINTER, 10, offsetof(struct PhysicalConfigDedicated, pusch_ConfigDedicated_v1130),
		(ASN_TAG_CLASS_CONTEXT | (32 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigDedicated_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-ConfigDedicated-v1130"
		},
	{ ATF_POINTER, 9, offsetof(struct PhysicalConfigDedicated, uplinkPowerControlDedicated_v1130),
		(ASN_TAG_CLASS_CONTEXT | (33 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlDedicated_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlDedicated-v1130"
		},
	{ ATF_POINTER, 8, offsetof(struct PhysicalConfigDedicated, antennaInfo_v1250),
		(ASN_TAG_CLASS_CONTEXT | (34 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoDedicated_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antennaInfo-v1250"
		},
	{ ATF_POINTER, 7, offsetof(struct PhysicalConfigDedicated, eimta_MainConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (35 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_EIMTA_MainConfig_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eimta-MainConfig-r12"
		},
	{ ATF_POINTER, 6, offsetof(struct PhysicalConfigDedicated, eimta_MainConfigPCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (36 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_EIMTA_MainConfigServCell_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eimta-MainConfigPCell-r12"
		},
	{ ATF_POINTER, 5, offsetof(struct PhysicalConfigDedicated, pucch_ConfigDedicated_v1250),
		(ASN_TAG_CLASS_CONTEXT | (37 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_ConfigDedicated_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-ConfigDedicated-v1250"
		},
	{ ATF_POINTER, 4, offsetof(struct PhysicalConfigDedicated, cqi_ReportConfigPCell_v1250),
		(ASN_TAG_CLASS_CONTEXT | (38 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportConfig_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportConfigPCell-v1250"
		},
	{ ATF_POINTER, 3, offsetof(struct PhysicalConfigDedicated, uplinkPowerControlDedicated_v1250),
		(ASN_TAG_CLASS_CONTEXT | (39 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlDedicated_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlDedicated-v1250"
		},
	{ ATF_POINTER, 2, offsetof(struct PhysicalConfigDedicated, pusch_ConfigDedicated_v1250),
		(ASN_TAG_CLASS_CONTEXT | (40 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigDedicated_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-ConfigDedicated-v1250"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalConfigDedicated, csi_RS_Config_v1250),
		(ASN_TAG_CLASS_CONTEXT | (41 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_Config_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-Config-v1250"
		},
};
static const int asn_MAP_PhysicalConfigDedicated_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41 };
static const ber_tlv_tag_t asn_DEF_PhysicalConfigDedicated_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PhysicalConfigDedicated_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdsch-ConfigDedicated */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pucch-ConfigDedicated */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pusch-ConfigDedicated */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* uplinkPowerControlDedicated */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* tpc-PDCCH-ConfigPUCCH */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* tpc-PDCCH-ConfigPUSCH */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* cqi-ReportConfig */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* soundingRS-UL-ConfigDedicated */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* antennaInfo */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* schedulingRequestConfig */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* cqi-ReportConfig-v920 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* antennaInfo-v920 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* antennaInfo-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* antennaInfoUL-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* cif-Presence-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* cqi-ReportConfig-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* csi-RS-Config-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* pucch-ConfigDedicated-v1020 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* pusch-ConfigDedicated-v1020 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* schedulingRequestConfig-v1020 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* soundingRS-UL-ConfigDedicated-v1020 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* soundingRS-UL-ConfigDedicatedAperiodic-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 }, /* uplinkPowerControlDedicated-v1020 */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 23, 0, 0 }, /* additionalSpectrumEmissionCA-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 24, 0, 0 }, /* csi-RS-ConfigNZPToReleaseList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 25, 0, 0 }, /* csi-RS-ConfigNZPToAddModList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 26, 0, 0 }, /* csi-RS-ConfigZPToReleaseList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 27, 0, 0 }, /* csi-RS-ConfigZPToAddModList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (28 << 2)), 28, 0, 0 }, /* epdcch-Config-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (29 << 2)), 29, 0, 0 }, /* pdsch-ConfigDedicated-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (30 << 2)), 30, 0, 0 }, /* cqi-ReportConfig-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (31 << 2)), 31, 0, 0 }, /* pucch-ConfigDedicated-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (32 << 2)), 32, 0, 0 }, /* pusch-ConfigDedicated-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (33 << 2)), 33, 0, 0 }, /* uplinkPowerControlDedicated-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (34 << 2)), 34, 0, 0 }, /* antennaInfo-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (35 << 2)), 35, 0, 0 }, /* eimta-MainConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (36 << 2)), 36, 0, 0 }, /* eimta-MainConfigPCell-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (37 << 2)), 37, 0, 0 }, /* pucch-ConfigDedicated-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (38 << 2)), 38, 0, 0 }, /* cqi-ReportConfigPCell-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (39 << 2)), 39, 0, 0 }, /* uplinkPowerControlDedicated-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (40 << 2)), 40, 0, 0 }, /* pusch-ConfigDedicated-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (41 << 2)), 41, 0, 0 } /* csi-RS-Config-v1250 */
};
asn_SEQUENCE_specifics_t asn_SPC_PhysicalConfigDedicated_specs_1 = {
	sizeof(struct PhysicalConfigDedicated),
	offsetof(struct PhysicalConfigDedicated, _asn_ctx),
	asn_MAP_PhysicalConfigDedicated_tag2el_1,
	42,	/* Count of tags in the map */
	asn_MAP_PhysicalConfigDedicated_oms_1,	/* Optional members */
	10, 32,	/* Root/Additions */
	10,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PhysicalConfigDedicated = {
	"PhysicalConfigDedicated",
	"PhysicalConfigDedicated",
	&asn_OP_SEQUENCE,
	asn_DEF_PhysicalConfigDedicated_tags_1,
	sizeof(asn_DEF_PhysicalConfigDedicated_tags_1)
		/sizeof(asn_DEF_PhysicalConfigDedicated_tags_1[0]), /* 1 */
	asn_DEF_PhysicalConfigDedicated_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysicalConfigDedicated_tags_1)
		/sizeof(asn_DEF_PhysicalConfigDedicated_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PhysicalConfigDedicated_1,
	42,	/* Elements count */
	&asn_SPC_PhysicalConfigDedicated_specs_1	/* Additional specs */
};
