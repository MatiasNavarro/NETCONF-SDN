/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
#ifndef POWERTABLE_H
#define POWERTABLE_H

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
config_require(FTNC-MIB/powerTable/powerTable_interface)
config_require(FTNC-MIB/powerTable/powerTable_data_access)
config_require(FTNC-MIB/powerTable/powerTable_data_get)
config_require(FTNC-MIB/powerTable/powerTable_data_set)
    /* *INDENT-ON*  */

/* OID and column number definitions for powerTable */
#include "FTNC-MIB/powerTable/powerTable_oids.h"

/* enum definions */
#include "FTNC-MIB/powerTable/powerTable_enums.h"

/* *********************************************************************
 * function declarations
 */
void init_powerTable(void);
void shutdown_powerTable(void);

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table powerTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::powerTable is subid 1 of mxpConfigMIBObjects.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.1.1.1.2.1, length: 12
*/
/* *********************************************************************
 * When you register your mib, you get to provide a generic
 * pointer that will be passed back to you for most of the
 * functions calls.
 *
 * TODO:100:r: Review all context structures
 */
    /*
     * TODO:101:o: |-> Review powerTable registration context.
     */
typedef netsnmp_data_list powerTable_registration;

/**********************************************************************/
/*
 * TODO:110:r: |-> Review powerTable data context structure.
 * This structure is used to represent the data for powerTable.
 */
/*
 * This structure contains storage for all the columns defined in the
 * powerTable.
 */
typedef struct powerTable_data_s {
    
        /*
         * powera(2)/OCTETSTR/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h
         */
   char   powera[65535];
size_t      powera_len; /* # of char elements, not bytes */
    
        /*
         * powerb(3)/OCTETSTR/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h
         */
   char   powerb[65535];
size_t      powerb_len; /* # of char elements, not bytes */
    
} powerTable_data;


/* *********************************************************************
 * TODO:115:o: |-> Review powerTable undo context.
 * We're just going to use the same data structure for our
 * undo_context. If you want to do something more efficent,
 * define your typedef here.
 */
typedef powerTable_data powerTable_undo_data;

/*
 * TODO:120:r: |-> Review powerTable mib index.
 * This structure is used to represent the index for powerTable.
 */
typedef struct powerTable_mib_index_s {

        /*
         * powerIndex(1)/OCTETSTR/ASN_OCTET_STR/char(char)//L/a/w/e/R/d/h
         */
   char   powerIndex[32];
   size_t      powerIndex_len;


} powerTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review powerTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     *
     * BE VERY CAREFUL TO TAKE INTO ACCOUNT THE MAXIMUM
     * POSSIBLE LENGHT FOR EVERY VARIABLE LENGTH INDEX!
     * Guessing 128 - col/entry(2)  - oid len(12)
*/
#define MAX_powerTable_IDX_LEN     33


/* *********************************************************************
 * TODO:130:o: |-> Review powerTable Row request (rowreq) context.
 * When your functions are called, you will be passed a
 * powerTable_rowreq_ctx pointer.
 */
typedef struct powerTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
    netsnmp_index        oid_idx;
    oid                  oid_tmp[MAX_powerTable_IDX_LEN];
    
    powerTable_mib_index        tbl_idx;
    
    powerTable_data              data;
    powerTable_undo_data       * undo;
    unsigned int                column_set_flags; /* flags for set columns */


    /*
     * flags per row. Currently, the first (lower) 8 bits are reserved
     * for the user. See mfd.h for other flags.
     */
    u_int                       rowreq_flags;

    /*
     * TODO:131:o: |   |-> Add useful data to powerTable rowreq context.
     */
    
    /*
     * storage for future expansion
     */
    netsnmp_data_list             *powerTable_data_list;

} powerTable_rowreq_ctx;

typedef struct powerTable_ref_rowreq_ctx_s {
    powerTable_rowreq_ctx *rowreq_ctx;
} powerTable_ref_rowreq_ctx;



/* *********************************************************************
 * function prototypes
 */
    int powerTable_pre_request(powerTable_registration * user_context);
    int powerTable_post_request(powerTable_registration * user_context,
        int rc);

    int powerTable_rowreq_ctx_init(powerTable_rowreq_ctx *rowreq_ctx,
                                   void *user_init_ctx);
    void powerTable_rowreq_ctx_cleanup(powerTable_rowreq_ctx *rowreq_ctx);

    int powerTable_commit(powerTable_rowreq_ctx * rowreq_ctx);

    powerTable_rowreq_ctx *
                  powerTable_row_find_by_mib_index(powerTable_mib_index *mib_idx);

extern const oid powerTable_oid[];
extern const int powerTable_oid_size;

#include "FTNC-MIB/powerTable/powerTable_interface.h"
#include "FTNC-MIB/powerTable/powerTable_data_access.h"
#include "FTNC-MIB/powerTable/powerTable_data_get.h"
#include "FTNC-MIB/powerTable/powerTable_data_set.h"

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

#endif /* POWERTABLE_H */
/** @} */