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
#ifndef TXPPOWERTABLE_INTERFACE_H
#define TXPPOWERTABLE_INTERFACE_H

#ifdef __cplusplus
extern "C" {
#endif


#include "../../txpPowerTable.h"


/* ********************************************************************
 * Table declarations
 */

/* PUBLIC interface initialization routine */
void _txpPowerTable_initialize_interface(txpPowerTable_registration * user_ctx,
                                    u_long flags);
void _txpPowerTable_shutdown_interface(txpPowerTable_registration * user_ctx);

txpPowerTable_registration *
txpPowerTable_registration_get( void );

txpPowerTable_registration *
txpPowerTable_registration_set( txpPowerTable_registration * newreg );

netsnmp_container *txpPowerTable_container_get( void );
int txpPowerTable_container_size( void );

    txpPowerTable_rowreq_ctx * txpPowerTable_allocate_rowreq_ctx(void *);
void txpPowerTable_release_rowreq_ctx(txpPowerTable_rowreq_ctx *rowreq_ctx);

int txpPowerTable_index_to_oid(netsnmp_index *oid_idx,
                            txpPowerTable_mib_index *mib_idx);
int txpPowerTable_index_from_oid(netsnmp_index *oid_idx,
                              txpPowerTable_mib_index *mib_idx);

/*
 * access to certain internals. use with caution!
 */
void txpPowerTable_valid_columns_set(netsnmp_column_info *vc);


#ifdef __cplusplus
}
#endif

#endif /* TXPPOWERTABLE_INTERFACE_H */
/** @} */
