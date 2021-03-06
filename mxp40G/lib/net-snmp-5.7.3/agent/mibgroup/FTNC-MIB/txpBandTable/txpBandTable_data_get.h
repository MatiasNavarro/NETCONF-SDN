/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 *
 * @file txpBandTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef TXPBANDTABLE_DATA_GET_H
#define TXPBANDTABLE_DATA_GET_H

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
 *** Table txpBandTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::txpBandTable is subid 4 of txpMiscellaneous.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.2.9.2.4, length: 11
*/
    /*
     * indexes
     */

    int txpTxLaserITUBand_get( txpBandTable_rowreq_ctx *rowreq_ctx, char **txpTxLaserITUBand_val_ptr_ptr, size_t *txpTxLaserITUBand_val_ptr_len_ptr );
    int txpRxLaserITUBand_get( txpBandTable_rowreq_ctx *rowreq_ctx, char **txpRxLaserITUBand_val_ptr_ptr, size_t *txpRxLaserITUBand_val_ptr_len_ptr );


int txpBandTable_indexes_set_tbl_idx(txpBandTable_mib_index *tbl_idx, char *txpBandIndex_val_ptr,  size_t txpBandIndex_val_ptr_len);
int txpBandTable_indexes_set(txpBandTable_rowreq_ctx *rowreq_ctx, char *txpBandIndex_val_ptr,  size_t txpBandIndex_val_ptr_len);




#ifdef __cplusplus
}
#endif

#endif /* TXPBANDTABLE_DATA_GET_H */
/** @} */
