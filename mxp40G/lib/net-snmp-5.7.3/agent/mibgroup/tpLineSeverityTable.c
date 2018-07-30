/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
/** \page MFD helper for tpLineSeverityTable
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
#include "tpLineSeverityTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "FTNC-MIB/tpLineSeverityTable/tpLineSeverityTable_interface.h"

const oid tpLineSeverityTable_oid[] = { TPLINESEVERITYTABLE_OID };
const int tpLineSeverityTable_oid_size = OID_LENGTH(tpLineSeverityTable_oid);

    tpLineSeverityTable_registration  tpLineSeverityTable_user_context;

void initialize_table_tpLineSeverityTable(void);
void shutdown_table_tpLineSeverityTable(void);


/**
 * Initializes the tpLineSeverityTable module
 */
void
init_tpLineSeverityTable(void)
{
    DEBUGMSGTL(("verbose:tpLineSeverityTable:init_tpLineSeverityTable","called\n"));

    /*
     * TODO:300:o: Perform tpLineSeverityTable one-time module initialization.
     */
     
    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("tpLineSeverityTable"))
        initialize_table_tpLineSeverityTable();

} /* init_tpLineSeverityTable */

/**
 * Shut-down the tpLineSeverityTable module (agent is exiting)
 */
void
shutdown_tpLineSeverityTable(void)
{
    if (should_init("tpLineSeverityTable"))
        shutdown_table_tpLineSeverityTable();

}

/**
 * Initialize the table tpLineSeverityTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_tpLineSeverityTable(void)
{
    tpLineSeverityTable_registration * user_context;
    u_long flags;

    DEBUGMSGTL(("verbose:tpLineSeverityTable:initialize_table_tpLineSeverityTable","called\n"));

    /*
     * TODO:301:o: Perform tpLineSeverityTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize tpLineSeverityTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context = netsnmp_create_data_list("tpLineSeverityTable", NULL, NULL);
    
    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;
    
    /*
     * call interface initialization code
     */
    _tpLineSeverityTable_initialize_interface(user_context, flags);
} /* initialize_table_tpLineSeverityTable */

/**
 * Shutdown the table tpLineSeverityTable 
 */
void
shutdown_table_tpLineSeverityTable(void)
{
    /*
     * call interface shutdown code
     */
    _tpLineSeverityTable_shutdown_interface(&tpLineSeverityTable_user_context);
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
tpLineSeverityTable_rowreq_ctx_init(tpLineSeverityTable_rowreq_ctx *rowreq_ctx,
                           void *user_init_ctx)
{
    DEBUGMSGTL(("verbose:tpLineSeverityTable:tpLineSeverityTable_rowreq_ctx_init","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    /*
     * TODO:210:o: |-> Perform extra tpLineSeverityTable rowreq initialization. (eg DEFVALS)
     */

    return MFD_SUCCESS;
} /* tpLineSeverityTable_rowreq_ctx_init */

/**
 * extra context cleanup
 *
 */
void tpLineSeverityTable_rowreq_ctx_cleanup(tpLineSeverityTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:tpLineSeverityTable:tpLineSeverityTable_rowreq_ctx_cleanup","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    /*
     * TODO:211:o: |-> Perform extra tpLineSeverityTable rowreq cleanup.
     */
} /* tpLineSeverityTable_rowreq_ctx_cleanup */

/**
 * pre-request callback
 *
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_ERROR                : other error
 */
int
tpLineSeverityTable_pre_request(tpLineSeverityTable_registration * user_context)
{
    DEBUGMSGTL(("verbose:tpLineSeverityTable:tpLineSeverityTable_pre_request","called\n"));

    /*
     * TODO:510:o: Perform tpLineSeverityTable pre-request actions.
     */

    return MFD_SUCCESS;
} /* tpLineSeverityTable_pre_request */

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
tpLineSeverityTable_post_request(tpLineSeverityTable_registration * user_context, int rc)
{
    DEBUGMSGTL(("verbose:tpLineSeverityTable:tpLineSeverityTable_post_request","called\n"));

    /*
     * TODO:511:o: Perform tpLineSeverityTable post-request actions.
     */

    /*
     * check to set if any rows were changed.
     */
    if (tpLineSeverityTable_dirty_get()) {
        /*
         * check if request was successful. If so, this would be
         * a good place to save data to its persistent store.
         */
        if (MFD_SUCCESS == rc) {
            /*
             * save changed rows, if you haven't already
             */
        }
        
        tpLineSeverityTable_dirty_set(0); /* clear table dirty flag */
    }

    return MFD_SUCCESS;
} /* tpLineSeverityTable_post_request */


/** @{ */
