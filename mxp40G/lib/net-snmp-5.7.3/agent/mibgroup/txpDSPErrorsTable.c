/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
/** \page MFD helper for txpDSPErrorsTable
 *
 * \section intro Introduction
 * Introductory text.
 *
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-features.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "txpDSPErrorsTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "FTNC-MIB/txpDSPErrorsTable/txpDSPErrorsTable_interface.h"

const oid txpDSPErrorsTable_oid[] = { TXPDSPERRORSTABLE_OID };
const int txpDSPErrorsTable_oid_size = OID_LENGTH(txpDSPErrorsTable_oid);

    txpDSPErrorsTable_registration  txpDSPErrorsTable_user_context;

void initialize_table_txpDSPErrorsTable(void);
void shutdown_table_txpDSPErrorsTable(void);


/**
 * Initializes the txpDSPErrorsTable module
 */
void
init_txpDSPErrorsTable(void)
{
    DEBUGMSGTL(("verbose:txpDSPErrorsTable:init_txpDSPErrorsTable","called\n"));

    /*
     * TODO:300:o: Perform txpDSPErrorsTable one-time module initialization.
     */
     
    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("txpDSPErrorsTable"))
        initialize_table_txpDSPErrorsTable();

} /* init_txpDSPErrorsTable */

/**
 * Shut-down the txpDSPErrorsTable module (agent is exiting)
 */
void
shutdown_txpDSPErrorsTable(void)
{
    if (should_init("txpDSPErrorsTable"))
        shutdown_table_txpDSPErrorsTable();

}

/**
 * Initialize the table txpDSPErrorsTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_txpDSPErrorsTable(void)
{
    txpDSPErrorsTable_registration * user_context;
    u_long flags;

    DEBUGMSGTL(("verbose:txpDSPErrorsTable:initialize_table_txpDSPErrorsTable","called\n"));

    /*
     * TODO:301:o: Perform txpDSPErrorsTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize txpDSPErrorsTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context = netsnmp_create_data_list("txpDSPErrorsTable", NULL, NULL);
    
    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;
    
    /*
     * call interface initialization code
     */
    _txpDSPErrorsTable_initialize_interface(user_context, flags);
} /* initialize_table_txpDSPErrorsTable */

/**
 * Shutdown the table txpDSPErrorsTable 
 */
void
shutdown_table_txpDSPErrorsTable(void)
{
    /*
     * call interface shutdown code
     */
    _txpDSPErrorsTable_shutdown_interface(&txpDSPErrorsTable_user_context);
}

/**
 * extra context initialization (eg default values)
 *
 * @param rowreq_ctx    : row request context
 * @param user_init_ctx : void pointer for user (parameter to rowreq_ctx_allocate)
 *
 * @retval MFD_SUCCESS  : no errors
 * @retval MFD_ERROR    : error (context allocate will fail)
 */
int
txpDSPErrorsTable_rowreq_ctx_init(txpDSPErrorsTable_rowreq_ctx *rowreq_ctx,
                           void *user_init_ctx)
{
    DEBUGMSGTL(("verbose:txpDSPErrorsTable:txpDSPErrorsTable_rowreq_ctx_init","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    /*
     * TODO:210:o: |-> Perform extra txpDSPErrorsTable rowreq initialization. (eg DEFVALS)
     */

    return MFD_SUCCESS;
} /* txpDSPErrorsTable_rowreq_ctx_init */

/**
 * extra context cleanup
 *
 */
void txpDSPErrorsTable_rowreq_ctx_cleanup(txpDSPErrorsTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:txpDSPErrorsTable:txpDSPErrorsTable_rowreq_ctx_cleanup","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    /*
     * TODO:211:o: |-> Perform extra txpDSPErrorsTable rowreq cleanup.
     */
} /* txpDSPErrorsTable_rowreq_ctx_cleanup */

/**
 * pre-request callback
 *
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_ERROR                : other error
 */
int
txpDSPErrorsTable_pre_request(txpDSPErrorsTable_registration * user_context)
{
    DEBUGMSGTL(("verbose:txpDSPErrorsTable:txpDSPErrorsTable_pre_request","called\n"));

    /*
     * TODO:510:o: Perform txpDSPErrorsTable pre-request actions.
     */

    return MFD_SUCCESS;
} /* txpDSPErrorsTable_pre_request */

/**
 * post-request callback
 *
 * Note:
 *   New rows have been inserted into the container, and
 *   deleted rows have been removed from the container and
 *   released.
 *
 * @param user_context
 * @param rc : MFD_SUCCESS if all requests succeeded
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : other error (ignored)
 */
int
txpDSPErrorsTable_post_request(txpDSPErrorsTable_registration * user_context, int rc)
{
    DEBUGMSGTL(("verbose:txpDSPErrorsTable:txpDSPErrorsTable_post_request","called\n"));

    /*
     * TODO:511:o: Perform txpDSPErrorsTable post-request actions.
     */

    return MFD_SUCCESS;
} /* txpDSPErrorsTable_post_request */


/** @{ */