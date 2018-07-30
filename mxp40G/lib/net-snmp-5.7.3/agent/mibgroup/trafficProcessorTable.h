/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
#ifndef TRAFFICPROCESSORTABLE_H
#define TRAFFICPROCESSORTABLE_H

#ifdef __cplusplus
extern "C" {
#endif


/** @addtogroup misc misc: Miscellaneous routines
 *
 * @{
 */
#include <net-snmp/library/asn1.h>

/* other required module components */
    /* *INDENT-OFF*  */
config_add_mib(FTNC-MIB)
config_require(FTNC-MIB/trafficProcessorTable/trafficProcessorTable_interface)
config_require(FTNC-MIB/trafficProcessorTable/trafficProcessorTable_data_access)
config_require(FTNC-MIB/trafficProcessorTable/trafficProcessorTable_data_get)
config_require(FTNC-MIB/trafficProcessorTable/trafficProcessorTable_data_set)
    /* *INDENT-ON*  */

/* OID and column number definitions for trafficProcessorTable */
#include "FTNC-MIB/trafficProcessorTable/trafficProcessorTable_oids.h"

/* enum definions */
#include "FTNC-MIB/trafficProcessorTable/trafficProcessorTable_enums.h"

/* *********************************************************************
 * function declarations
 */
void init_trafficProcessorTable(void);
void shutdown_trafficProcessorTable(void);

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table trafficProcessorTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::trafficProcessorTable is subid 1 of trafficProcessor.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.1.1.1.2.10.1, length: 13
*/
/* *********************************************************************
 * When you register your mib, you get to provide a generic
 * pointer that will be passed back to you for most of the
 * functions calls.
 *
 * TODO:100:r: Review all context structures
 */
    /*
     * TODO:101:o: |-> Review trafficProcessorTable registration context.
     */
typedef netsnmp_data_list trafficProcessorTable_registration;

/**********************************************************************/
/*
 * TODO:110:r: |-> Review trafficProcessorTable data context structure.
 * This structure is used to represent the data for trafficProcessorTable.
 */
/*
 * This structure contains storage for all the columns defined in the
 * trafficProcessorTable.
 */
typedef struct trafficProcessorTable_data_s {
    
        /*
         * lineFramerFsmmtrb3s(2)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   lineFramerFsmmtrb3s;
    
        /*
         * lineFramerFsmmtrb2s(3)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   lineFramerFsmmtrb2s;
    
        /*
         * lineFramerFsmmtrb1s(4)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   lineFramerFsmmtrb1s;
    
        /*
         * lineFramerFsmms(5)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   lineFramerFsmms;
    
        /*
         * lineFramerSif(6)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   lineFramerSif;
    
        /*
         * lineFramerSoof(7)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   lineFramerSoof;
    
        /*
         * lineFramerSlof(8)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   lineFramerSlof;
    
        /*
         * lineFramerFst(9)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   lineFramerFst;
    
        /*
         * lineLosstatLosf(10)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   lineLosstatLosf;
    
        /*
         * lineSecmonFlom(11)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   lineSecmonFlom;
    
        /*
         * lineSecmonBipsfs(12)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   lineSecmonBipsfs;
    
        /*
         * lineSecmonDiae(13)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   lineSecmonDiae;
    
        /*
         * lineSecmonDbdi(14)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   lineSecmonDbdi;
    
        /*
         * lineSecmonLom(15)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   lineSecmonLom;
    
        /*
         * linePathmonAccstat(16)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   linePathmonAccstat;
    
        /*
         * linePathmonMsiunst(17)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   linePathmonMsiunst;
    
        /*
         * linePathmonDais(18)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   linePathmonDais;
    
        /*
         * linePathmonDlck(19)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   linePathmonDlck;
    
        /*
         * linePathmonDbdi(20)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   linePathmonDbdi;
    
        /*
         * client1FramerFsmms(21)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client1FramerFsmms;
    
        /*
         * client1FramerFsusts(22)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client1FramerFsusts;
    
        /*
         * client1FramerSif(23)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client1FramerSif;
    
        /*
         * client1FramerSoof(24)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client1FramerSoof;
    
        /*
         * client1FramerSlof(25)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client1FramerSlof;
    
        /*
         * client1FramerFst(26)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client1FramerFst;
    
        /*
         * client1LosstatLosf(27)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client1LosstatLosf;
    
        /*
         * client1SecmonFlom(28)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client1SecmonFlom;
    
        /*
         * client1SecmonBipsfs(29)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client1SecmonBipsfs;
    
        /*
         * client1SecmonDiae(30)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client1SecmonDiae;
    
        /*
         * client1SecmonDbdi(31)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client1SecmonDbdi;
    
        /*
         * client1SecmonLom(32)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client1SecmonLom;
    
        /*
         * client1PathmonAccstat(33)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client1PathmonAccstat;
    
        /*
         * client1PathmonMsiunst(34)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client1PathmonMsiunst;
    
        /*
         * client1PathmonDais(35)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client1PathmonDais;
    
        /*
         * client1PathmonDlck(36)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client1PathmonDlck;
    
        /*
         * client1PathmonDbdi(37)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client1PathmonDbdi;
    
        /*
         * client2FramerFsmms(38)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client2FramerFsmms;
    
        /*
         * client2FramerFsusts(39)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client2FramerFsusts;
    
        /*
         * client2FramerSif(40)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client2FramerSif;
    
        /*
         * client2FramerSoof(41)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client2FramerSoof;
    
        /*
         * client2FramerSlof(42)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client2FramerSlof;
    
        /*
         * client2FramerFst(43)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client2FramerFst;
    
        /*
         * client2LosstatLosf(44)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client2LosstatLosf;
    
        /*
         * client2SecmonFlom(45)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client2SecmonFlom;
    
        /*
         * client2SecmonBipsfs(46)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client2SecmonBipsfs;
    
        /*
         * client2SecmonDiae(47)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client2SecmonDiae;
    
        /*
         * client2SecmonDbdi(48)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client2SecmonDbdi;
    
        /*
         * client2SecmonLom(49)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client2SecmonLom;
    
        /*
         * client2PathmonAccstat(50)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client2PathmonAccstat;
    
        /*
         * client2PathmonMsiunst(51)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client2PathmonMsiunst;
    
        /*
         * client2PathmonDais(52)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client2PathmonDais;
    
        /*
         * client2PathmonDlck(53)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client2PathmonDlck;
    
        /*
         * client2PathmonDbdi(54)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client2PathmonDbdi;
    
        /*
         * client3FramerFsmms(55)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client3FramerFsmms;
    
        /*
         * client3FramerFsusts(56)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client3FramerFsusts;
    
        /*
         * client3FramerSif(57)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client3FramerSif;
    
        /*
         * client3FramerSoof(58)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client3FramerSoof;
    
        /*
         * client3FramerSlof(59)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client3FramerSlof;
    
        /*
         * client3FramerFst(60)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client3FramerFst;
    
        /*
         * client3LosstatLosf(61)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client3LosstatLosf;
    
        /*
         * client3SecmonFlom(62)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client3SecmonFlom;
    
        /*
         * client3SecmonBipsfs(63)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client3SecmonBipsfs;
    
        /*
         * client3SecmonDiae(64)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client3SecmonDiae;
    
        /*
         * client3SecmonDbdi(65)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client3SecmonDbdi;
    
        /*
         * client3SecmonLom(66)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client3SecmonLom;
    
        /*
         * client3PathmonAccstat(67)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client3PathmonAccstat;
    
        /*
         * client3PathmonMsiunst(68)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client3PathmonMsiunst;
    
        /*
         * client3PathmonDais(69)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client3PathmonDais;
    
        /*
         * client3PathmonDlck(70)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client3PathmonDlck;
    
        /*
         * client3PathmonDbdi(71)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client3PathmonDbdi;
    
        /*
         * client4FramerFsmms(72)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client4FramerFsmms;
    
        /*
         * client4FramerFsusts(73)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client4FramerFsusts;
    
        /*
         * client4FramerSif(74)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client4FramerSif;
    
        /*
         * client4FramerSoof(75)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client4FramerSoof;
    
        /*
         * client4FramerSlof(76)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client4FramerSlof;
    
        /*
         * client4FramerFst(77)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client4FramerFst;
    
        /*
         * client4LosstatLosf(78)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client4LosstatLosf;
    
        /*
         * client4SecmonFlom(79)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client4SecmonFlom;
    
        /*
         * client4SecmonBipsfs(80)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client4SecmonBipsfs;
    
        /*
         * client4SecmonDiae(81)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client4SecmonDiae;
    
        /*
         * client4SecmonDbdi(82)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client4SecmonDbdi;
    
        /*
         * client4SecmonLom(83)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client4SecmonLom;
    
        /*
         * client4PathmonAccstat(84)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client4PathmonAccstat;
    
        /*
         * client4PathmonMsiunst(85)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client4PathmonMsiunst;
    
        /*
         * client4PathmonDais(86)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client4PathmonDais;
    
        /*
         * client4PathmonDlck(87)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client4PathmonDlck;
    
        /*
         * client4PathmonDbdi(88)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   client4PathmonDbdi;
    
} trafficProcessorTable_data;


/*
 * TODO:120:r: |-> Review trafficProcessorTable mib index.
 * This structure is used to represent the index for trafficProcessorTable.
 */
typedef struct trafficProcessorTable_mib_index_s {

        /*
         * trafficProcessorIndex(1)/INTEGER32/ASN_INTEGER/long(long)//l/a/w/e/R/d/h
         */
   long   trafficProcessorIndex;


} trafficProcessorTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review trafficProcessorTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
*/
#define MAX_trafficProcessorTable_IDX_LEN     1


/* *********************************************************************
 * TODO:130:o: |-> Review trafficProcessorTable Row request (rowreq) context.
 * When your functions are called, you will be passed a
 * trafficProcessorTable_rowreq_ctx pointer.
 */
typedef struct trafficProcessorTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
    netsnmp_index        oid_idx;
    oid                  oid_tmp[MAX_trafficProcessorTable_IDX_LEN];
    
    trafficProcessorTable_mib_index        tbl_idx;
    
    trafficProcessorTable_data              data;

    /*
     * flags per row. Currently, the first (lower) 8 bits are reserved
     * for the user. See mfd.h for other flags.
     */
    u_int                       rowreq_flags;

    /*
     * TODO:131:o: |   |-> Add useful data to trafficProcessorTable rowreq context.
     */
    
    /*
     * storage for future expansion
     */
    netsnmp_data_list             *trafficProcessorTable_data_list;

} trafficProcessorTable_rowreq_ctx;

typedef struct trafficProcessorTable_ref_rowreq_ctx_s {
    trafficProcessorTable_rowreq_ctx *rowreq_ctx;
} trafficProcessorTable_ref_rowreq_ctx;

/* *********************************************************************
 * function prototypes
 */
    int trafficProcessorTable_pre_request(trafficProcessorTable_registration * user_context);
    int trafficProcessorTable_post_request(trafficProcessorTable_registration * user_context,
        int rc);

    int trafficProcessorTable_rowreq_ctx_init(trafficProcessorTable_rowreq_ctx *rowreq_ctx,
                                   void *user_init_ctx);
    void trafficProcessorTable_rowreq_ctx_cleanup(trafficProcessorTable_rowreq_ctx *rowreq_ctx);


    trafficProcessorTable_rowreq_ctx *
                  trafficProcessorTable_row_find_by_mib_index(trafficProcessorTable_mib_index *mib_idx);

extern const oid trafficProcessorTable_oid[];
extern const int trafficProcessorTable_oid_size;


#include "FTNC-MIB/trafficProcessorTable/trafficProcessorTable_interface.h"
#include "FTNC-MIB/trafficProcessorTable/trafficProcessorTable_data_access.h"
#include "FTNC-MIB/trafficProcessorTable/trafficProcessorTable_data_get.h"
#include "FTNC-MIB/trafficProcessorTable/trafficProcessorTable_data_set.h"

/*
 * DUMMY markers, ignore
 *
 * TODO:099:x: *************************************************************
 * TODO:199:x: *************************************************************
 * TODO:299:x: *************************************************************
 * TODO:399:x: *************************************************************
 * TODO:499:x: *************************************************************
 */

#ifdef __cplusplus
}
#endif

#endif /* TRAFFICPROCESSORTABLE_H */
/** @} */