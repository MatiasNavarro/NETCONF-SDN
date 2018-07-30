/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
/** \page MFD helper for tpClient1SeverityTable
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
#include "tpClient1SeverityTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "FTNC-MIB/tpClient1SeverityTable/tpClient1SeverityTable_interface.h"

const oid tpClient1SeverityTable_oid[] = { TPCLIENT1SEVERITYTABLE_OID };
const int tpClient1SeverityTable_oid_size = OID_LENGTH(tpClient1SeverityTable_oid);

    tpClient1SeverityTable_registration  tpClient1SeverityTable_user_context;

void initialize_table_tpClient1SeverityTable(void);
void shutdown_table_tpClient1SeverityTable(void);


/**
 * Initializes the tpClient1SeverityTable module
 */
void
init_tpClient1SeverityTable(void)
{
    DEBUGMSGTL(("verbose:tpClient1SeverityTable:init_tpClient1SeverityTable","called\n"));

    /*
     * TODO:300:o: Perform tpClient1SeverityTable one-time module initialization.
     */
     
    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("tpClient1SeverityTable"))
        initialize_table_tpClient1SeverityTable();

} /* init_tpClient1SeverityTable */

/**
 * Shut-down the tpClient1SeverityTable module (agent is exiting)
 */
void
shutdown_tpClient1SeverityTable(void)
{
    if (should_init("tpClient1SeverityTable"))
        shutdown_table_tpClient1SeverityTable();

}

/**
 * Initialize the table tpClient1SeverityTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_tpClient1SeverityTable(void)
{
    tpClient1SeverityTable_registration * user_context;
    u_long flags;

    DEBUGMSGTL(("verbose:tpClient1SeverityTable:initialize_table_tpClient1SeverityTable","called\n"));

    /*
     * TODO:301:o: Perform tpClient1SeverityTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize tpClient1SeverityTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context = netsnmp_create_data_list("tpClient1SeverityTable", NULL, NULL);
    
    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;
    
    /*
     * call interface initialization code
     */
    _tpClient1SeverityTable_initialize_interface(user_context, flags);
} /* initialize_table_tpClient1SeverityTable */

/**
 * Shutdown the table tpClient1SeverityTable 
 */
void
shutdown_table_tpClient1SeverityTable(void)
{
    /*
     * call interface shutdown code
     */
    _tpClient1SeverityTable_shutdown_interface(&tpClient1SeverityTable_user_context);
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
tpClient1SeverityTable_rowreq_ctx_init(tpClient1SeverityTable_rowreq_ctx *rowreq_ctx,
                           void *user_init_ctx)
{
    DEBUGMSGTL(("verbose:tpClient1SeverityTable:tpClient1SeverityTable_rowreq_ctx_init","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    /*
     * TODO:210:o: |-> Perform extra tpClient1SeverityTable rowreq initialization. (eg DEFVALS)
     */

    return MFD_SUCCESS;
} /* tpClient1SeverityTable_rowreq_ctx_init */

/**
 * extra context cleanup
 *
 */
void tpClient1SeverityTable_rowreq_ctx_cleanup(tpClient1SeverityTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:tpClient1SeverityTable:tpClient1SeverityTable_rowreq_ctx_cleanup","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    /*
     * TODO:211:o: |-> Perform extra tpClient1SeverityTable rowreq cleanup.
     */
} /* tpClient1SeverityTable_rowreq_ctx_cleanup */

/**
 * pre-request callback
 *
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_ERROR                : other error
 */
int
tpClient1SeverityTable_pre_request(tpClient1SeverityTable_registration * user_context)
{
    DEBUGMSGTL(("verbose:tpClient1SeverityTable:tpClient1SeverityTable_pre_request","called\n"));

    /*
     * TODO:510:o: Perform tpClient1SeverityTable pre-request actions.
     */

    return MFD_SUCCESS;
} /* tpClient1SeverityTable_pre_request */

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
tpClient1SeverityTable_post_request(tpClient1SeverityTable_registration * user_context, int rc)
{
    DEBUGMSGTL(("verbose:tpClient1SeverityTable:tpClient1SeverityTable_post_request","called\n"));

    /*
     * TODO:511:o: Perform tpClient1SeverityTable post-request actions.
     */

    /*
     * check to set if any rows were changed.
     */
    if (tpClient1SeverityTable_dirty_get()) {
        /*
         * check if request was successful. If so, this would be
         * a good place to save data to its persistent store.
         */
        if (MFD_SUCCESS == rc) {
            /*
             * save changed rows, if you haven't already
             */
        }
        
        tpClient1SeverityTable_dirty_set(0); /* clear table dirty flag */
    }

    return MFD_SUCCESS;
} /* tpClient1SeverityTable_post_request */


/** @{ */
