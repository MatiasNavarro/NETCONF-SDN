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
#include "../../xfp2SeverityTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement xfp2SeverityTable get routines.
 * TODO:240:M: Implement xfp2SeverityTable mapping routines (if any).
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
 *** Table xfp2SeverityTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::xfp2SeverityTable is subid 2 of xfpAlarms.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.2, length: 12
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement xfp2SeverityTable data context functions.
 */


/**
 * set mib index(es)
 *
 * @param tbl_idx mib index structure
 * @param xfp2SeverityIndex_val
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
xfp2SeverityTable_indexes_set_tbl_idx(xfp2SeverityTable_mib_index *tbl_idx, long xfp2SeverityIndex_val)
{
    DEBUGMSGTL(("verbose:xfp2SeverityTable:xfp2SeverityTable_indexes_set_tbl_idx","called\n"));

    /* xfp2SeverityIndex(1)/INTEGER32/ASN_INTEGER/long(long)//l/a/w/e/R/d/h */
    tbl_idx->xfp2SeverityIndex = xfp2SeverityIndex_val;
    

    return MFD_SUCCESS;
} /* xfp2SeverityTable_indexes_set_tbl_idx */

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
xfp2SeverityTable_indexes_set(xfp2SeverityTable_rowreq_ctx *rowreq_ctx, long xfp2SeverityIndex_val)
{
    DEBUGMSGTL(("verbose:xfp2SeverityTable:xfp2SeverityTable_indexes_set","called\n"));

    if(MFD_SUCCESS != xfp2SeverityTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , xfp2SeverityIndex_val
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != xfp2SeverityTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* xfp2SeverityTable_indexes_set */


/*---------------------------------------------------------------------
 * FTNC-MIB::xfp2SeverityEntry.xfp2SeverityPresence
 * xfp2SeverityPresence is subid 2 of xfp2SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.2.1.2
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
 * Extract the current value of the xfp2SeverityPresence data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp2SeverityPresence_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp2SeverityPresence_get( xfp2SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp2SeverityPresence_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp2SeverityTable:xfp2SeverityPresence_get","called\n"));

	/** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp2SeverityPresence_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp2SeverityPresence data.
 * copy (* xfp2SeverityPresence_val_ptr ) from rowreq_ctx->data
 */
    (* xfp2SeverityPresence_val_ptr ) = rowreq_ctx->data.xfp2SeverityPresence;

    return MFD_SUCCESS;
} /* xfp2SeverityPresence_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp2SeverityEntry.xfp2SeverityRxLoss
 * xfp2SeverityRxLoss is subid 3 of xfp2SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.2.1.3
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
 * Extract the current value of the xfp2SeverityRxLoss data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp2SeverityRxLoss_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp2SeverityRxLoss_get( xfp2SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp2SeverityRxLoss_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp2SeverityTable:xfp2SeverityRxLoss_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp2SeverityRxLoss_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp2SeverityRxLoss data.
 * copy (* xfp2SeverityRxLoss_val_ptr ) from rowreq_ctx->data
 */
    (* xfp2SeverityRxLoss_val_ptr ) = rowreq_ctx->data.xfp2SeverityRxLoss;

    return MFD_SUCCESS;
} /* xfp2SeverityRxLoss_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp2SeverityEntry.xfp2SeverityReady
 * xfp2SeverityReady is subid 4 of xfp2SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.2.1.4
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
 * Extract the current value of the xfp2SeverityReady data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp2SeverityReady_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp2SeverityReady_get( xfp2SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp2SeverityReady_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp2SeverityTable:xfp2SeverityReady_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp2SeverityReady_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp2SeverityReady data.
 * copy (* xfp2SeverityReady_val_ptr ) from rowreq_ctx->data
 */
    (* xfp2SeverityReady_val_ptr ) = rowreq_ctx->data.xfp2SeverityReady;

    return MFD_SUCCESS;
} /* xfp2SeverityReady_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp2SeverityEntry.xfp2SeverityTxPower
 * xfp2SeverityTxPower is subid 5 of xfp2SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.2.1.5
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
 * Extract the current value of the xfp2SeverityTxPower data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp2SeverityTxPower_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp2SeverityTxPower_get( xfp2SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp2SeverityTxPower_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp2SeverityTable:xfp2SeverityTxPower_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp2SeverityTxPower_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp2SeverityTxPower data.
 * copy (* xfp2SeverityTxPower_val_ptr ) from rowreq_ctx->data
 */
    (* xfp2SeverityTxPower_val_ptr ) = rowreq_ctx->data.xfp2SeverityTxPower;

    return MFD_SUCCESS;
} /* xfp2SeverityTxPower_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp2SeverityEntry.xfp2SeverityRxPower
 * xfp2SeverityRxPower is subid 6 of xfp2SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.2.1.6
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
 * Extract the current value of the xfp2SeverityRxPower data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp2SeverityRxPower_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp2SeverityRxPower_get( xfp2SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp2SeverityRxPower_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp2SeverityTable:xfp2SeverityRxPower_get","called\n"));

	/** we should have a non-NULL pointer */
	netsnmp_assert( NULL != xfp2SeverityRxPower_val_ptr );

	netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp2SeverityRxPower data.
 * copy (* xfp2SeverityRxPower_val_ptr ) from rowreq_ctx->data
 */
    (* xfp2SeverityRxPower_val_ptr ) = rowreq_ctx->data.xfp2SeverityRxPower;

    return MFD_SUCCESS;
} /* xfp2SeverityRxPower_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp2SeverityEntry.xfp2SeverityTemperature
 * xfp2SeverityTemperature is subid 7 of xfp2SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.2.1.7
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
 * Extract the current value of the xfp2SeverityTemperature data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp2SeverityTemperature_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp2SeverityTemperature_get( xfp2SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp2SeverityTemperature_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp2SeverityTable:xfp2SeverityTemperature_get","called\n"));

	/** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp2SeverityTemperature_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp2SeverityTemperature data.
 * copy (* xfp2SeverityTemperature_val_ptr ) from rowreq_ctx->data
 */
    (* xfp2SeverityTemperature_val_ptr ) = rowreq_ctx->data.xfp2SeverityTemperature;

    return MFD_SUCCESS;
} /* xfp2SeverityTemperature_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp2SeverityEntry.xfp2SeverityLowTxPower
 * xfp2SeverityLowTxPower is subid 8 of xfp2SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.2.1.8
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
 * Extract the current value of the xfp2SeverityLowTxPower data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp2SeverityLowTxPower_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp2SeverityLowTxPower_get( xfp2SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp2SeverityLowTxPower_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp2SeverityTable:xfp2SeverityLowTxPower_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp2SeverityLowTxPower_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp2SeverityLowTxPower data.
 * copy (* xfp2SeverityLowTxPower_val_ptr ) from rowreq_ctx->data
 */
    (* xfp2SeverityLowTxPower_val_ptr ) = rowreq_ctx->data.xfp2SeverityLowTxPower;

    return MFD_SUCCESS;
} /* xfp2SeverityLowTxPower_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp2SeverityEntry.xfp2SeverityHighTxPower
 * xfp2SeverityHighTxPower is subid 9 of xfp2SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.2.1.9
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
 * Extract the current value of the xfp2SeverityHighTxPower data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp2SeverityHighTxPower_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp2SeverityHighTxPower_get( xfp2SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp2SeverityHighTxPower_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp2SeverityTable:xfp2SeverityHighTxPower_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp2SeverityHighTxPower_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp2SeverityHighTxPower data.
 * copy (* xfp2SeverityHighTxPower_val_ptr ) from rowreq_ctx->data
 */
    (* xfp2SeverityHighTxPower_val_ptr ) = rowreq_ctx->data.xfp2SeverityHighTxPower;

    return MFD_SUCCESS;
} /* xfp2SeverityHighTxPower_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp2SeverityEntry.xfp2SeverityLowRxPower
 * xfp2SeverityLowRxPower is subid 10 of xfp2SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.2.1.10
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
 * Extract the current value of the xfp2SeverityLowRxPower data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp2SeverityLowRxPower_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp2SeverityLowRxPower_get( xfp2SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp2SeverityLowRxPower_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp2SeverityTable:xfp2SeverityLowRxPower_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp2SeverityLowRxPower_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp2SeverityLowRxPower data.
 * copy (* xfp2SeverityLowRxPower_val_ptr ) from rowreq_ctx->data
 */
    (* xfp2SeverityLowRxPower_val_ptr ) = rowreq_ctx->data.xfp2SeverityLowRxPower;

    return MFD_SUCCESS;
} /* xfp2SeverityLowRxPower_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp2SeverityEntry.xfp2SeverityHighRxPower
 * xfp2SeverityHighRxPower is subid 11 of xfp2SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.2.1.11
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
 * Extract the current value of the xfp2SeverityHighRxPower data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp2SeverityHighRxPower_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp2SeverityHighRxPower_get( xfp2SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp2SeverityHighRxPower_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp2SeverityTable:xfp2SeverityHighRxPower_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp2SeverityHighRxPower_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp2SeverityHighRxPower data.
 * copy (* xfp2SeverityHighRxPower_val_ptr ) from rowreq_ctx->data
 */
    (* xfp2SeverityHighRxPower_val_ptr ) = rowreq_ctx->data.xfp2SeverityHighRxPower;

    return MFD_SUCCESS;
} /* xfp2SeverityHighRxPower_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp2SeverityEntry.xfp2SeverityRxCdrLossOfLock
 * xfp2SeverityRxCdrLossOfLock is subid 12 of xfp2SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.2.1.12
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
 * Extract the current value of the xfp2SeverityRxCdrLossOfLock data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp2SeverityRxCdrLossOfLock_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp2SeverityRxCdrLossOfLock_get( xfp2SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp2SeverityRxCdrLossOfLock_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp2SeverityTable:xfp2SeverityRxCdrLossOfLock_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp2SeverityRxCdrLossOfLock_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp2SeverityRxCdrLossOfLock data.
 * copy (* xfp2SeverityRxCdrLossOfLock_val_ptr ) from rowreq_ctx->data
 */
    (* xfp2SeverityRxCdrLossOfLock_val_ptr ) = rowreq_ctx->data.xfp2SeverityRxCdrLossOfLock;

    return MFD_SUCCESS;
} /* xfp2SeverityRxCdrLossOfLock_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp2SeverityEntry.xfp2SeverityTxCdrLossOfLock
 * xfp2SeverityTxCdrLossOfLock is subid 13 of xfp2SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.2.1.13
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
 * Extract the current value of the xfp2SeverityTxCdrLossOfLock data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp2SeverityTxCdrLossOfLock_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp2SeverityTxCdrLossOfLock_get( xfp2SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp2SeverityTxCdrLossOfLock_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp2SeverityTable:xfp2SeverityTxCdrLossOfLock_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp2SeverityTxCdrLossOfLock_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp2SeverityTxCdrLossOfLock data.
 * copy (* xfp2SeverityTxCdrLossOfLock_val_ptr ) from rowreq_ctx->data
 */
    (* xfp2SeverityTxCdrLossOfLock_val_ptr ) = rowreq_ctx->data.xfp2SeverityTxCdrLossOfLock;

    return MFD_SUCCESS;
} /* xfp2SeverityTxCdrLossOfLock_get */

/*---------------------------------------------------------------------
 * FTNC-MIB::xfp2SeverityEntry.xfp2SeverityLaserFault
 * xfp2SeverityLaserFault is subid 14 of xfp2SeverityEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.2.1.14
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
 * Extract the current value of the xfp2SeverityLaserFault data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param xfp2SeverityLaserFault_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
xfp2SeverityLaserFault_get( xfp2SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp2SeverityLaserFault_val_ptr )
{
	DEBUGMSGTL(("verbose:xfp2SeverityTable:xfp2SeverityLaserFault_get","called\n"));

   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != xfp2SeverityLaserFault_val_ptr );

   netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the xfp2SeverityLaserFault data.
 * copy (* xfp2SeverityLaserFault_val_ptr ) from rowreq_ctx->data
 */
    (* xfp2SeverityLaserFault_val_ptr ) = rowreq_ctx->data.xfp2SeverityLaserFault;

    return MFD_SUCCESS;
} /* xfp2SeverityLaserFault_get */



/** @} */