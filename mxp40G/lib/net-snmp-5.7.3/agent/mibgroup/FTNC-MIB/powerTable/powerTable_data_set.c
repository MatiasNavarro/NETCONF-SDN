/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 *
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-features.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "../../powerTable.h"


/** @defgroup data_set data_set: Routines to set data
 *
 * These routines are used to set the value for individual objects. The
 * row context is passed, along with the new value.
 * 
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table powerTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::powerTable is subid 1 of mxpMIBObjects.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.2.1, length: 9
*/
    /*
     * NOTE: if you update this chart, please update the versions in
     *       local/mib2c-conf.d/parent-set.m2i
     *       agent/mibgroup/helpers/baby_steps.c
     * while you're at it.
     */
    /*
     ***********************************************************************
     * Baby Steps Flow Chart (2004.06.05)                                  *
     *                                                                     *
     * +--------------+    +================+    U = unconditional path    *
     * |optional state|    ||required state||    S = path for success      *
     * +--------------+    +================+    E = path for error        *
     ***********************************************************************
     *
     *                        +--------------+
     *                        |     pre      |
     *                        |   request    |
     *                        +--------------+
     *                               | U
     * +-------------+        +==============+
     * |    row    |f|<-------||  object    ||
     * |  create   |1|      E ||  lookup    ||
     * +-------------+        +==============+
     *     E |   | S                 | S
     *       |   +------------------>|
     *       |                +==============+
     *       |              E ||   check    ||
     *       |<---------------||   values   ||
     *       |                +==============+
     *       |                       | S
     *       |                +==============+
     *       |       +<-------||   undo     ||
     *       |       |      E ||   setup    ||
     *       |       |        +==============+
     *       |       |               | S
     *       |       |        +==============+
     *       |       |        ||    set     ||-------------------------->+
     *       |       |        ||   value    || E                         |
     *       |       |        +==============+                           |
     *       |       |               | S                                 |
     *       |       |        +--------------+                           |
     *       |       |        |    check     |-------------------------->|
     *       |       |        |  consistency | E                         |
     *       |       |        +--------------+                           |
     *       |       |               | S                                 |
     *       |       |        +==============+         +==============+  |
     *       |       |        ||   commit   ||-------->||     undo   ||  |
     *       |       |        ||            || E       ||    commit  ||  |
     *       |       |        +==============+         +==============+  |
     *       |       |               | S                     U |<--------+
     *       |       |        +--------------+         +==============+
     *       |       |        | irreversible |         ||    undo    ||
     *       |       |        |    commit    |         ||     set    ||
     *       |       |        +--------------+         +==============+
     *       |       |               | U                     U |
     *       |       +-------------->|<------------------------+
     *       |                +==============+
     *       |                ||   undo     ||
     *       |                ||  cleanup   ||
     *       |                +==============+
     *       +---------------------->| U
     *                               |
     *                          (err && f1)------------------->+
     *                               |                         |
     *                        +--------------+         +--------------+
     *                        |    post      |<--------|      row     |
     *                        |   request    |       U |    release   |
     *                        +--------------+         +--------------+
     *
     */

/**
 * Setup up context with information needed to undo a set request.
 *
 * This function will be called before the individual node undo setup
 * functions are called. If you need to do any undo setup that is not
 * related to a specific column, you can do it here.
 *
 * Note that the undo context has been allocated with
 * powerTable_allocate_data(), but may need extra
 * initialization similar to what you may have done in
 * powerTable_rowreq_ctx_init().
 * Note that an individual node's undo_setup function will only be called
 * if that node is being set to a new value.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in the node's undo_setup
 * function, so it won't be done unless it is necessary.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (powerTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 */
int
powerTable_undo_setup( powerTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:powerTable:powerTable_undo_setup","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:451:M: |-> Setup powerTable undo.
     * set up powerTable undo information, in preparation for a set.
     * Undo storage is in (* powerb_val_ptr_ptr )*
     */

    return rc;
} /* powerTable_undo_setup */

/**
 * Undo a set request.
 *
 * This function will be called before the individual node undo
 * functions are called. If you need to do any undo that is not
 * related to a specific column, you can do it here.
 *
 * Note that an individual node's undo function will only be called
 * if that node is being set to a new value.
 *
 * If there is anything  specific to a particular column (e.g. releasing
 * memory for a string), you should do that setup in the node's undo
 * function, so it won't be done unless it is necessary.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (powerTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 */
int
powerTable_undo( powerTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:powerTable:powerTable_undo","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:451:M: |-> powerTable undo.
     * powerTable undo information, in response to a failed set.
     * Undo storage is in (* powerb_val_ptr_ptr )*
     */

    return rc;
} /* powerTable_undo_setup */

/**
 * Cleanup up context undo information.
 *
 * This function will be called after set/commit processing. If you
 * allocated any resources in undo_setup, this is the place to release
 * those resources.
 *
 * This function is called regardless of the success or failure of the set
 * request. If you need to perform different steps for cleanup depending
 * on success or failure, you can add a flag to the rowreq_ctx.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (powerTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
powerTable_undo_cleanup( powerTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:powerTable:powerTable_undo_cleanup","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:452:M: |-> Cleanup powerTable undo.
     * Undo storage is in (* powerb_val_ptr_ptr )*
     */

    return rc;
} /* powerTable_undo_cleanup */

/**
 * commit new values.
 *
 * At this point, you should have done everything you can to ensure that
 * this commit will not fail.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the COLUMN_*_FLAG bits can be found in
 * powerTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @param powerTable_rowreq_ctx
 *        Pointer to the users context.
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
powerTable_commit( powerTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;
    int             save_flags;

    DEBUGMSGTL(("verbose:powerTable:powerTable_commit","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * save flags, then clear until we actually do something
     */
    save_flags = rowreq_ctx->column_set_flags;
    rowreq_ctx->column_set_flags = 0;

    /*
     * commit powerTable data
     * 1) check the column's flag in save_flags to see if it was set.
     * 2) clear the flag when you handle that column
     * 3) set the column's flag in column_set_flags if it needs undo
     *    processing in case of a failure.
     */
    /*
     * if we successfully commited this row, set the dirty flag.
     */
    if (MFD_SUCCESS == rc) {
        rowreq_ctx->rowreq_flags |= MFD_ROW_DIRTY;
    }

    if (save_flags) {
       snmp_log(LOG_ERR, "unhandled columns (0x%x) in commit\n", save_flags);
       return MFD_ERROR;
    }

    return rc;
} /* powerTable_commit */

/**
 * undo commit new values.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the COLUMN_*_FLAG bits can be found in
 * powerTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @param powerTable_rowreq_ctx
 *        Pointer to the users context.
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
powerTable_undo_commit( powerTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:powerTable:powerTable_undo_commit","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:485:M: |-> Undo powerTable commit.
     * check the column's flag in rowreq_ctx->column_set_flags to see
     * if it was set during commit, then undo it.
     *
     * eg: if (rowreq_ctx->column_set_flags & COLUMN__FLAG) {}
     */

    
    /*
     * if we successfully un-commited this row, clear the dirty flag.
     */
    if (MFD_SUCCESS == rc) {
        rowreq_ctx->rowreq_flags &= ~MFD_ROW_DIRTY;
    }

    return rc;
} /* powerTable_undo_commit */

/*
 * TODO:440:M: Implement powerTable node value checks.
 * TODO:450:M: Implement powerTable undo functions.
 * TODO:460:M: Implement powerTable set functions.
 * TODO:480:M: Implement powerTable commit functions.
 */
/** @} */
