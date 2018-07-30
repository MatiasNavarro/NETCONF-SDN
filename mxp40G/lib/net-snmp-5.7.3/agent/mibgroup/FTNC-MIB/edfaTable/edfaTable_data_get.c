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
#include "../../edfaTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement edfaTable get routines.
 * TODO:240:M: Implement edfaTable mapping routines (if any).
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
 *** Table edfaTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::edfaTable is subid 8 of mxpConfigMIBObjects.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.1.1.1.2.8, length: 12
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement edfaTable data context functions.
 */


/**
 * set mib index(es)
 *
 * @param tbl_idx mib index structure
 * @param edfaIndex_ptr
 * @param edfaIndex_ptr_len
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
edfaTable_indexes_set_tbl_idx(edfaTable_mib_index *tbl_idx, char *edfaIndex_val_ptr,  size_t edfaIndex_val_ptr_len)
{
    DEBUGMSGTL(("verbose:edfaTable:edfaTable_indexes_set_tbl_idx","called\n"));

    /* edfaIndex(1)/OCTETSTR/ASN_OCTET_STR/char(char)//L/a/w/e/R/d/h */
    tbl_idx->edfaIndex_len = sizeof(tbl_idx->edfaIndex)/sizeof(tbl_idx->edfaIndex[0]); /* max length */
    /*
     * make sure there is enough space for edfaIndex data
     */
    if ((NULL == tbl_idx->edfaIndex) ||
        (tbl_idx->edfaIndex_len <
         (edfaIndex_val_ptr_len))) {
        snmp_log(LOG_ERR,"not enough space for value (edfaIndex_val_ptr)\n");
        return MFD_ERROR;
    }
    tbl_idx->edfaIndex_len = edfaIndex_val_ptr_len;
    memcpy( tbl_idx->edfaIndex, edfaIndex_val_ptr, edfaIndex_val_ptr_len* sizeof(edfaIndex_val_ptr[0]) );
    

    return MFD_SUCCESS;
} /* edfaTable_indexes_set_tbl_idx */

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
edfaTable_indexes_set(edfaTable_rowreq_ctx *rowreq_ctx, char *edfaIndex_val_ptr,  size_t edfaIndex_val_ptr_len)
{
    DEBUGMSGTL(("verbose:edfaTable:edfaTable_indexes_set","called\n"));

    if(MFD_SUCCESS != edfaTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , edfaIndex_val_ptr, edfaIndex_val_ptr_len
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != edfaTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* edfaTable_indexes_set */


/*---------------------------------------------------------------------
 * FTNC-MIB::edfaEntry.edfaPout
 * edfaPout is subid 2 of edfaEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.43484.1.1.1.2.8.1.2
 * Description:
edfa output power
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
 * Extract the current value of the edfaPout data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param edfaPout_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param edfaPout_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by edfaPout.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*edfaPout_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update edfaPout_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
edfaPout_get( edfaTable_rowreq_ctx *rowreq_ctx, char **edfaPout_val_ptr_ptr, size_t *edfaPout_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != edfaPout_val_ptr_ptr) && (NULL != *edfaPout_val_ptr_ptr));
   netsnmp_assert( NULL != edfaPout_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:edfaTable:edfaPout_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the edfaPout data.
 * copy (* edfaPout_val_ptr_ptr ) data and (* edfaPout_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for edfaPout data
     */
    if ((NULL == (* edfaPout_val_ptr_ptr )) ||
        ((* edfaPout_val_ptr_len_ptr ) <
         (rowreq_ctx->data.edfaPout_len* sizeof(rowreq_ctx->data.edfaPout[0])))) {
        /*
         * allocate space for edfaPout data
         */
        (* edfaPout_val_ptr_ptr ) = malloc(rowreq_ctx->data.edfaPout_len* sizeof(rowreq_ctx->data.edfaPout[0]));
        if(NULL == (* edfaPout_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory (rowreq_ctx->data.edfaPout)\n");
            return MFD_ERROR;
        }
    }
    (* edfaPout_val_ptr_len_ptr ) = rowreq_ctx->data.edfaPout_len* sizeof(rowreq_ctx->data.edfaPout[0]);
    memcpy( (* edfaPout_val_ptr_ptr ), rowreq_ctx->data.edfaPout, rowreq_ctx->data.edfaPout_len* sizeof(rowreq_ctx->data.edfaPout[0]) );

    return MFD_SUCCESS;
} /* edfaPout_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::edfaEntry.edfaPin
 * edfaPin is subid 3 of edfaEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.43484.1.1.1.2.8.1.3
 * Description:
edfa input power
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
 * Extract the current value of the edfaPin data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param edfaPin_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param edfaPin_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by edfaPin.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*edfaPin_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update edfaPin_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
edfaPin_get( edfaTable_rowreq_ctx *rowreq_ctx, char **edfaPin_val_ptr_ptr, size_t *edfaPin_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != edfaPin_val_ptr_ptr) && (NULL != *edfaPin_val_ptr_ptr));
   netsnmp_assert( NULL != edfaPin_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:edfaTable:edfaPin_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the edfaPin data.
 * copy (* edfaPin_val_ptr_ptr ) data and (* edfaPin_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for edfaPin data
     */
    if ((NULL == (* edfaPin_val_ptr_ptr )) ||
        ((* edfaPin_val_ptr_len_ptr ) <
         (rowreq_ctx->data.edfaPin_len* sizeof(rowreq_ctx->data.edfaPin[0])))) {
        /*
         * allocate space for edfaPin data
         */
        (* edfaPin_val_ptr_ptr ) = malloc(rowreq_ctx->data.edfaPin_len* sizeof(rowreq_ctx->data.edfaPin[0]));
        if(NULL == (* edfaPin_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory (rowreq_ctx->data.edfaPin)\n");
            return MFD_ERROR;
        }
    }
    (* edfaPin_val_ptr_len_ptr ) = rowreq_ctx->data.edfaPin_len* sizeof(rowreq_ctx->data.edfaPin[0]);
    memcpy( (* edfaPin_val_ptr_ptr ), rowreq_ctx->data.edfaPin, rowreq_ctx->data.edfaPin_len* sizeof(rowreq_ctx->data.edfaPin[0]) );

    return MFD_SUCCESS;
} /* edfaPin_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::edfaEntry.edfaLos
 * edfaLos is subid 4 of edfaEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.43484.1.1.1.2.8.1.4
 * Description:
edfa loss of input power alarm
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
 * Extract the current value of the edfaLos data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param edfaLos_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param edfaLos_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by edfaLos.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*edfaLos_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update edfaLos_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
edfaLos_get( edfaTable_rowreq_ctx *rowreq_ctx, char **edfaLos_val_ptr_ptr, size_t *edfaLos_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != edfaLos_val_ptr_ptr) && (NULL != *edfaLos_val_ptr_ptr));
   netsnmp_assert( NULL != edfaLos_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:edfaTable:edfaLos_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the edfaLos data.
 * copy (* edfaLos_val_ptr_ptr ) data and (* edfaLos_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for edfaLos data
     */
    if ((NULL == (* edfaLos_val_ptr_ptr )) ||
        ((* edfaLos_val_ptr_len_ptr ) <
         (rowreq_ctx->data.edfaLos_len* sizeof(rowreq_ctx->data.edfaLos[0])))) {
        /*
         * allocate space for edfaLos data
         */
        (* edfaLos_val_ptr_ptr ) = malloc(rowreq_ctx->data.edfaLos_len* sizeof(rowreq_ctx->data.edfaLos[0]));
        if(NULL == (* edfaLos_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory (rowreq_ctx->data.edfaLos)\n");
            return MFD_ERROR;
        }
    }
    (* edfaLos_val_ptr_len_ptr ) = rowreq_ctx->data.edfaLos_len* sizeof(rowreq_ctx->data.edfaLos[0]);
    memcpy( (* edfaLos_val_ptr_ptr ), rowreq_ctx->data.edfaLos, rowreq_ctx->data.edfaLos_len* sizeof(rowreq_ctx->data.edfaLos[0]) );

    return MFD_SUCCESS;
} /* edfaLos_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::edfaEntry.edfaLop
 * edfaLop is subid 5 of edfaEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.43484.1.1.1.2.8.1.5
 * Description:
edfa loss of output power/gain alarm
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
 * Extract the current value of the edfaLop data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param edfaLop_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param edfaLop_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by edfaLop.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*edfaLop_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update edfaLop_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
edfaLop_get( edfaTable_rowreq_ctx *rowreq_ctx, char **edfaLop_val_ptr_ptr, size_t *edfaLop_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != edfaLop_val_ptr_ptr) && (NULL != *edfaLop_val_ptr_ptr));
   netsnmp_assert( NULL != edfaLop_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:edfaTable:edfaLop_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the edfaLop data.
 * copy (* edfaLop_val_ptr_ptr ) data and (* edfaLop_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for edfaLop data
     */
    if ((NULL == (* edfaLop_val_ptr_ptr )) ||
        ((* edfaLop_val_ptr_len_ptr ) <
         (rowreq_ctx->data.edfaLop_len* sizeof(rowreq_ctx->data.edfaLop[0])))) {
        /*
         * allocate space for edfaLop data
         */
        (* edfaLop_val_ptr_ptr ) = malloc(rowreq_ctx->data.edfaLop_len* sizeof(rowreq_ctx->data.edfaLop[0]));
        if(NULL == (* edfaLop_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory (rowreq_ctx->data.edfaLop)\n");
            return MFD_ERROR;
        }
    }
    (* edfaLop_val_ptr_len_ptr ) = rowreq_ctx->data.edfaLop_len* sizeof(rowreq_ctx->data.edfaLop[0]);
    memcpy( (* edfaLop_val_ptr_ptr ), rowreq_ctx->data.edfaLop, rowreq_ctx->data.edfaLop_len* sizeof(rowreq_ctx->data.edfaLop[0]) );

    return MFD_SUCCESS;
} /* edfaLop_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::edfaEntry.edfaAmpStat
 * edfaAmpStat is subid 6 of edfaEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.43484.1.1.1.2.8.1.6
 * Description:
EDAF amplifier status
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
 * Extract the current value of the edfaAmpStat data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param edfaAmpStat_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param edfaAmpStat_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by edfaAmpStat.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*edfaAmpStat_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update edfaAmpStat_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
edfaAmpStat_get( edfaTable_rowreq_ctx *rowreq_ctx, char **edfaAmpStat_val_ptr_ptr, size_t *edfaAmpStat_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != edfaAmpStat_val_ptr_ptr) && (NULL != *edfaAmpStat_val_ptr_ptr));
   netsnmp_assert( NULL != edfaAmpStat_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:edfaTable:edfaAmpStat_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the edfaAmpStat data.
 * copy (* edfaAmpStat_val_ptr_ptr ) data and (* edfaAmpStat_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for edfaAmpStat data
     */
    if ((NULL == (* edfaAmpStat_val_ptr_ptr )) ||
        ((* edfaAmpStat_val_ptr_len_ptr ) <
         (rowreq_ctx->data.edfaAmpStat_len* sizeof(rowreq_ctx->data.edfaAmpStat[0])))) {
        /*
         * allocate space for edfaAmpStat data
         */
        (* edfaAmpStat_val_ptr_ptr ) = malloc(rowreq_ctx->data.edfaAmpStat_len* sizeof(rowreq_ctx->data.edfaAmpStat[0]));
        if(NULL == (* edfaAmpStat_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory (rowreq_ctx->data.edfaAmpStat)\n");
            return MFD_ERROR;
        }
    }
    (* edfaAmpStat_val_ptr_len_ptr ) = rowreq_ctx->data.edfaAmpStat_len* sizeof(rowreq_ctx->data.edfaAmpStat[0]);
    memcpy( (* edfaAmpStat_val_ptr_ptr ), rowreq_ctx->data.edfaAmpStat, rowreq_ctx->data.edfaAmpStat_len* sizeof(rowreq_ctx->data.edfaAmpStat[0]) );

    return MFD_SUCCESS;
} /* edfaAmpStat_get */



/** @} */
