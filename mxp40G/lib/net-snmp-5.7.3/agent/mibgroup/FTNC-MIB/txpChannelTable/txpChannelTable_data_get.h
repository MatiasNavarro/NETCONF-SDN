/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 *
 * @file txpChannelTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef TXPCHANNELTABLE_DATA_GET_H
#define TXPCHANNELTABLE_DATA_GET_H

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
 *** Table txpChannelTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::txpChannelTable is subid 3 of txpMiscellaneous.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.2.9.2.3, length: 11
*/
    /*
     * indexes
     */

    int txpTxLaserITUChannel_get( txpChannelTable_rowreq_ctx *rowreq_ctx, char **txpTxLaserITUChannel_val_ptr_ptr, size_t *txpTxLaserITUChannel_val_ptr_len_ptr );
    int txpRxLaserITUChannel_get( txpChannelTable_rowreq_ctx *rowreq_ctx, char **txpRxLaserITUChannel_val_ptr_ptr, size_t *txpRxLaserITUChannel_val_ptr_len_ptr );


int txpChannelTable_indexes_set_tbl_idx(txpChannelTable_mib_index *tbl_idx, char *txpChannelIndex_val_ptr,  size_t txpChannelIndex_val_ptr_len);
int txpChannelTable_indexes_set(txpChannelTable_rowreq_ctx *rowreq_ctx, char *txpChannelIndex_val_ptr,  size_t txpChannelIndex_val_ptr_len);




#ifdef __cplusplus
}
#endif

#endif /* TXPCHANNELTABLE_DATA_GET_H */
/** @} */
