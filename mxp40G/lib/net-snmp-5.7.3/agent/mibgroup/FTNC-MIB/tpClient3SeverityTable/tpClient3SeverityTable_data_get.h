/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 *
 * @file tpClient3SeverityTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef TPCLIENT3SEVERITYTABLE_DATA_GET_H
#define TPCLIENT3SEVERITYTABLE_DATA_GET_H

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
 *** Table tpClient3SeverityTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::tpClient3SeverityTable is subid 4 of tpAlarms.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.1.1.3.6.4, length: 12
*/
    /*
     * indexes
     */

    int tpClient3SeverityFramerFsmms_get( tpClient3SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient3SeverityFramerFsmms_val_ptr );
    int tpClient3SeverityFramerFssusts_get( tpClient3SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient3SeverityFramerFssusts_val_ptr );
    int tpClient3SeverityFramerSoof_get( tpClient3SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient3SeverityFramerSoof_val_ptr );
    int tpClient3SeverityFramerSlof_get( tpClient3SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient3SeverityFramerSlof_val_ptr );
    int tpClient3SeverityFramerSif_get( tpClient3SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient3SeverityFramerSif_val_ptr );
    int tpClient3SeverityFramerFst_get( tpClient3SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient3SeverityFramerFst_val_ptr );
    int tpClient3SeverityLosstatLosf_get( tpClient3SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient3SeverityLosstatLosf_val_ptr );
    int tpClient3SeverityPathmonAccstat_get( tpClient3SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient3SeverityPathmonAccstat_val_ptr );
    int tpClient3SeverityPathmonDais_get( tpClient3SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient3SeverityPathmonDais_val_ptr );
    int tpClient3SeverityPathmonDbdi_get( tpClient3SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient3SeverityPathmonDbdi_val_ptr );
    int tpClient3SeverityPathmonDlck_get( tpClient3SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient3SeverityPathmonDlck_val_ptr );
    int tpClient3SeverityPathmonMsiunst_get( tpClient3SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient3SeverityPathmonMsiunst_val_ptr );
    int tpClient3SeveritySecmonBipsfs_get( tpClient3SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient3SeveritySecmonBipsfs_val_ptr );
    int tpClient3SeveritySecmonDbdi_get( tpClient3SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient3SeveritySecmonDbdi_val_ptr );
    int tpClient3SeveritySecmonDiae_get( tpClient3SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient3SeveritySecmonDiae_val_ptr );
    int tpClient3SeveritySecmonFlom_get( tpClient3SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient3SeveritySecmonFlom_val_ptr );
    int tpClient3SeveritySecmonLom_get( tpClient3SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient3SeveritySecmonLom_val_ptr );


int tpClient3SeverityTable_indexes_set_tbl_idx(tpClient3SeverityTable_mib_index *tbl_idx, long tpClient3SeverityIndex_val);
int tpClient3SeverityTable_indexes_set(tpClient3SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient3SeverityIndex_val);




#ifdef __cplusplus
}
#endif

#endif /* TPCLIENT3SEVERITYTABLE_DATA_GET_H */
/** @} */
