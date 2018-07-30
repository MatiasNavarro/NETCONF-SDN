/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
/*
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 * ***                                                               ***
 * ***  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE  ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THIS FILE DOES NOT CONTAIN ANY USER EDITABLE CODE.      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THE GENERATED CODE IS INTERNAL IMPLEMENTATION, AND      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***    IS SUBJECT TO CHANGE WITHOUT WARNING IN FUTURE RELEASES.   ***
 * ***                                                               ***
 * ***                                                               ***
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 */

/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-features.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "../../txpDSPErrorsTable.h"


#include <net-snmp/agent/table_container.h>
#include <net-snmp/library/container.h>

#include "txpDSPErrorsTable_interface.h"

netsnmp_feature_require(baby_steps)
netsnmp_feature_require(row_merge)
netsnmp_feature_require(check_all_requests_error)

#include <ctype.h>

/**********************************************************************
 **********************************************************************
 ***
 *** Table txpDSPErrorsTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::txpDSPErrorsTable is subid 2 of txpDSP.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.2.9.3.2, length: 11
*/
typedef struct txpDSPErrorsTable_interface_ctx_s {

   netsnmp_container              *container;
   netsnmp_cache                  *cache;

   txpDSPErrorsTable_registration *      user_ctx;
   
   netsnmp_table_registration_info  tbl_info;

   netsnmp_baby_steps_access_methods access_multiplexer;

} txpDSPErrorsTable_interface_ctx;

static txpDSPErrorsTable_interface_ctx txpDSPErrorsTable_if_ctx;

static void _txpDSPErrorsTable_container_init(
    txpDSPErrorsTable_interface_ctx *if_ctx);
static void _txpDSPErrorsTable_container_shutdown(
    txpDSPErrorsTable_interface_ctx *if_ctx);


netsnmp_container *
txpDSPErrorsTable_container_get( void )
{
    return txpDSPErrorsTable_if_ctx.container;
}

txpDSPErrorsTable_registration *
txpDSPErrorsTable_registration_get( void )
{
    return txpDSPErrorsTable_if_ctx.user_ctx;
}

txpDSPErrorsTable_registration *
txpDSPErrorsTable_registration_set( txpDSPErrorsTable_registration * newreg )
{
    txpDSPErrorsTable_registration * old = txpDSPErrorsTable_if_ctx.user_ctx;
    txpDSPErrorsTable_if_ctx.user_ctx = newreg;
    return old;
}

int
txpDSPErrorsTable_container_size( void )
{
    return CONTAINER_SIZE(txpDSPErrorsTable_if_ctx.container);
}

/*
 * mfd multiplexer modes
 */
static Netsnmp_Node_Handler _mfd_txpDSPErrorsTable_pre_request;
static Netsnmp_Node_Handler _mfd_txpDSPErrorsTable_post_request;
static Netsnmp_Node_Handler _mfd_txpDSPErrorsTable_object_lookup;
static Netsnmp_Node_Handler _mfd_txpDSPErrorsTable_get_values;
/**
 * @internal
 * Initialize the table txpDSPErrorsTable 
 *    (Define its contents and how it's structured)
 */
void
_txpDSPErrorsTable_initialize_interface(txpDSPErrorsTable_registration * reg_ptr,  u_long flags)
{
    netsnmp_baby_steps_access_methods *access_multiplexer =
        &txpDSPErrorsTable_if_ctx.access_multiplexer;
    netsnmp_table_registration_info *tbl_info = &txpDSPErrorsTable_if_ctx.tbl_info;
    netsnmp_handler_registration *reginfo;
    netsnmp_mib_handler *handler;
    int    mfd_modes = 0;

    DEBUGMSGTL(("internal:txpDSPErrorsTable:_txpDSPErrorsTable_initialize_interface","called\n"));


    /*************************************************
     *
     * save interface context for txpDSPErrorsTable
     */
    /*
     * Setting up the table's definition
     */
    netsnmp_table_helper_add_indexes(tbl_info,
                                  ASN_OCTET_STR, /** index: txpDSPErrorsIndex */
                             0);

    /*  Define the minimum and maximum accessible columns.  This
        optimizes retrieval. */
    tbl_info->min_column = TXPDSPERRORSTABLE_MIN_COL;
    tbl_info->max_column = TXPDSPERRORSTABLE_MAX_COL;

    /*
     * save users context
     */
    txpDSPErrorsTable_if_ctx.user_ctx = reg_ptr;

    /*
     * call data access initialization code
     */
    txpDSPErrorsTable_init_data(reg_ptr);

    /*
     * set up the container
     */
    _txpDSPErrorsTable_container_init(&txpDSPErrorsTable_if_ctx);
    if (NULL == txpDSPErrorsTable_if_ctx.container) {
        snmp_log(LOG_ERR,"could not initialize container for txpDSPErrorsTable\n");
        return;
    }
    
    /*
     * access_multiplexer: REQUIRED wrapper for get request handling
     */
    access_multiplexer->object_lookup = _mfd_txpDSPErrorsTable_object_lookup;
    access_multiplexer->get_values = _mfd_txpDSPErrorsTable_get_values;

    /*
     * no wrappers yet
     */
    access_multiplexer->pre_request = _mfd_txpDSPErrorsTable_pre_request;
    access_multiplexer->post_request = _mfd_txpDSPErrorsTable_post_request;

#ifndef NETSNMP_DISABLE_SET_SUPPORT
#endif

    /*************************************************
     *
     * Create a registration, save our reg data, register table.
     */
    DEBUGMSGTL(("txpDSPErrorsTable:init_txpDSPErrorsTable",
                "Registering txpDSPErrorsTable as a mibs-for-dummies table.\n"));		 
    handler = netsnmp_baby_steps_access_multiplexer_get(access_multiplexer);
    reginfo = netsnmp_handler_registration_create("txpDSPErrorsTable", handler,
                                                  txpDSPErrorsTable_oid,
                                                  txpDSPErrorsTable_oid_size,
                                                  HANDLER_CAN_BABY_STEP |
#if !(defined(NETSNMP_NO_WRITE_SUPPORT) || defined(NETSNMP_DISABLE_SET_SUPPORT))
                                                  HANDLER_CAN_RONLY
#else
                                                  HANDLER_CAN_RONLY
#endif /* NETSNMP_NO_WRITE_SUPPORT || NETSNMP_DISABLE_SET_SUPPORT */
                                                  );
    if(NULL == reginfo) {
        snmp_log(LOG_ERR,"error registering table txpDSPErrorsTable\n");
        return;
    }
    reginfo->my_reg_void = &txpDSPErrorsTable_if_ctx;

    /*************************************************
     *
     * set up baby steps handler, create it and inject it
     */
    if( access_multiplexer->object_lookup )
        mfd_modes |= BABY_STEP_OBJECT_LOOKUP;
    if( access_multiplexer->pre_request )
        mfd_modes |= BABY_STEP_PRE_REQUEST;
    if( access_multiplexer->post_request )
        mfd_modes |= BABY_STEP_POST_REQUEST;
    
#if !(defined(NETSNMP_NO_WRITE_SUPPORT) || defined(NETSNMP_DISABLE_SET_SUPPORT))
    if( access_multiplexer->set_values )
        mfd_modes |= BABY_STEP_SET_VALUES;
    if( access_multiplexer->irreversible_commit )
        mfd_modes |= BABY_STEP_IRREVERSIBLE_COMMIT;
    if( access_multiplexer->object_syntax_checks )
        mfd_modes |= BABY_STEP_CHECK_OBJECT;

    if( access_multiplexer->undo_setup )
        mfd_modes |= BABY_STEP_UNDO_SETUP;
    if( access_multiplexer->undo_cleanup )
        mfd_modes |= BABY_STEP_UNDO_CLEANUP;
    if( access_multiplexer->undo_sets )
        mfd_modes |= BABY_STEP_UNDO_SETS;
    
    if( access_multiplexer->row_creation )
        mfd_modes |= BABY_STEP_ROW_CREATE;
    if( access_multiplexer->consistency_checks )
        mfd_modes |= BABY_STEP_CHECK_CONSISTENCY;
    if( access_multiplexer->commit )
        mfd_modes |= BABY_STEP_COMMIT;
    if( access_multiplexer->undo_commit )
        mfd_modes |= BABY_STEP_UNDO_COMMIT;
#endif /* NETSNMP_NO_WRITE_SUPPORT || NETSNMP_DISABLE_SET_SUPPORT */
    
    handler = netsnmp_baby_steps_handler_get(mfd_modes);
    netsnmp_inject_handler(reginfo, handler);

    /*************************************************
     *
     * inject row_merge helper with prefix rootoid_len + 2 (entry.col)
     */
    handler = netsnmp_get_row_merge_handler(reginfo->rootoid_len + 2);
    netsnmp_inject_handler(reginfo, handler);

    /*************************************************
     *
     * inject container_table helper
     */
    handler =
        netsnmp_container_table_handler_get(tbl_info,
                                            txpDSPErrorsTable_if_ctx.container,
                                            TABLE_CONTAINER_KEY_NETSNMP_INDEX);
    netsnmp_inject_handler( reginfo, handler );

    /*************************************************
     *
     * inject cache helper
     */
    if(NULL != txpDSPErrorsTable_if_ctx.cache) {
        handler = netsnmp_cache_handler_get(txpDSPErrorsTable_if_ctx.cache);
        netsnmp_inject_handler( reginfo, handler );
    }

    /*
     * register table
     */
    netsnmp_register_table(reginfo, tbl_info);

} /* _txpDSPErrorsTable_initialize_interface */

/**
 * @internal
 * Shutdown the table txpDSPErrorsTable
 */
void
_txpDSPErrorsTable_shutdown_interface(txpDSPErrorsTable_registration * reg_ptr)
{
    /*
     * shutdown the container
     */
    _txpDSPErrorsTable_container_shutdown(&txpDSPErrorsTable_if_ctx);
}

void
txpDSPErrorsTable_valid_columns_set(netsnmp_column_info *vc)
{
    txpDSPErrorsTable_if_ctx.tbl_info.valid_columns = vc;
} /* txpDSPErrorsTable_valid_columns_set */

/**
 * @internal
 * convert the index component stored in the context to an oid
 */
int
txpDSPErrorsTable_index_to_oid(netsnmp_index *oid_idx,
                         txpDSPErrorsTable_mib_index *mib_idx)
{
    int err = SNMP_ERR_NOERROR;
    
    /*
     * temp storage for parsing indexes
     */
    /*
     * txpDSPErrorsIndex(1)/OCTETSTR/ASN_OCTET_STR/char(char)//L/a/w/e/R/d/h
     */
    netsnmp_variable_list var_txpDSPErrorsIndex;

    /*
     * set up varbinds
     */
    memset( &var_txpDSPErrorsIndex, 0x00, sizeof(var_txpDSPErrorsIndex) );
    var_txpDSPErrorsIndex.type = ASN_OCTET_STR;

    /*
     * chain temp index varbinds together
     */
    var_txpDSPErrorsIndex.next_variable =  NULL;


    DEBUGMSGTL(("verbose:txpDSPErrorsTable:txpDSPErrorsTable_index_to_oid","called\n"));

        /* txpDSPErrorsIndex(1)/OCTETSTR/ASN_OCTET_STR/char(char)//L/a/w/e/R/d/h */
    snmp_set_var_value(&var_txpDSPErrorsIndex, &mib_idx->txpDSPErrorsIndex,
                       mib_idx->txpDSPErrorsIndex_len * sizeof(mib_idx->txpDSPErrorsIndex[0]));


    err = build_oid_noalloc(oid_idx->oids, oid_idx->len, &oid_idx->len,
                           NULL, 0, &var_txpDSPErrorsIndex);
    if(err)
        snmp_log(LOG_ERR,"error %d converting index to oid\n", err);

    /*
     * parsing may have allocated memory. free it.
     */
    snmp_reset_var_buffers( &var_txpDSPErrorsIndex );

    return err;
} /* txpDSPErrorsTable_index_to_oid */

/**
 * extract txpDSPErrorsTable indexes from a netsnmp_index
 *
 * @retval SNMP_ERR_NOERROR  : no error
 * @retval SNMP_ERR_GENERR   : error
 */
int
txpDSPErrorsTable_index_from_oid(netsnmp_index *oid_idx,
                         txpDSPErrorsTable_mib_index *mib_idx)
{
    int err = SNMP_ERR_NOERROR;
    
    /*
     * temp storage for parsing indexes
     */
    /*
     * txpDSPErrorsIndex(1)/OCTETSTR/ASN_OCTET_STR/char(char)//L/a/w/e/R/d/h
     */
    netsnmp_variable_list var_txpDSPErrorsIndex;

    /*
     * set up varbinds
     */
    memset( &var_txpDSPErrorsIndex, 0x00, sizeof(var_txpDSPErrorsIndex) );
    var_txpDSPErrorsIndex.type = ASN_OCTET_STR;

    /*
     * chain temp index varbinds together
     */
    var_txpDSPErrorsIndex.next_variable =  NULL;


    DEBUGMSGTL(("verbose:txpDSPErrorsTable:txpDSPErrorsTable_index_from_oid","called\n"));

    /*
     * parse the oid into the individual index components
     */
    err = parse_oid_indexes( oid_idx->oids, oid_idx->len,
                             &var_txpDSPErrorsIndex );
    if (err == SNMP_ERR_NOERROR) {
        /*
         * copy out values
         */
    /*
     * NOTE: val_len is in bytes, txpDSPErrorsIndex_len might not be
     */
         if(var_txpDSPErrorsIndex.val_len > sizeof(mib_idx->txpDSPErrorsIndex))
             err = SNMP_ERR_GENERR;
         else {
             memcpy(mib_idx->txpDSPErrorsIndex, var_txpDSPErrorsIndex.val.string, var_txpDSPErrorsIndex.val_len);
             mib_idx->txpDSPErrorsIndex_len = var_txpDSPErrorsIndex.val_len / sizeof(mib_idx->txpDSPErrorsIndex[0]);
         }


    }

    /*
     * parsing may have allocated memory. free it.
     */
    snmp_reset_var_buffers( &var_txpDSPErrorsIndex );

    return err;
} /* txpDSPErrorsTable_index_from_oid */


/* *********************************************************************
 * @internal
 * allocate resources for a txpDSPErrorsTable_rowreq_ctx
 */
txpDSPErrorsTable_rowreq_ctx *
txpDSPErrorsTable_allocate_rowreq_ctx(void *user_init_ctx)
{
    txpDSPErrorsTable_rowreq_ctx *rowreq_ctx =
                  SNMP_MALLOC_TYPEDEF(txpDSPErrorsTable_rowreq_ctx);

    DEBUGMSGTL(("internal:txpDSPErrorsTable:txpDSPErrorsTable_allocate_rowreq_ctx","called\n"));

    if(NULL == rowreq_ctx) {
        snmp_log(LOG_ERR,"Couldn't allocate memory for a "
                 "txpDSPErrorsTable_rowreq_ctx.\n");
        return NULL;
    }

    rowreq_ctx->oid_idx.oids = rowreq_ctx->oid_tmp;

    rowreq_ctx->txpDSPErrorsTable_data_list = NULL;

    /*
     * if we allocated data, call init routine
     */
    if (!(rowreq_ctx->rowreq_flags & MFD_ROW_DATA_FROM_USER)) {
        if(SNMPERR_SUCCESS !=
            txpDSPErrorsTable_rowreq_ctx_init(rowreq_ctx, user_init_ctx)) {
           txpDSPErrorsTable_release_rowreq_ctx(rowreq_ctx);
           rowreq_ctx = NULL;
        }
    }

    return rowreq_ctx;
} /* txpDSPErrorsTable_allocate_rowreq_ctx */

/*
 * @internal
 * release resources for a txpDSPErrorsTable_rowreq_ctx
 */
void
txpDSPErrorsTable_release_rowreq_ctx(txpDSPErrorsTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("internal:txpDSPErrorsTable:txpDSPErrorsTable_release_rowreq_ctx","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    txpDSPErrorsTable_rowreq_ctx_cleanup(rowreq_ctx);

    /*
     * free index oid pointer
     */
    if(rowreq_ctx->oid_idx.oids != rowreq_ctx->oid_tmp)
        free(rowreq_ctx->oid_idx.oids);

    SNMP_FREE(rowreq_ctx);
} /* txpDSPErrorsTable_release_rowreq_ctx */

/**
 * @internal
 * wrapper
 */
static int
_mfd_txpDSPErrorsTable_pre_request(netsnmp_mib_handler *handler,
                            netsnmp_handler_registration *reginfo,
                            netsnmp_agent_request_info *agtreq_info,
                            netsnmp_request_info *requests)
{
    int rc;

    DEBUGMSGTL(("internal:txpDSPErrorsTable:_mfd_txpDSPErrorsTable_pre_request",
                "called\n"));
    
    if (1 != netsnmp_row_merge_status_first(reginfo, agtreq_info)) {
        DEBUGMSGTL(("internal:txpDSPErrorsTable",
                    "skipping additional pre_request\n"));
        return SNMP_ERR_NOERROR;
    }
        
    rc = txpDSPErrorsTable_pre_request(txpDSPErrorsTable_if_ctx.user_ctx);
    if (MFD_SUCCESS != rc) {
        /*
         * nothing we can do about it but log it
         */
        DEBUGMSGTL(("txpDSPErrorsTable","error %d from "
                    "txpDSPErrorsTable_pre_request\n", rc));
        netsnmp_request_set_error_all(requests, SNMP_VALIDATE_ERR(rc));
    }
    
    return SNMP_ERR_NOERROR;
} /* _mfd_txpDSPErrorsTable_pre_request */

/**
 * @internal
 * wrapper
 */
static int
_mfd_txpDSPErrorsTable_post_request(netsnmp_mib_handler *handler,
                             netsnmp_handler_registration *reginfo,
                             netsnmp_agent_request_info *agtreq_info,
                             netsnmp_request_info *requests)
{
    txpDSPErrorsTable_rowreq_ctx *rowreq_ctx = (txpDSPErrorsTable_rowreq_ctx*)
                  netsnmp_container_table_row_extract(requests);
    int rc, packet_rc;

    DEBUGMSGTL(("internal:txpDSPErrorsTable:_mfd_txpDSPErrorsTable_post_request",
                "called\n"));

    /*
     * release row context, if deleted
     */
    if (rowreq_ctx && (rowreq_ctx->rowreq_flags & MFD_ROW_DELETED))
        txpDSPErrorsTable_release_rowreq_ctx(rowreq_ctx);

    /*
     * wait for last call before calling user
     */
    if (1 != netsnmp_row_merge_status_last(reginfo, agtreq_info)) {
        DEBUGMSGTL(("internal:txpDSPErrorsTable",
                    "waiting for last post_request\n"));
        return SNMP_ERR_NOERROR;
    }
    
    packet_rc = netsnmp_check_all_requests_error(agtreq_info->asp, 0);
    rc = txpDSPErrorsTable_post_request(txpDSPErrorsTable_if_ctx.user_ctx,packet_rc);
    if (MFD_SUCCESS != rc) {
        /*
         * nothing we can do about it but log it
         */
        DEBUGMSGTL(("txpDSPErrorsTable","error %d from "
                    "txpDSPErrorsTable_post_request\n", rc));
    }
    
    return SNMP_ERR_NOERROR;
} /* _mfd_txpDSPErrorsTable_post_request */

/**
 * @internal
 * wrapper
 */
static int
_mfd_txpDSPErrorsTable_object_lookup(netsnmp_mib_handler *handler,
                         netsnmp_handler_registration *reginfo,
                         netsnmp_agent_request_info *agtreq_info,
                         netsnmp_request_info *requests)
{
    int                    rc = SNMP_ERR_NOERROR;
    txpDSPErrorsTable_rowreq_ctx *rowreq_ctx = (txpDSPErrorsTable_rowreq_ctx*)
                  netsnmp_container_table_row_extract(requests);
    
    DEBUGMSGTL(("internal:txpDSPErrorsTable:_mfd_txpDSPErrorsTable_object_lookup","called\n"));

    /*
     * get our context from mfd
     * txpDSPErrorsTable_interface_ctx *if_ctx =
     *             (txpDSPErrorsTable_interface_ctx *)reginfo->my_reg_void;
     */

    if(NULL == rowreq_ctx) {
        rc = SNMP_ERR_NOCREATION;
    }

    if (MFD_SUCCESS != rc)
        netsnmp_request_set_error_all(requests, rc);
    else
        txpDSPErrorsTable_row_prep(rowreq_ctx);

    return SNMP_VALIDATE_ERR(rc);
} /* _mfd_txpDSPErrorsTable_object_lookup */

/***********************************************************************
 *
 * GET processing
 *
 ***********************************************************************/
/*
 * @internal
 * Retrieve the value for a particular column
 */
NETSNMP_STATIC_INLINE int
_txpDSPErrorsTable_get_column( txpDSPErrorsTable_rowreq_ctx *rowreq_ctx,
                       netsnmp_variable_list *var, int column )
{
    int rc = SNMPERR_SUCCESS;
    
    DEBUGMSGTL(("internal:txpDSPErrorsTable:_mfd_txpDSPErrorsTable_get_column",
                "called for %d\n", column));


    netsnmp_assert(NULL != rowreq_ctx);

    switch(column) {

    /* msexi(2)/OCTETSTR/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h */
    case COLUMN_MSEXI:
    var->type = ASN_OCTET_STR;
rc = msexi_get(rowreq_ctx, (char **)&var->val.string, &var->val_len );
        break;

    /* msexq(3)/OCTETSTR/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h */
    case COLUMN_MSEXQ:
    var->type = ASN_OCTET_STR;
rc = msexq_get(rowreq_ctx, (char **)&var->val.string, &var->val_len );
        break;

    /* mseyi(4)/OCTETSTR/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h */
    case COLUMN_MSEYI:
    var->type = ASN_OCTET_STR;
rc = mseyi_get(rowreq_ctx, (char **)&var->val.string, &var->val_len );
        break;

    /* mseyq(5)/OCTETSTR/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h */
    case COLUMN_MSEYQ:
    var->type = ASN_OCTET_STR;
rc = mseyq_get(rowreq_ctx, (char **)&var->val.string, &var->val_len );
        break;

    /* berestimate(6)/OCTETSTR/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h */
    case COLUMN_BERESTIMATE:
    var->type = ASN_OCTET_STR;
rc = berestimate_get(rowreq_ctx, (char **)&var->val.string, &var->val_len );
        break;

     default:
        if (TXPDSPERRORSTABLE_MIN_COL <= column && column <= TXPDSPERRORSTABLE_MAX_COL) {
            DEBUGMSGTL(("internal:txpDSPErrorsTable:_mfd_txpDSPErrorsTable_get_column",
                "assume column %d is reserved\n", column));
            rc = MFD_SKIP;
        } else {
            snmp_log(LOG_ERR,
                "unknown column %d in _txpDSPErrorsTable_get_column\n", column);
        }
        break;
    }

    return rc;
} /* _txpDSPErrorsTable_get_column */

int
_mfd_txpDSPErrorsTable_get_values(netsnmp_mib_handler *handler,
                         netsnmp_handler_registration *reginfo,
                         netsnmp_agent_request_info *agtreq_info,
                         netsnmp_request_info *requests)
{
    txpDSPErrorsTable_rowreq_ctx *rowreq_ctx = (txpDSPErrorsTable_rowreq_ctx*)
                  netsnmp_container_table_row_extract(requests);
    netsnmp_table_request_info * tri;
    u_char                     * old_string;
    void                      (*dataFreeHook)(void *);
    int                        rc;

    DEBUGMSGTL(("internal:txpDSPErrorsTable:_mfd_txpDSPErrorsTable_get_values","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    for(;requests; requests = requests->next) {
        /*
         * save old pointer, so we can free it if replaced
         */
        old_string = requests->requestvb->val.string;
        dataFreeHook = requests->requestvb->dataFreeHook;
        if(NULL == requests->requestvb->val.string) {
            requests->requestvb->val.string = requests->requestvb->buf;
            requests->requestvb->val_len = sizeof(requests->requestvb->buf);
        }
        else if(requests->requestvb->buf == requests->requestvb->val.string) {
            if(requests->requestvb->val_len != sizeof(requests->requestvb->buf))
                requests->requestvb->val_len = sizeof(requests->requestvb->buf);
        }

        /*
         * get column data
         */
        tri = netsnmp_extract_table_info(requests);
        if(NULL == tri)
            continue;
        
        rc = _txpDSPErrorsTable_get_column(rowreq_ctx, requests->requestvb, tri->colnum);
        if(rc) {
            if(MFD_SKIP == rc) {
                requests->requestvb->type = SNMP_NOSUCHINSTANCE;
                rc = SNMP_ERR_NOERROR;
            }
        }
        else if (NULL == requests->requestvb->val.string) {
            snmp_log(LOG_ERR,"NULL varbind data pointer!\n");
            rc = SNMP_ERR_GENERR;
        }
        if(rc)
            netsnmp_request_set_error(requests, SNMP_VALIDATE_ERR(rc));

        /*
         * if the buffer wasn't used previously for the old data (i.e. it
         * was allcoated memory)  and the get routine replaced the pointer,
         * we need to free the previous pointer.
         */
        if(old_string && (old_string != requests->requestvb->buf) &&
           (requests->requestvb->val.string != old_string)) {
            if(dataFreeHook)
                (*dataFreeHook)(old_string);
            else
                free(old_string);
        }
    } /* for results */

    return SNMP_ERR_NOERROR;
} /* _mfd_txpDSPErrorsTable_get_values */

/***********************************************************************
 *
 * SET processing
 *
 ***********************************************************************/

/*
 * SET PROCESSING NOT APPLICABLE (per MIB or user setting)
 */
/***********************************************************************
 *
 * DATA ACCESS
 *
 ***********************************************************************/
static void _container_free(netsnmp_container *container);

/**
 * @internal
 */
static int
_cache_load(netsnmp_cache *cache, void *vmagic)
{
    DEBUGMSGTL(("internal:txpDSPErrorsTable:_cache_load","called\n"));

    if((NULL == cache) || (NULL == cache->magic)) {
        snmp_log(LOG_ERR, "invalid cache for txpDSPErrorsTable_cache_load\n");
        return -1;
    }

    /** should only be called for an invalid or expired cache */
    netsnmp_assert((0 == cache->valid) || (1 == cache->expired));
    
    /*
     * call user code
     */
    return txpDSPErrorsTable_container_load((netsnmp_container*)cache->magic);
} /* _cache_load */

/**
 * @internal
 */
static void
_cache_free(netsnmp_cache *cache, void *magic)
{
    netsnmp_container *container;

    DEBUGMSGTL(("internal:txpDSPErrorsTable:_cache_free","called\n"));

    if((NULL == cache) || (NULL == cache->magic)) {
        snmp_log(LOG_ERR, "invalid cache in txpDSPErrorsTable_cache_free\n");
        return;
    }

    container = (netsnmp_container*)cache->magic;

    _container_free(container);
} /* _cache_free */

/**
 * @internal
 */
static void
_container_item_free(txpDSPErrorsTable_rowreq_ctx *rowreq_ctx, void *context)
{
    DEBUGMSGTL(("internal:txpDSPErrorsTable:_container_item_free","called\n"));

    if(NULL == rowreq_ctx)
        return;

    txpDSPErrorsTable_release_rowreq_ctx(rowreq_ctx);
} /* _container_item_free */

/**
 * @internal
 */
static void
_container_free(netsnmp_container *container)
{
    DEBUGMSGTL(("internal:txpDSPErrorsTable:_container_free","called\n"));

    if (NULL == container) {
        snmp_log(LOG_ERR, "invalid container in txpDSPErrorsTable_container_free\n");
        return;
    }

    /*
     * call user code
     */
    txpDSPErrorsTable_container_free(container);
    
    /*
     * free all items. inefficient, but easy.
     */
    CONTAINER_CLEAR(container,
                    (netsnmp_container_obj_func *)_container_item_free,
                    NULL);
} /* _container_free */

/**
 * @internal
 * initialize the container with functions or wrappers
 */
void
_txpDSPErrorsTable_container_init(txpDSPErrorsTable_interface_ctx *if_ctx)
{
    DEBUGMSGTL(("internal:txpDSPErrorsTable:_txpDSPErrorsTable_container_init","called\n"));

    /*
     * cache init
     */
    if_ctx->cache = netsnmp_cache_create(30, /* timeout in seconds */
                                         _cache_load, _cache_free,
                                         txpDSPErrorsTable_oid,
                                         txpDSPErrorsTable_oid_size);

    if(NULL == if_ctx->cache) {
        snmp_log(LOG_ERR, "error creating cache for txpDSPErrorsTable\n");
        return;
    }

    if_ctx->cache->flags = NETSNMP_CACHE_DONT_INVALIDATE_ON_SET;

    txpDSPErrorsTable_container_init(&if_ctx->container, if_ctx->cache);
    if(NULL == if_ctx->container)
        if_ctx->container = netsnmp_container_find("txpDSPErrorsTable:table_container");
    if(NULL == if_ctx->container) {
        snmp_log(LOG_ERR,"error creating container in "
                 "txpDSPErrorsTable_container_init\n");
        return;
    }

    if (NULL != if_ctx->cache)
        if_ctx->cache->magic = (void*)if_ctx->container;
} /* _txpDSPErrorsTable_container_init */

/**
 * @internal
 * shutdown the container with functions or wrappers
 */
void
_txpDSPErrorsTable_container_shutdown(txpDSPErrorsTable_interface_ctx *if_ctx)
{
    DEBUGMSGTL(("internal:txpDSPErrorsTable:_txpDSPErrorsTable_container_shutdown","called\n"));

    txpDSPErrorsTable_container_shutdown(if_ctx->container);

    _container_free(if_ctx->container);

} /* _txpDSPErrorsTable_container_shutdown */


txpDSPErrorsTable_rowreq_ctx *
txpDSPErrorsTable_row_find_by_mib_index(txpDSPErrorsTable_mib_index *mib_idx)
{
    txpDSPErrorsTable_rowreq_ctx   *rowreq_ctx;
    oid                      oid_tmp[MAX_OID_LEN];
    netsnmp_index            oid_idx;
    int                      rc;

    /*
     * set up storage for OID
     */
    oid_idx.oids = oid_tmp;
    oid_idx.len = sizeof(oid_tmp)/sizeof(oid);

    /*
     * convert
     */
    rc = txpDSPErrorsTable_index_to_oid(&oid_idx, mib_idx);
    if (MFD_SUCCESS != rc)
        return NULL;

    rowreq_ctx = (txpDSPErrorsTable_rowreq_ctx*)CONTAINER_FIND(txpDSPErrorsTable_if_ctx.container, &oid_idx);

    return rowreq_ctx;
}

