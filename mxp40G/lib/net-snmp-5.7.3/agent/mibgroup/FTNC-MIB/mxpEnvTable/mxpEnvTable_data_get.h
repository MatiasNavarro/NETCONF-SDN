/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 *
 * @file mxpEnvTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef MXPENVTABLE_DATA_GET_H
#define MXPENVTABLE_DATA_GET_H

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
 *** Table mxpEnvTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::mxpEnvTable is subid 7 of mxpMIBObjects.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.2.7, length: 9
*/
    /*
     * indexes
     */

    int mxpTempT41Around_get( mxpEnvTable_rowreq_ctx *rowreq_ctx, char **mxpTempT41Around_val_ptr_ptr, size_t *mxpTempT41Around_val_ptr_len_ptr );
    int mxpTempT41TS0_get( mxpEnvTable_rowreq_ctx *rowreq_ctx, char **mxpTempT41TS0_val_ptr_ptr, size_t *mxpTempT41TS0_val_ptr_len_ptr );
    int mxpTempT41TS1_get( mxpEnvTable_rowreq_ctx *rowreq_ctx, char **mxpTempT41TS1_val_ptr_ptr, size_t *mxpTempT41TS1_val_ptr_len_ptr );
    int mxpTempT41TS2_get( mxpEnvTable_rowreq_ctx *rowreq_ctx, char **mxpTempT41TS2_val_ptr_ptr, size_t *mxpTempT41TS2_val_ptr_len_ptr );
    int mxpTempFPGA_get( mxpEnvTable_rowreq_ctx *rowreq_ctx, char **mxpTempFPGA_val_ptr_ptr, size_t *mxpTempFPGA_val_ptr_len_ptr );
    int mxpTempBOARD_get( mxpEnvTable_rowreq_ctx *rowreq_ctx, char **mxpTempBOARD_val_ptr_ptr, size_t *mxpTempBOARD_val_ptr_len_ptr );
    int mxpTempEdfa_get( mxpEnvTable_rowreq_ctx *rowreq_ctx, char **mxpTempEdfa_val_ptr_ptr, size_t *mxpTempEdfa_val_ptr_len_ptr );
    int mxpHumedity_get( mxpEnvTable_rowreq_ctx *rowreq_ctx, char **mxpHumedity_val_ptr_ptr, size_t *mxpHumedity_val_ptr_len_ptr );


int mxpEnvTable_indexes_set_tbl_idx(mxpEnvTable_mib_index *tbl_idx, char *mxpEnvIndex_val_ptr,  size_t mxpEnvIndex_val_ptr_len);
int mxpEnvTable_indexes_set(mxpEnvTable_rowreq_ctx *rowreq_ctx, char *mxpEnvIndex_val_ptr,  size_t mxpEnvIndex_val_ptr_len);




#ifdef __cplusplus
}
#endif

#endif /* MXPENVTABLE_DATA_GET_H */
/** @} */