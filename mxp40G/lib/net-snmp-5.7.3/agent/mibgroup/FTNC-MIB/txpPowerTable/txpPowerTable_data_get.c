/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-features.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "../../txpPowerTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement txpPowerTable get routines.
 * TODO:240:M: Implement txpPowerTable mapping routines (if any).
 *
 * These routine are used to get the value for individual objects. The
 * row context is passed, along with a pointer to the memory where the
 * value should be copied.
 *
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table txpPowerTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::txpPowerTable is subid 2 of txpMiscellaneous.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.2.9.2.2, length: 11
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement txpPowerTable data context functions.
 */


/**
 * set mib index(es)
 *
 * @param tbl_idx mib index structure
 * @param txpPowerIndex_ptr
 * @param txpPowerIndex_ptr_len
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 *
 * @remark
 *  This convenience function is useful for setting all the MIB index
 *  components with a single function call. It is assume that the C values
 *  have already been mapped from their native/rawformat to the MIB format.
 */
int
txpPowerTable_indexes_set_tbl_idx(txpPowerTable_mib_index *tbl_idx, char *txpPowerIndex_val_ptr,  size_t txpPowerIndex_val_ptr_len)
{
    DEBUGMSGTL(("verbose:txpPowerTable:txpPowerTable_indexes_set_tbl_idx","called\n"));

    /* txpPowerIndex(1)/OCTETSTR/ASN_OCTET_STR/char(char)//L/a/w/e/R/d/h */
    tbl_idx->txpPowerIndex_len = sizeof(tbl_idx->txpPowerIndex)/sizeof(tbl_idx->txpPowerIndex[0]); /* max length */
    /*
     * make sure there is enough space for txpPowerIndex data
     */
    if ((NULL == tbl_idx->txpPowerIndex) ||
        (tbl_idx->txpPowerIndex_len <
         (txpPowerIndex_val_ptr_len))) {
        snmp_log(LOG_ERR,"not enough space for value (txpPowerIndex_val_ptr)\n");
        return MFD_ERROR;
    }
    tbl_idx->txpPowerIndex_len = txpPowerIndex_val_ptr_len;
    memcpy( tbl_idx->txpPowerIndex, txpPowerIndex_val_ptr, txpPowerIndex_val_ptr_len* sizeof(txpPowerIndex_val_ptr[0]) );
    

    return MFD_SUCCESS;
} /* txpPowerTable_indexes_set_tbl_idx */

/**
 * @internal
 * set row context indexes
 *
 * @param reqreq_ctx the row context that needs updated indexes
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 *
 * @remark
 *  This function sets the mib indexs, then updates the oid indexs
 *  from the mib index.
 */
int
txpPowerTable_indexes_set(txpPowerTable_rowreq_ctx *rowreq_ctx, char *txpPowerIndex_val_ptr,  size_t txpPowerIndex_val_ptr_len)
{
    DEBUGMSGTL(("verbose:txpPowerTable:txpPowerTable_indexes_set","called\n"));

    if(MFD_SUCCESS != txpPowerTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , txpPowerIndex_val_ptr, txpPowerIndex_val_ptr_len
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != txpPowerTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* txpPowerTable_indexes_set */


/*---------------------------------------------------------------------
 * FTNC-MIB::txpPowerEntry.txpTxPower
 * txpTxPower is subid 2 of txpPowerEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.43484.2.9.2.2.1.2
 * Description:
Line Tx power.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is OCTETSTR (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.
 */
/**
 * Extract the current value of the txpTxPower data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param txpTxPower_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param txpTxPower_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by txpTxPower.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*txpTxPower_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update txpTxPower_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
txpTxPower_get( txpPowerTable_rowreq_ctx *rowreq_ctx, char **txpTxPower_val_ptr_ptr, size_t *txpTxPower_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != txpTxPower_val_ptr_ptr) && (NULL != *txpTxPower_val_ptr_ptr));
   netsnmp_assert( NULL != txpTxPower_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:txpPowerTable:txpTxPower_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the txpTxPower data.
 * copy (* txpTxPower_val_ptr_ptr ) data and (* txpTxPower_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for txpTxPower data
     */
    if ((NULL == (* txpTxPower_val_ptr_ptr )) ||
        ((* txpTxPower_val_ptr_len_ptr ) <
         (rowreq_ctx->data.txpTxPower_len* sizeof(rowreq_ctx->data.txpTxPower[0])))) {
        /*
         * allocate space for txpTxPower data
         */
        (* txpTxPower_val_ptr_ptr ) = malloc(rowreq_ctx->data.txpTxPower_len* sizeof(rowreq_ctx->data.txpTxPower[0]));
        if(NULL == (* txpTxPower_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory (rowreq_ctx->data.txpTxPower)\n");
            return MFD_ERROR;
        }
    }
    (* txpTxPower_val_ptr_len_ptr ) = rowreq_ctx->data.txpTxPower_len* sizeof(rowreq_ctx->data.txpTxPower[0]);
    memcpy( (* txpTxPower_val_ptr_ptr ), rowreq_ctx->data.txpTxPower, rowreq_ctx->data.txpTxPower_len* sizeof(rowreq_ctx->data.txpTxPower[0]) );

    return MFD_SUCCESS;
} /* txpTxPower_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::txpPowerEntry.txpRxPower
 * txpRxPower is subid 3 of txpPowerEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.43484.2.9.2.2.1.3
 * Description:
Line Rx power.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is OCTETSTR (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.
 */
/**
 * Extract the current value of the txpRxPower data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param txpRxPower_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param txpRxPower_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by txpRxPower.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*txpRxPower_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update txpRxPower_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
txpRxPower_get( txpPowerTable_rowreq_ctx *rowreq_ctx, char **txpRxPower_val_ptr_ptr, size_t *txpRxPower_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != txpRxPower_val_ptr_ptr) && (NULL != *txpRxPower_val_ptr_ptr));
   netsnmp_assert( NULL != txpRxPower_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:txpPowerTable:txpRxPower_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the txpRxPower data.
 * copy (* txpRxPower_val_ptr_ptr ) data and (* txpRxPower_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for txpRxPower data
     */
    if ((NULL == (* txpRxPower_val_ptr_ptr )) ||
        ((* txpRxPower_val_ptr_len_ptr ) <
         (rowreq_ctx->data.txpRxPower_len* sizeof(rowreq_ctx->data.txpRxPower[0])))) {
        /*
         * allocate space for txpRxPower data
         */
        (* txpRxPower_val_ptr_ptr ) = malloc(rowreq_ctx->data.txpRxPower_len* sizeof(rowreq_ctx->data.txpRxPower[0]));
        if(NULL == (* txpRxPower_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory (rowreq_ctx->data.txpRxPower)\n");
            return MFD_ERROR;
        }
    }
    (* txpRxPower_val_ptr_len_ptr ) = rowreq_ctx->data.txpRxPower_len* sizeof(rowreq_ctx->data.txpRxPower[0]);
    memcpy( (* txpRxPower_val_ptr_ptr ), rowreq_ctx->data.txpRxPower, rowreq_ctx->data.txpRxPower_len* sizeof(rowreq_ctx->data.txpRxPower[0]) );

    return MFD_SUCCESS;
} /* txpRxPower_get */



/** @} */
