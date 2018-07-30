/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
#ifndef TXPBANDTABLE_H
#define TXPBANDTABLE_H

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
config_require(FTNC-MIB/txpBandTable/txpBandTable_interface)
config_require(FTNC-MIB/txpBandTable/txpBandTable_data_access)
config_require(FTNC-MIB/txpBandTable/txpBandTable_data_get)
config_require(FTNC-MIB/txpBandTable/txpBandTable_data_set)
    /* *INDENT-ON*  */

/* OID and column number definitions for txpBandTable */
#include "FTNC-MIB/txpBandTable/txpBandTable_oids.h"

/* enum definions */
#include "FTNC-MIB/txpBandTable/txpBandTable_enums.h"

/* *********************************************************************
 * function declarations
 */
void init_txpBandTable(void);
void shutdown_txpBandTable(void);

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table txpBandTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::txpBandTable is subid 4 of txpMiscellaneous.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.2.9.2.4, length: 11
*/
/* *********************************************************************
 * When you register your mib, you get to provide a generic
 * pointer that will be passed back to you for most of the
 * functions calls.
 *
 * TODO:100:r: Review all context structures
 */
    /*
     * TODO:101:o: |-> Review txpBandTable registration context.
     */
typedef netsnmp_data_list txpBandTable_registration;

/**********************************************************************/
/*
 * TODO:110:r: |-> Review txpBandTable data context structure.
 * This structure is used to represent the data for txpBandTable.
 */
/*
 * This structure contains storage for all the columns defined in the
 * txpBandTable.
 */
typedef struct txpBandTable_data_s {
    
        /*
         * txpTxLaserITUBand(2)/OCTETSTR/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h
         */
   char   txpTxLaserITUBand[65535];
size_t      txpTxLaserITUBand_len; /* # of char elements, not bytes */
    
        /*
         * txpRxLaserITUBand(3)/OCTETSTR/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h
         */
   char   txpRxLaserITUBand[65535];
size_t      txpRxLaserITUBand_len; /* # of char elements, not bytes */
    
} txpBandTable_data;


/*
 * TODO:120:r: |-> Review txpBandTable mib index.
 * This structure is used to represent the index for txpBandTable.
 */
typedef struct txpBandTable_mib_index_s {

        /*
         * txpBandIndex(1)/OCTETSTR/ASN_OCTET_STR/char(char)//L/a/w/e/R/d/h
         */
   char   txpBandIndex[32];
   size_t      txpBandIndex_len;


} txpBandTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review txpBandTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     *
     * BE VERY CAREFUL TO TAKE INTO ACCOUNT THE MAXIMUM
     * POSSIBLE LENGHT FOR EVERY VARIABLE LENGTH INDEX!
     * Guessing 128 - col/entry(2)  - oid len(11)
*/
#define MAX_txpBandTable_IDX_LEN     33


/* *********************************************************************
 * TODO:130:o: |-> Review txpBandTable Row request (rowreq) context.
 * When your functions are called, you will be passed a
 * txpBandTable_rowreq_ctx pointer.
 */
typedef struct txpBandTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
    netsnmp_index        oid_idx;
    oid                  oid_tmp[MAX_txpBandTable_IDX_LEN];
    
    txpBandTable_mib_index        tbl_idx;
    
    txpBandTable_data              data;

    /*
     * flags per row. Currently, the first (lower) 8 bits are reserved
     * for the user. See mfd.h for other flags.
     */
    u_int                       rowreq_flags;

    /*
     * TODO:131:o: |   |-> Add useful data to txpBandTable rowreq context.
     */
    
    /*
     * storage for future expansion
     */
    netsnmp_data_list             *txpBandTable_data_list;

} txpBandTable_rowreq_ctx;

typedef struct txpBandTable_ref_rowreq_ctx_s {
    txpBandTable_rowreq_ctx *rowreq_ctx;
} txpBandTable_ref_rowreq_ctx;

/* *********************************************************************
 * function prototypes
 */
    int txpBandTable_pre_request(txpBandTable_registration * user_context);
    int txpBandTable_post_request(txpBandTable_registration * user_context,
        int rc);

    int txpBandTable_rowreq_ctx_init(txpBandTable_rowreq_ctx *rowreq_ctx,
                                   void *user_init_ctx);
    void txpBandTable_rowreq_ctx_cleanup(txpBandTable_rowreq_ctx *rowreq_ctx);


    txpBandTable_rowreq_ctx *
                  txpBandTable_row_find_by_mib_index(txpBandTable_mib_index *mib_idx);

extern const oid txpBandTable_oid[];
extern const int txpBandTable_oid_size;


#include "FTNC-MIB/txpBandTable/txpBandTable_interface.h"
#include "FTNC-MIB/txpBandTable/txpBandTable_data_access.h"
#include "FTNC-MIB/txpBandTable/txpBandTable_data_get.h"
#include "FTNC-MIB/txpBandTable/txpBandTable_data_set.h"

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

#endif /* TXPBANDTABLE_H */
/** @} */
