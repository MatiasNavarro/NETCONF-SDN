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
#ifndef TPCLIENT3SEVERITYTABLE_INTERFACE_H
#define TPCLIENT3SEVERITYTABLE_INTERFACE_H

#ifdef __cplusplus
extern "C" {
#endif


#include "tpClient3SeverityTable.h"


/* ********************************************************************
 * Table declarations
 */

/* PUBLIC interface initialization routine */
void _tpClient3SeverityTable_initialize_interface(tpClient3SeverityTable_registration * user_ctx,
                                    u_long flags);
void _tpClient3SeverityTable_shutdown_interface(tpClient3SeverityTable_registration * user_ctx);

tpClient3SeverityTable_registration *
tpClient3SeverityTable_registration_get( void );

tpClient3SeverityTable_registration *
tpClient3SeverityTable_registration_set( tpClient3SeverityTable_registration * newreg );

netsnmp_container *tpClient3SeverityTable_container_get( void );
int tpClient3SeverityTable_container_size( void );

u_int tpClient3SeverityTable_dirty_get( void );
void tpClient3SeverityTable_dirty_set( u_int status );

    tpClient3SeverityTable_rowreq_ctx * tpClient3SeverityTable_allocate_rowreq_ctx(void *);
void tpClient3SeverityTable_release_rowreq_ctx(tpClient3SeverityTable_rowreq_ctx *rowreq_ctx);

int tpClient3SeverityTable_index_to_oid(netsnmp_index *oid_idx,
                            tpClient3SeverityTable_mib_index *mib_idx);
int tpClient3SeverityTable_index_from_oid(netsnmp_index *oid_idx,
                              tpClient3SeverityTable_mib_index *mib_idx);

/*
 * access to certain internals. use with caution!
 */
void tpClient3SeverityTable_valid_columns_set(netsnmp_column_info *vc);


#ifdef __cplusplus
}
#endif

#endif /* TPCLIENT3SEVERITYTABLE_INTERFACE_H */
/** @} */
