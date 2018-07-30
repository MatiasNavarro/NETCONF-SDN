/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
#ifndef TPCLIENT4SEVERITYTABLE_H
#define TPCLIENT4SEVERITYTABLE_H

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
config_require(FTNC-MIB/tpClient4SeverityTable/tpClient4SeverityTable_interface)
config_require(FTNC-MIB/tpClient4SeverityTable/tpClient4SeverityTable_data_access)
config_require(FTNC-MIB/tpClient4SeverityTable/tpClient4SeverityTable_data_get)
config_require(FTNC-MIB/tpClient4SeverityTable/tpClient4SeverityTable_data_set)
    /* *INDENT-ON*  */

/* OID and column number definitions for tpClient4SeverityTable */
#include "FTNC-MIB/tpClient4SeverityTable/tpClient4SeverityTable_oids.h"

/* enum definions */
#include "FTNC-MIB/tpClient4SeverityTable/tpClient4SeverityTable_enums.h"

/* *********************************************************************
 * function declarations
 */
void init_tpClient4SeverityTable(void);
void shutdown_tpClient4SeverityTable(void);

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table tpClient4SeverityTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::tpClient4SeverityTable is subid 5 of tpAlarms.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.1.1.3.6.5, length: 12
*/
/* *********************************************************************
 * When you register your mib, you get to provide a generic
 * pointer that will be passed back to you for most of the
 * functions calls.
 *
 * TODO:100:r: Review all context structures
 */
    /*
     * TODO:101:o: |-> Review tpClient4SeverityTable registration context.
     */
typedef netsnmp_data_list tpClient4SeverityTable_registration;

/**********************************************************************/
/*
 * TODO:110:r: |-> Review tpClient4SeverityTable data context structure.
 * This structure is used to represent the data for tpClient4SeverityTable.
 */
/*
 * This structure contains storage for all the columns defined in the
 * tpClient4SeverityTable.
 */
typedef struct tpClient4SeverityTable_data_s {
    
        /*
         * tpClient4SeverityFramerFsmms(2)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   tpClient4SeverityFramerFsmms;
    
        /*
         * tpClient4SeverityFramerFssusts(3)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   tpClient4SeverityFramerFssusts;
    
        /*
         * tpClient4SeverityFramerSoof(4)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   tpClient4SeverityFramerSoof;
    
        /*
         * tpClient4SeverityFramerSlof(5)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   tpClient4SeverityFramerSlof;
    
        /*
         * tpClient4SeverityFramerSif(6)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   tpClient4SeverityFramerSif;
    
        /*
         * tpClient4SeverityFramerFst(7)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   tpClient4SeverityFramerFst;
    
        /*
         * tpClient4SeverityLosstatLosf(8)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   tpClient4SeverityLosstatLosf;
    
        /*
         * tpClient4SeverityPathmonAccstat(9)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   tpClient4SeverityPathmonAccstat;
    
        /*
         * tpClient4SeverityPathmonDais(10)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   tpClient4SeverityPathmonDais;
    
        /*
         * tpClient4SeverityPathmonDbdi(11)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   tpClient4SeverityPathmonDbdi;
    
        /*
         * tpClient4SeverityPathmonDlck(12)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   tpClient4SeverityPathmonDlck;
    
        /*
         * tpClient4SeverityPathmonMsiunst(13)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   tpClient4SeverityPathmonMsiunst;
    
        /*
         * tpClient4SeveritySecmonBipsfs(14)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   tpClient4SeveritySecmonBipsfs;
    
        /*
         * tpClient4SeveritySecmonDbdi(15)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   tpClient4SeveritySecmonDbdi;
    
        /*
         * tpClient4SeveritySecmonDiae(16)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   tpClient4SeveritySecmonDiae;
    
        /*
         * tpClient4SeveritySecmonFlom(17)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   tpClient4SeveritySecmonFlom;
    
        /*
         * tpClient4SeveritySecmonLom(18)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   tpClient4SeveritySecmonLom;
    
} tpClient4SeverityTable_data;


/* *********************************************************************
 * TODO:115:o: |-> Review tpClient4SeverityTable undo context.
 * We're just going to use the same data structure for our
 * undo_context. If you want to do something more efficent,
 * define your typedef here.
 */
typedef tpClient4SeverityTable_data tpClient4SeverityTable_undo_data;

/*
 * TODO:120:r: |-> Review tpClient4SeverityTable mib index.
 * This structure is used to represent the index for tpClient4SeverityTable.
 */
typedef struct tpClient4SeverityTable_mib_index_s {

        /*
         * tpClient4SeverityIndex(1)/INTEGER32/ASN_INTEGER/long(long)//l/a/w/e/R/d/h
         */
   long   tpClient4SeverityIndex;


} tpClient4SeverityTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review tpClient4SeverityTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
*/
#define MAX_tpClient4SeverityTable_IDX_LEN     1


/* *********************************************************************
 * TODO:130:o: |-> Review tpClient4SeverityTable Row request (rowreq) context.
 * When your functions are called, you will be passed a
 * tpClient4SeverityTable_rowreq_ctx pointer.
 */
typedef struct tpClient4SeverityTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
    netsnmp_index        oid_idx;
    oid                  oid_tmp[MAX_tpClient4SeverityTable_IDX_LEN];
    
    tpClient4SeverityTable_mib_index        tbl_idx;
    
    tpClient4SeverityTable_data              data;
    tpClient4SeverityTable_undo_data       * undo;
    unsigned int                column_set_flags; /* flags for set columns */


    /*
     * flags per row. Currently, the first (lower) 8 bits are reserved
     * for the user. See mfd.h for other flags.
     */
    u_int                       rowreq_flags;

    /*
     * TODO:131:o: |   |-> Add useful data to tpClient4SeverityTable rowreq context.
     */
    
    /*
     * storage for future expansion
     */
    netsnmp_data_list             *tpClient4SeverityTable_data_list;

} tpClient4SeverityTable_rowreq_ctx;

typedef struct tpClient4SeverityTable_ref_rowreq_ctx_s {
    tpClient4SeverityTable_rowreq_ctx *rowreq_ctx;
} tpClient4SeverityTable_ref_rowreq_ctx;

/* *********************************************************************
 * function prototypes
 */
    int tpClient4SeverityTable_pre_request(tpClient4SeverityTable_registration * user_context);
    int tpClient4SeverityTable_post_request(tpClient4SeverityTable_registration * user_context,
        int rc);

    int tpClient4SeverityTable_rowreq_ctx_init(tpClient4SeverityTable_rowreq_ctx *rowreq_ctx,
                                   void *user_init_ctx);
    void tpClient4SeverityTable_rowreq_ctx_cleanup(tpClient4SeverityTable_rowreq_ctx *rowreq_ctx);

    int tpClient4SeverityTable_commit(tpClient4SeverityTable_rowreq_ctx * rowreq_ctx);

    tpClient4SeverityTable_rowreq_ctx *
                  tpClient4SeverityTable_row_find_by_mib_index(tpClient4SeverityTable_mib_index *mib_idx);

extern const oid tpClient4SeverityTable_oid[];
extern const int tpClient4SeverityTable_oid_size;


#include "FTNC-MIB/tpClient4SeverityTable/tpClient4SeverityTable_interface.h"
#include "FTNC-MIB/tpClient4SeverityTable/tpClient4SeverityTable_data_access.h"
#include "FTNC-MIB/tpClient4SeverityTable/tpClient4SeverityTable_data_get.h"
#include "FTNC-MIB/tpClient4SeverityTable/tpClient4SeverityTable_data_set.h"

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

#endif /* TPCLIENT4SEVERITYTABLE_H */
/** @} */