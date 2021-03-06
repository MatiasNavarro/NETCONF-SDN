#ifndef DEFINITIONS_H_
#define DEFINITIONS_H_

#include "../../lib/edfa/hl_edfa.h"
#include "../../lib/txp/hl_txp.h"
#include "../../lib/xfp/hl_xfp.h"

// Struct with general parameters
typedef struct general_struct
{
	unsigned int fan_value[5];
	float cs6041_temperature[4];
	float fpga_temperature;
	int board_temperature;
	int board_humidity;
	unsigned int power_value[2];
} General;

// Structs for Traffic Processor
typedef struct tp_los_struct
{
	unsigned short losf:1;// Description: LOS Status (LOS Found) //lineLosstatLosf // client1LosstatLosf
} Tp_los_reg;

union tp_los_union
{
	unsigned short data;
	Tp_los_reg fields;
};

typedef struct tp_line_framer_struct
{
	unsigned short pfnd:1;
	unsigned short plost:1;
	unsigned short fst:2;

	unsigned short spha:1;
	unsigned short slof:1;// Description: OxU Framer Status (Loss Of Frame state) // lineFramerSlof
	unsigned short soof:1;// Description: OxU Framer Status (Out Of Frame (OOF) State)// lineFramerSoof
	unsigned short sif:1;// Description: OxU Framer Status (Aligner in Synced (In Frame) state.) // lineFramerSif

	unsigned short fsmms:1;// Description: OxU Framer Status () // lineFramerFsmms
	unsigned short fsmmtrb1s:1;// Description: OxU Framer Status () // lineFramerFsmmtrb1s
	unsigned short fsmmtrb2s:1;// Description: OxU Framer Status () // lineFramerFsmmtrb2s
	unsigned short fsmmtrb3s:1;// Description: OxU Framer Status () // lineFramerFsmmtrb3s

	unsigned short fawm:1;
	unsigned short idle:3;
} Tp_line_framer_reg;

union tp_line_framer_union
{
	unsigned short data;
	Tp_line_framer_reg fields;
};

typedef struct tp_client_framer_struct
{
	unsigned short pn11s:1;
	unsigned short idle1:1;
	unsigned short fst:2;// Description: OxU Framer Status (Framer State) // client1FramerFst

	unsigned short spha:1;
	unsigned short slof:1;// Description: OxU Framer Status (Loss Of Frame state) // client1FramerSlof
	unsigned short soof:1;// Description: OxU Framer Status (Out Of Frame (OOF) State) // client1FramerSoof
	unsigned short sif:1;// Description: OxU Framer Status (Aligner in Synced (In Frame) state.) // client1FramerSif

	unsigned short fsusts:1;// Description: OTU Framer Status (This bit presents the unstable status of the received FS word.) // client1FramerFssusts
	unsigned short idle9:1;
	unsigned short fsmms:1;// Description: OTU Framer Status () // client1FramerFsmms
	unsigned short fawm:1;

	unsigned short idle:4;
} Tp_client_framer_reg;

union tp_client_framer_union
{
	unsigned short data;
	Tp_client_framer_reg fields;
};

typedef struct tp_section_mon_struct
{
	unsigned short lom:1;// Description: OTUk Section Monitoring Status (Loss of MFAS (Out-of-Multiframe alarm)) // lineSecmonLom // client1SecmonLom
	unsigned short bipsds:1;
	unsigned short beisds:1;
	unsigned short dbiae:1;

	unsigned short dbdi:1;//  Description: OTUk Section Monitoring Status (State of dBDI defect. (Backward Defect Indication (BDI))) // lineSecmonDbdi // client1SecmonDbdi
	unsigned short diae:1;// Description: OTUk Section Monitoring Status (State of dIAE defect. (Incoming Alignment Error (IAE))) // lineSecmonDiae // client1SecmonDiae
	unsigned short apsunst:1;
	unsigned short idle7:1;

	unsigned short bipsfs:1;// Description: OTUk Section Monitoring Status (State of SF defect.) // lineSecmonBipsfs // client1SecmonBipsfs
	unsigned short flom:1;// Description: OTUk Section Monitoring Status (Loss-of-Multiframe defect.) // lineSecmonFlom //client1SecmonFlom
	unsigned short idle:6;
} Tp_section_mon_reg;

union tp_section_mon_union
{
	unsigned short data;
	Tp_section_mon_reg fields;
};

typedef struct tp_path_mon_struct
{
	unsigned short bipsds:1;
	unsigned short beisds:1;
	unsigned short dbdi:1;// Description: ODUk Path Monitoring Status (State of dBDI defect. (Backward Defect Indication (BDI))) // linePathmonDbdi //client1PathmonDbdi
	unsigned short dlck:1;// Description: ODUk Path Monitoring Status (State of dLCK defect. (Detected Lock)) // linePathmonDlck // client1PathmonDlck
	unsigned short doci:1;
	unsigned short dais:1;// Description: ODUk Path Monitoring Status (State of dODUkAIS defect. (Alarm Indication Signal defect)) // linePathmonDais //client1PathmonDais
	unsigned short dplm:1;
	unsigned short dmsim:1;
	unsigned short dcbrais:1;
	unsigned short apsunst:1;
	unsigned short statunst:1;
	unsigned short ptiunst:1;
	unsigned short msiunst:1;// Description: ODUk Path Monitoring Status ( MSI string unstable.(Multiplex Structure Identifier field (MSI))) // linePathmonMsiunst // client1PathmonMsiunst
	unsigned short accstat:3;// Description: ODUk Path Monitoring Status (Accepted value of the STAT field.) // linePathmonAccstat // client1PathmonAccstat
} Tp_path_mon_reg;

union tp_path_mon_union
{
	unsigned short data;
	Tp_path_mon_reg fields;
};

// Struct for Traffic processor line severity
typedef struct tp_severity_line
{
	unsigned int FramerFsmmtrb3s;
	unsigned int FramerFsmmtrb2s;
	unsigned int FramerFsmmtrb1s;
	unsigned int FramerFsmms;
	unsigned int FramerSoof;
	unsigned int FramerSlof;
	unsigned int FramerSif;
	unsigned int FramerFst;
	unsigned int LosstatLosf;
	unsigned int SecmonFlom;
	unsigned int SecmonBipsfs;
	unsigned int SecmonDiae;
	unsigned int SecmonDbdi;
	unsigned int SecmonLom;
	unsigned int PathmonAccstat;
	unsigned int PathmonMsiunst;
	unsigned int PathmonDais;
	unsigned int PathmonDlck;
	unsigned int PathmonDbdi;
} TP_severity_line;

// Struct for Traffic processor client severity
typedef struct tp_severity_client
{
	unsigned int FramerFsmms;
	unsigned int FramerFssusts;
	unsigned int FramerSoof;
	unsigned int FramerSlof;
	unsigned int FramerSif;
	unsigned int FramerFst;
	unsigned int LosstatLosf;
	unsigned int SecmonFlom;
	unsigned int SecmonBipsfs;
	unsigned int SecmonDiae;
	unsigned int SecmonDbdi;
	unsigned int SecmonLom;
	unsigned int PathmonAccstat;
	unsigned int PathmonMsiunst;
	unsigned int PathmonDais;
	unsigned int PathmonDlck;
	unsigned int PathmonDbdi;
} TP_severity_client;

// Struct for Traffic processor severity
typedef struct tp_severity_struct
{
	TP_severity_line severity_line;
	TP_severity_client severity_client[4];
} TP_severity;

// Struct with defects at Traffic Processor (CS6041).
typedef struct tp_defects_struct
{
	union tp_los_union tp_line_los_status;
	union tp_los_union tp_client_los_status[4];
	union tp_line_framer_union tp_line_framer_status;
	union tp_client_framer_union tp_client_framer_status[4];
	union tp_section_mon_union tp_line_section_mon;
	union tp_section_mon_union tp_client_section_mon[4];
	union tp_path_mon_union tp_line_path_mon;
	union tp_path_mon_union tp_client_path_mon[4];
	TP_severity severity;
} TP_defects;

// Struct with parameters for monitor configuration.
typedef struct monitor_struct
{
	int sev_dirty_flag;
	Xfp xfp_struct;
	Txp txp_struct;
	Edfa edfa_struct;
	General general_struct;
	TP_defects tp_defects_struct;
} Monitor;


size_t SHM_SIZE = sizeof(Monitor);

#define SHMOBJ_PATH "/oshmsegmtobj_1"

static char general_status_no_yes[2][100] = {"No", "Yes"};
static char general_status_yes_no[2][100] = {"Yes", "No"};
static char general_status_off_on[2][100] = {"Off", "On"};
static char output_char[100];
static char alarm_no_Alarm[2][100] = {"--", "Alarm"};
static char alarm_Alarm_no[2][100] = {"Alarm", "--"};



#endif /* DEFINITIONS_H_ */
