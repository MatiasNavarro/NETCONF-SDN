/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
/** @ingroup interface: Routines to interface to Net-SNMP
 *
 * \warning This code should not be modified, called directly,
 *          or used to interpret functionality. It is subject to
 *          change at any time.
 * 
 * @{
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
#ifndef TXPPHYSPADTABLE_INTERFACE_H
#define TXPPHYSPADTABLE_INTERFACE_H

#ifdef __cplusplus
extern "C" {
#endif


#include "txpPhyspadTable.h"


/* ********************************************************************
 * Table declarations
 */

/* PUBLIC interface initialization routine */
void _txpPhyspadTable_initialize_interface(txpPhyspadTable_registration * user_ctx,
                                    u_long flags);
void _txpPhyspadTable_shutdown_interface(txpPhyspadTable_registration * user_ctx);

txpPhyspadTable_registration *
txpPhyspadTable_registration_get( void );

txpPhyspadTable_registration *
txpPhyspadTable_registration_set( txpPhyspadTable_registration * newreg );

netsnmp_container *txpPhyspadTable_container_get( void );
int txpPhyspadTable_container_size( void );

    txpPhyspadTable_rowreq_ctx * txpPhyspadTable_allocate_rowreq_ctx(void *);
void txpPhyspadTable_release_rowreq_ctx(txpPhyspadTable_rowreq_ctx *rowreq_ctx);

int txpPhyspadTable_index_to_oid(netsnmp_index *oid_idx,
                            txpPhyspadTable_mib_index *mib_idx);
int txpPhyspadTable_index_from_oid(netsnmp_index *oid_idx,
                              txpPhyspadTable_mib_index *mib_idx);

/*
 * access to certain internals. use with caution!
 */
void txpPhyspadTable_valid_columns_set(netsnmp_column_info *vc);


#ifdef __cplusplus
}
#endif

#endif /* TXPPHYSPADTABLE_INTERFACE_H */
/** @} */
