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
#ifndef TPCLIENT2SEVERITYTABLE_INTERFACE_H
#define TPCLIENT2SEVERITYTABLE_INTERFACE_H

#ifdef __cplusplus
extern "C" {
#endif


#include "tpClient2SeverityTable.h"


/* ********************************************************************
 * Table declarations
 */

/* PUBLIC interface initialization routine */
void _tpClient2SeverityTable_initialize_interface(tpClient2SeverityTable_registration * user_ctx,
                                    u_long flags);
void _tpClient2SeverityTable_shutdown_interface(tpClient2SeverityTable_registration * user_ctx);

tpClient2SeverityTable_registration *
tpClient2SeverityTable_registration_get( void );

tpClient2SeverityTable_registration *
tpClient2SeverityTable_registration_set( tpClient2SeverityTable_registration * newreg );

netsnmp_container *tpClient2SeverityTable_container_get( void );
int tpClient2SeverityTable_container_size( void );

u_int tpClient2SeverityTable_dirty_get( void );
void tpClient2SeverityTable_dirty_set( u_int status );

    tpClient2SeverityTable_rowreq_ctx * tpClient2SeverityTable_allocate_rowreq_ctx(void *);
void tpClient2SeverityTable_release_rowreq_ctx(tpClient2SeverityTable_rowreq_ctx *rowreq_ctx);

int tpClient2SeverityTable_index_to_oid(netsnmp_index *oid_idx,
                            tpClient2SeverityTable_mib_index *mib_idx);
int tpClient2SeverityTable_index_from_oid(netsnmp_index *oid_idx,
                              tpClient2SeverityTable_mib_index *mib_idx);

/*
 * access to certain internals. use with caution!
 */
void tpClient2SeverityTable_valid_columns_set(netsnmp_column_info *vc);


#ifdef __cplusplus
}
#endif

#endif /* TPCLIENT2SEVERITYTABLE_INTERFACE_H */
/** @} */
