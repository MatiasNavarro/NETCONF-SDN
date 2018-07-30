/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 *
 * @file txpDSPCompensationTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef TXPDSPCOMPENSATIONTABLE_DATA_GET_H
#define TXPDSPCOMPENSATIONTABLE_DATA_GET_H

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
 *** Table txpDSPCompensationTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::txpDSPCompensationTable is subid 3 of txpDSP.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.2.9.3.3, length: 11
*/
    /*
     * indexes
     */

    int minBulkCDCompensation_get( txpDSPCompensationTable_rowreq_ctx *rowreq_ctx, char **minBulkCDCompensation_val_ptr_ptr, size_t *minBulkCDCompensation_val_ptr_len_ptr );
    int maxBulkCDCompensation_get( txpDSPCompensationTable_rowreq_ctx *rowreq_ctx, char **maxBulkCDCompensation_val_ptr_ptr, size_t *maxBulkCDCompensation_val_ptr_len_ptr );
    int stepSize_get( txpDSPCompensationTable_rowreq_ctx *rowreq_ctx, char **stepSize_val_ptr_ptr, size_t *stepSize_val_ptr_len_ptr );
    int cdCompensation_get( txpDSPCompensationTable_rowreq_ctx *rowreq_ctx, char **cdCompensation_val_ptr_ptr, size_t *cdCompensation_val_ptr_len_ptr );


int txpDSPCompensationTable_indexes_set_tbl_idx(txpDSPCompensationTable_mib_index *tbl_idx, char *txpDSPCompensationIndex_val_ptr,  size_t txpDSPCompensationIndex_val_ptr_len);
int txpDSPCompensationTable_indexes_set(txpDSPCompensationTable_rowreq_ctx *rowreq_ctx, char *txpDSPCompensationIndex_val_ptr,  size_t txpDSPCompensationIndex_val_ptr_len);




#ifdef __cplusplus
}
#endif

#endif /* TXPDSPCOMPENSATIONTABLE_DATA_GET_H */
/** @} */
