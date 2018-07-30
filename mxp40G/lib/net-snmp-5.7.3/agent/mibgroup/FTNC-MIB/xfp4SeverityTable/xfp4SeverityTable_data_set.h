/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
#ifndef XFP4SEVERITYTABLE_DATA_SET_H
#define XFP4SEVERITYTABLE_DATA_SET_H

#ifdef __cplusplus
extern "C" {
#endif

/* *********************************************************************
 * SET function declarations
 */

/* *********************************************************************
 * SET Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table xfp4SeverityTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::xfp4SeverityTable is subid 4 of xfpAlarms.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.4, length: 12
*/


int xfp4SeverityTable_undo_setup( xfp4SeverityTable_rowreq_ctx *rowreq_ctx);
int xfp4SeverityTable_undo_cleanup( xfp4SeverityTable_rowreq_ctx *rowreq_ctx);
int xfp4SeverityTable_undo( xfp4SeverityTable_rowreq_ctx *rowreq_ctx);
int xfp4SeverityTable_commit( xfp4SeverityTable_rowreq_ctx *rowreq_ctx);
int xfp4SeverityTable_undo_commit( xfp4SeverityTable_rowreq_ctx *rowreq_ctx);


int xfp4SeverityPresence_check_value( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityPresence_val);
int xfp4SeverityPresence_undo_setup( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp4SeverityPresence_set( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityPresence_val );
int xfp4SeverityPresence_undo( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp4SeverityRxLoss_check_value( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityRxLoss_val);
int xfp4SeverityRxLoss_undo_setup( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp4SeverityRxLoss_set( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityRxLoss_val );
int xfp4SeverityRxLoss_undo( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp4SeverityReady_check_value( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityReady_val);
int xfp4SeverityReady_undo_setup( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp4SeverityReady_set( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityReady_val );
int xfp4SeverityReady_undo( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp4SeverityTxPower_check_value( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityTxPower_val);
int xfp4SeverityTxPower_undo_setup( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp4SeverityTxPower_set( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityTxPower_val );
int xfp4SeverityTxPower_undo( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp4SeverityRxPower_check_value( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityRxPower_val);
int xfp4SeverityRxPower_undo_setup( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp4SeverityRxPower_set( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityRxPower_val );
int xfp4SeverityRxPower_undo( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp4SeverityTemperature_check_value( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityTemperature_val);
int xfp4SeverityTemperature_undo_setup( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp4SeverityTemperature_set( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityTemperature_val );
int xfp4SeverityTemperature_undo( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp4SeverityLowTxPower_check_value( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityLowTxPower_val);
int xfp4SeverityLowTxPower_undo_setup( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp4SeverityLowTxPower_set( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityLowTxPower_val );
int xfp4SeverityLowTxPower_undo( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp4SeverityHighTxPower_check_value( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityHighTxPower_val);
int xfp4SeverityHighTxPower_undo_setup( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp4SeverityHighTxPower_set( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityHighTxPower_val );
int xfp4SeverityHighTxPower_undo( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp4SeverityLowRxPower_check_value( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityLowRxPower_val);
int xfp4SeverityLowRxPower_undo_setup( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp4SeverityLowRxPower_set( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityLowRxPower_val );
int xfp4SeverityLowRxPower_undo( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp4SeverityHighRxPower_check_value( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityHighRxPower_val);
int xfp4SeverityHighRxPower_undo_setup( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp4SeverityHighRxPower_set( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityHighRxPower_val );
int xfp4SeverityHighRxPower_undo( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp4SeverityRxCdrLossOfLock_check_value( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityRxCdrLossOfLock_val);
int xfp4SeverityRxCdrLossOfLock_undo_setup( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp4SeverityRxCdrLossOfLock_set( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityRxCdrLossOfLock_val );
int xfp4SeverityRxCdrLossOfLock_undo( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp4SeverityTxCdrLossOfLock_check_value( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityTxCdrLossOfLock_val);
int xfp4SeverityTxCdrLossOfLock_undo_setup( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp4SeverityTxCdrLossOfLock_set( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityTxCdrLossOfLock_val );
int xfp4SeverityTxCdrLossOfLock_undo( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp4SeverityLaserFault_check_value( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityLaserFault_val);
int xfp4SeverityLaserFault_undo_setup( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp4SeverityLaserFault_set( xfp4SeverityTable_rowreq_ctx *rowreq_ctx, long xfp4SeverityLaserFault_val );
int xfp4SeverityLaserFault_undo( xfp4SeverityTable_rowreq_ctx *rowreq_ctx );


int xfp4SeverityTable_check_dependencies(xfp4SeverityTable_rowreq_ctx *ctx);

void setSeverity(char *alarm, long severity_value);

#ifdef __cplusplus
}
#endif

#endif /* XFP4SEVERITYTABLE_DATA_SET_H */