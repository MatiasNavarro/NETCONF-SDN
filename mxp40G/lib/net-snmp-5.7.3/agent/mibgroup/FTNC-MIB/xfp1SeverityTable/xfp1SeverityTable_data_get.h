/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 *
 * @file xfp1SeverityTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef XFP1SEVERITYTABLE_DATA_GET_H
#define XFP1SEVERITYTABLE_DATA_GET_H

#ifdef __cplusplus
extern "C" {
#endif

/* *********************************************************************
 * GET function declarations
 */

/* *********************************************************************
 * GET Table declarations
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
    /*
     * indexes
     */

int xfp1SeverityPresence_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityPresence_val_ptr );
int xfp1SeverityRxLoss_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityRxLoss_val_ptr );
int xfp1SeverityReady_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityReady_val_ptr );
int xfp1SeverityTxPower_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityTxPower_val_ptr );
int xfp1SeverityRxPower_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityRxPower_val_ptr );
int xfp1SeverityTemperature_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityTemperature_val_ptr );
int xfp1SeverityLowTxPower_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityLowTxPower_val_ptr );
int xfp1SeverityHighTxPower_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityHighTxPower_val_ptr );
int xfp1SeverityLowRxPower_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityLowRxPower_val_ptr );
int xfp1SeverityHighRxPower_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityHighRxPower_val_ptr );
int xfp1SeverityRxCdrLossOfLock_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityRxCdrLossOfLock_val_ptr );
int xfp1SeverityTxCdrLossOfLock_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityTxCdrLossOfLock_val_ptr );
int xfp1SeverityLaserFault_get( xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long * xfp1SeverityLaserFault_val_ptr );

int xfp1SeverityTable_indexes_set_tbl_idx(xfp1SeverityTable_mib_index *tbl_idx, long xfp1SeverityIndex_val);
int xfp1SeverityTable_indexes_set(xfp1SeverityTable_rowreq_ctx *rowreq_ctx, long xfp1SeverityIndex_val);

#ifdef __cplusplus
}
#endif

#endif /* XFP1SEVERITYTABLE_DATA_GET_H */
/** @} */
