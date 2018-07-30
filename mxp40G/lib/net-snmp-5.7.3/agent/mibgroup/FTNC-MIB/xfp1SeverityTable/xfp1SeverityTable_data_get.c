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
#include "../../xfp1SeverityTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement xfp1SeverityTable get routines.
 * TODO:240:M: Implement xfp1SeverityTable mapping routines (if any).
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
 *** Table xfp1SeverityTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::xfp1SeverityTable is subid 1 of xfpAlarms.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.1, length: 12
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement xfp1SeverityTable data context functions.
 */


/**
 * set mib index(es)
 *
 * @param tbl_idx mib index structure
 * @param xfp1SeverityIndex_val
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
xfp1SeverityTable_indexes_set_tbl_idx(xfp1SeverityTable_mib_index *tbl_idx, long xfp1SeverityIndex_val)
{
    DEBUGMSGTL(("verbose:xfp1SeverityTable:xfp1SeverityTable_indexes_set_tbl_idx","called\n"));

    /* xfp1SeverityIndex(1)/INTEGER32/ASN_INTEGER/long(long)//l/a/w/e/R/d/h */
    tbl_idx->xfp1SeverityIndex = xfp1SeverityIndex_val;
    

    return MFD_SUCCESS;
} /* xfp1SeverityTable_indexes_set_tbl_idx */

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
xfp1SeverityTable_indexes_set(xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityIndex_val)
{
    DEBUGMSGTL(("verbose:xfp1SeverityTable:xfp1SeverityTable_indexes_set","called\n"));

    if(MFD_SUCCESS != xfp1SeverityTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , xfp1SeverityIndex_val
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != xfp1SeverityTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* xfp1SeverityTable_indexes_set */


/*---------------------------------------------------------------------
 * FTNC-MIB::xfp1SeverityEntry.xfp1SeverityPresence
 * xfp1SeverityPresence is subid 2 of xfp1SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.1.1.2
 * Description:
alarm severity
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the xfp1SeverityPresence data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp1SeverityPresence_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp1SeverityPresence_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityPresence_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp1SeverityTable:xfp1SeverityPresence_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp1SeverityPresence_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp1SeverityPresence data.
 * copy (* xfp1SeverityPresence_val_ptr ) from rowreq_ctx->data
 */
    (* xfp1SeverityPresence_val_ptr ) = rowreq_ctx->data.xfp1SeverityPresence;

    return MFD_SUCCESS;
} /* xfp1SeverityPresence_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp1SeverityEntry.xfp1SeverityRxLoss
 * xfp1SeverityRxLoss is subid 3 of xfp1SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.1.1.3
 * Description:
alarm severity
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the xfp1SeverityRxLoss data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp1SeverityRxLoss_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp1SeverityRxLoss_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityRxLoss_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp1SeverityTable:xfp1SeverityRxLoss_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp1SeverityRxLoss_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp1SeverityRxLoss data.
 * copy (* xfp1SeverityRxLoss_val_ptr ) from rowreq_ctx->data
 */
    (* xfp1SeverityRxLoss_val_ptr ) = rowreq_ctx->data.xfp1SeverityRxLoss;

    return MFD_SUCCESS;
} /* xfp1SeverityRxLoss_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp1SeverityEntry.xfp1SeverityReady
 * xfp1SeverityReady is subid 4 of xfp1SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.1.1.4
 * Description:
alarm severity
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the xfp1SeverityReady data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp1SeverityReady_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp1SeverityReady_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityReady_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp1SeverityTable:xfp1SeverityReady_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp1SeverityReady_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp1SeverityReady data.
 * copy (* xfp1SeverityReady_val_ptr ) from rowreq_ctx->data
 */
    (* xfp1SeverityReady_val_ptr ) = rowreq_ctx->data.xfp1SeverityReady;

    return MFD_SUCCESS;
} /* xfp1SeverityReady_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp1SeverityEntry.xfp1SeverityTxPower
 * xfp1SeverityTxPower is subid 5 of xfp1SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.1.1.5
 * Description:
alarm severity
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the xfp1SeverityTxPower data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp1SeverityTxPower_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp1SeverityTxPower_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityTxPower_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp1SeverityTable:xfp1SeverityTxPower_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp1SeverityTxPower_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp1SeverityTxPower data.
 * copy (* xfp1SeverityTxPower_val_ptr ) from rowreq_ctx->data
 */
    (* xfp1SeverityTxPower_val_ptr ) = rowreq_ctx->data.xfp1SeverityTxPower;

    return MFD_SUCCESS;
} /* xfp1SeverityTxPower_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp1SeverityEntry.xfp1SeverityRxPower
 * xfp1SeverityRxPower is subid 6 of xfp1SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.1.1.6
 * Description:
alarm severity
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the xfp1SeverityRxPower data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp1SeverityRxPower_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp1SeverityRxPower_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityRxPower_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp1SeverityTable:xfp1SeverityRxPower_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp1SeverityRxPower_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp1SeverityRxPower data.
 * copy (* xfp1SeverityRxPower_val_ptr ) from rowreq_ctx->data
 */
    (* xfp1SeverityRxPower_val_ptr ) = rowreq_ctx->data.xfp1SeverityRxPower;

    return MFD_SUCCESS;
} /* xfp1SeverityRxPower_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp1SeverityEntry.xfp1SeverityTemperature
 * xfp1SeverityTemperature is subid 7 of xfp1SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.1.1.7
 * Description:
alarm severity
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the xfp1SeverityTemperature data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp1SeverityTemperature_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp1SeverityTemperature_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityTemperature_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp1SeverityTable:xfp1SeverityTemperature_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp1SeverityTemperature_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp1SeverityTemperature data.
 * copy (* xfp1SeverityTemperature_val_ptr ) from rowreq_ctx->data
 */
    (* xfp1SeverityTemperature_val_ptr ) = rowreq_ctx->data.xfp1SeverityTemperature;

    return MFD_SUCCESS;
} /* xfp1SeverityTemperature_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp1SeverityEntry.xfp1SeverityLowTxPower
 * xfp1SeverityLowTxPower is subid 8 of xfp1SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.1.1.8
 * Description:
alarm severity
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the xfp1SeverityLowTxPower data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp1SeverityLowTxPower_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp1SeverityLowTxPower_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityLowTxPower_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp1SeverityTable:xfp1SeverityLowTxPower_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp1SeverityLowTxPower_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp1SeverityLowTxPower data.
 * copy (* xfp1SeverityLowTxPower_val_ptr ) from rowreq_ctx->data
 */
    (* xfp1SeverityLowTxPower_val_ptr ) = rowreq_ctx->data.xfp1SeverityLowTxPower;

    return MFD_SUCCESS;
} /* xfp1SeverityLowTxPower_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp1SeverityEntry.xfp1SeverityHighTxPower
 * xfp1SeverityHighTxPower is subid 9 of xfp1SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.1.1.9
 * Description:
alarm severity
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the xfp1SeverityHighTxPower data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp1SeverityHighTxPower_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp1SeverityHighTxPower_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityHighTxPower_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp1SeverityTable:xfp1SeverityHighTxPower_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp1SeverityHighTxPower_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp1SeverityHighTxPower data.
 * copy (* xfp1SeverityHighTxPower_val_ptr ) from rowreq_ctx->data
 */
    (* xfp1SeverityHighTxPower_val_ptr ) = rowreq_ctx->data.xfp1SeverityHighTxPower;

    return MFD_SUCCESS;
} /* xfp1SeverityHighTxPower_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp1SeverityEntry.xfp1SeverityLowRxPower
 * xfp1SeverityLowRxPower is subid 10 of xfp1SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.1.1.10
 * Description:
alarm severity
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the xfp1SeverityLowRxPower data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp1SeverityLowRxPower_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp1SeverityLowRxPower_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityLowRxPower_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp1SeverityTable:xfp1SeverityLowRxPower_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp1SeverityLowRxPower_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp1SeverityLowRxPower data.
 * copy (* xfp1SeverityLowRxPower_val_ptr ) from rowreq_ctx->data
 */
    (* xfp1SeverityLowRxPower_val_ptr ) = rowreq_ctx->data.xfp1SeverityLowRxPower;

    return MFD_SUCCESS;
} /* xfp1SeverityLowRxPower_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp1SeverityEntry.xfp1SeverityHighRxPower
 * xfp1SeverityHighRxPower is subid 11 of xfp1SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.1.1.11
 * Description:
alarm severity
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the xfp1SeverityHighRxPower data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp1SeverityHighRxPower_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp1SeverityHighRxPower_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityHighRxPower_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp1SeverityTable:xfp1SeverityHighRxPower_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp1SeverityHighRxPower_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp1SeverityHighRxPower data.
 * copy (* xfp1SeverityHighRxPower_val_ptr ) from rowreq_ctx->data
 */
    (* xfp1SeverityHighRxPower_val_ptr ) = rowreq_ctx->data.xfp1SeverityHighRxPower;

    return MFD_SUCCESS;
} /* xfp1SeverityHighRxPower_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp1SeverityEntry.xfp1SeverityRxCdrLossOfLock
 * xfp1SeverityRxCdrLossOfLock is subid 12 of xfp1SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.1.1.12
 * Description:
alarm severity
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the xfp1SeverityRxCdrLossOfLock data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp1SeverityRxCdrLossOfLock_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp1SeverityRxCdrLossOfLock_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityRxCdrLossOfLock_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp1SeverityTable:xfp1SeverityRxCdrLossOfLock_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp1SeverityRxCdrLossOfLock_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp1SeverityRxCdrLossOfLock data.
 * copy (* xfp1SeverityRxCdrLossOfLock_val_ptr ) from rowreq_ctx->data
 */
    (* xfp1SeverityRxCdrLossOfLock_val_ptr ) = rowreq_ctx->data.xfp1SeverityRxCdrLossOfLock;

    return MFD_SUCCESS;
} /* xfp1SeverityRxCdrLossOfLock_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp1SeverityEntry.xfp1SeverityTxCdrLossOfLock
 * xfp1SeverityTxCdrLossOfLock is subid 13 of xfp1SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.1.1.13
 * Description:
alarm severity
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the xfp1SeverityTxCdrLossOfLock data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp1SeverityTxCdrLossOfLock_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp1SeverityTxCdrLossOfLock_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityTxCdrLossOfLock_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp1SeverityTable:xfp1SeverityTxCdrLossOfLock_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp1SeverityTxCdrLossOfLock_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp1SeverityTxCdrLossOfLock data.
 * copy (* xfp1SeverityTxCdrLossOfLock_val_ptr ) from rowreq_ctx->data
 */
    (* xfp1SeverityTxCdrLossOfLock_val_ptr ) = rowreq_ctx->data.xfp1SeverityTxCdrLossOfLock;

    return MFD_SUCCESS;
} /* xfp1SeverityTxCdrLossOfLock_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp1SeverityEntry.xfp1SeverityLaserFault
 * xfp1SeverityLaserFault is subid 14 of xfp1SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.1.1.14
 * Description:
alarm severity
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the xfp1SeverityLaserFault data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp1SeverityLaserFault_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp1SeverityLaserFault_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityLaserFault_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp1SeverityTable:xfp1SeverityLaserFault_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp1SeverityLaserFault_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp1SeverityLaserFault data.
 * copy (* xfp1SeverityLaserFault_val_ptr ) from rowreq_ctx->data
 */
    (* xfp1SeverityLaserFault_val_ptr ) = rowreq_ctx->data.xfp1SeverityLaserFault;

    return MFD_SUCCESS;
} /* xfp1SeverityLaserFault_get */



/** @} */
