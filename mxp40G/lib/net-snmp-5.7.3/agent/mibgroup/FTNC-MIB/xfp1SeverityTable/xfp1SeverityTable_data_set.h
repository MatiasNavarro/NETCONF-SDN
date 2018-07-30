/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
#ifndef XFP1SEVERITYTABLE_DATA_SET_H
#define XFP1SEVERITYTABLE_DATA_SET_H

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
 *** Table xfp1SeverityTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::xfp1SeverityTable is subid 1 of xfpAlarms.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.1.1.3.5.1, length: 12
*/


int xfp1SeverityTable_undo_setup( xfp1SeverityTable_rowreq_ctx *rowreq_ctx);
int xfp1SeverityTable_undo_cleanup( xfp1SeverityTable_rowreq_ctx *rowreq_ctx);
int xfp1SeverityTable_undo( xfp1SeverityTable_rowreq_ctx *rowreq_ctx);
int xfp1SeverityTable_commit( xfp1SeverityTable_rowreq_ctx *rowreq_ctx);
int xfp1SeverityTable_undo_commit( xfp1SeverityTable_rowreq_ctx *rowreq_ctx);

int xfp1SeverityPresence_check_value( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityPresence_val);
int xfp1SeverityPresence_undo_setup( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp1SeverityPresence_set( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityPresence_val );
int xfp1SeverityPresence_undo( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp1SeverityRxLoss_check_value( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityRxLoss_val);
int xfp1SeverityRxLoss_undo_setup( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp1SeverityRxLoss_set( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityRxLoss_val );
int xfp1SeverityRxLoss_undo( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp1SeverityReady_check_value( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityReady_val);
int xfp1SeverityReady_undo_setup( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp1SeverityReady_set( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityReady_val );
int xfp1SeverityReady_undo( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp1SeverityTxPower_check_value( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityTxPower_val);
int xfp1SeverityTxPower_undo_setup( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp1SeverityTxPower_set( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityTxPower_val );
int xfp1SeverityTxPower_undo( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp1SeverityRxPower_check_value( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityRxPower_val);
int xfp1SeverityRxPower_undo_setup( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp1SeverityRxPower_set( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityRxPower_val );
int xfp1SeverityRxPower_undo( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp1SeverityTemperature_check_value( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityTemperature_val);
int xfp1SeverityTemperature_undo_setup( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp1SeverityTemperature_set( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityTemperature_val );
int xfp1SeverityTemperature_undo( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp1SeverityLowTxPower_check_value( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityLowTxPower_val);
int xfp1SeverityLowTxPower_undo_setup( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp1SeverityLowTxPower_set( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityLowTxPower_val );
int xfp1SeverityLowTxPower_undo( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp1SeverityHighTxPower_check_value( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityHighTxPower_val);
int xfp1SeverityHighTxPower_undo_setup( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp1SeverityHighTxPower_set( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityHighTxPower_val );
int xfp1SeverityHighTxPower_undo( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp1SeverityLowRxPower_check_value( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityLowRxPower_val);
int xfp1SeverityLowRxPower_undo_setup( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp1SeverityLowRxPower_set( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityLowRxPower_val );
int xfp1SeverityLowRxPower_undo( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp1SeverityHighRxPower_check_value( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityHighRxPower_val);
int xfp1SeverityHighRxPower_undo_setup( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp1SeverityHighRxPower_set( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityHighRxPower_val );
int xfp1SeverityHighRxPower_undo( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp1SeverityRxCdrLossOfLock_check_value( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityRxCdrLossOfLock_val);
int xfp1SeverityRxCdrLossOfLock_undo_setup( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp1SeverityRxCdrLossOfLock_set( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityRxCdrLossOfLock_val );
int xfp1SeverityRxCdrLossOfLock_undo( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp1SeverityTxCdrLossOfLock_check_value( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityTxCdrLossOfLock_val);
int xfp1SeverityTxCdrLossOfLock_undo_setup( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp1SeverityTxCdrLossOfLock_set( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityTxCdrLossOfLock_val );
int xfp1SeverityTxCdrLossOfLock_undo( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp1SeverityLaserFault_check_value( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityLaserFault_val);
int xfp1SeverityLaserFault_undo_setup( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );
int xfp1SeverityLaserFault_set( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityLaserFault_val );
int xfp1SeverityLaserFault_undo( xfp1SeverityTable_rowreq_ctx *rowreq_ctx );

int xfp1SeverityTable_check_dependencies(xfp1SeverityTable_rowreq_ctx *ctx);

void setXfp1Severity(char *alarm, long severity_value);

#ifdef __cplusplus
}
#endif

#endif /* XFP1SEVERITYTABLE_DATA_SET_H */
