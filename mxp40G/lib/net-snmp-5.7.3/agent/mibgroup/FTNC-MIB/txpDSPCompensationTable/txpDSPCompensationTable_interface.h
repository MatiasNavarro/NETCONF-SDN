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
#ifndef TXPDSPCOMPENSATIONTABLE_INTERFACE_H
#define TXPDSPCOMPENSATIONTABLE_INTERFACE_H

#ifdef __cplusplus
extern "C" {
#endif


#include "../../txpDSPCompensationTable.h"


/* ********************************************************************
 * Table declarations
 */

/* PUBLIC interface initialization routine */
void _txpDSPCompensationTable_initialize_interface(txpDSPCompensationTable_registration * user_ctx,
                                    u_long flags);
void _txpDSPCompensationTable_shutdown_interface(txpDSPCompensationTable_registration * user_ctx);

txpDSPCompensationTable_registration *
txpDSPCompensationTable_registration_get( void );

txpDSPCompensationTable_registration *
txpDSPCompensationTable_registration_set( txpDSPCompensationTable_registration * newreg );

netsnmp_container *txpDSPCompensationTable_container_get( void );
int txpDSPCompensationTable_container_size( void );

    txpDSPCompensationTable_rowreq_ctx * txpDSPCompensationTable_allocate_rowreq_ctx(void *);
void txpDSPCompensationTable_release_rowreq_ctx(txpDSPCompensationTable_rowreq_ctx *rowreq_ctx);

int txpDSPCompensationTable_index_to_oid(netsnmp_index *oid_idx,
                            txpDSPCompensationTable_mib_index *mib_idx);
int txpDSPCompensationTable_index_from_oid(netsnmp_index *oid_idx,
                              txpDSPCompensationTable_mib_index *mib_idx);

/*
 * access to certain internals. use with caution!
 */
void txpDSPCompensationTable_valid_columns_set(netsnmp_column_info *vc);


#ifdef __cplusplus
}
#endif

#endif /* TXPDSPCOMPENSATIONTABLE_INTERFACE_H */
/** @} */