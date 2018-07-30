/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 *
 * @file tpClient4SeverityTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef TPCLIENT4SEVERITYTABLE_DATA_GET_H
#define TPCLIENT4SEVERITYTABLE_DATA_GET_H

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
 *** Table tpClient4SeverityTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::tpClient4SeverityTable is subid 5 of tpAlarms.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.1.1.3.6.5, length: 12
*/
    /*
     * indexes
     */

    int tpClient4SeverityFramerFsmms_get( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient4SeverityFramerFsmms_val_ptr );
    int tpClient4SeverityFramerFssusts_get( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient4SeverityFramerFssusts_val_ptr );
    int tpClient4SeverityFramerSoof_get( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient4SeverityFramerSoof_val_ptr );
    int tpClient4SeverityFramerSlof_get( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient4SeverityFramerSlof_val_ptr );
    int tpClient4SeverityFramerSif_get( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient4SeverityFramerSif_val_ptr );
    int tpClient4SeverityFramerFst_get( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient4SeverityFramerFst_val_ptr );
    int tpClient4SeverityLosstatLosf_get( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient4SeverityLosstatLosf_val_ptr );
    int tpClient4SeverityPathmonAccstat_get( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient4SeverityPathmonAccstat_val_ptr );
    int tpClient4SeverityPathmonDais_get( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient4SeverityPathmonDais_val_ptr );
    int tpClient4SeverityPathmonDbdi_get( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient4SeverityPathmonDbdi_val_ptr );
    int tpClient4SeverityPathmonDlck_get( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient4SeverityPathmonDlck_val_ptr );
    int tpClient4SeverityPathmonMsiunst_get( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient4SeverityPathmonMsiunst_val_ptr );
    int tpClient4SeveritySecmonBipsfs_get( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient4SeveritySecmonBipsfs_val_ptr );
    int tpClient4SeveritySecmonDbdi_get( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient4SeveritySecmonDbdi_val_ptr );
    int tpClient4SeveritySecmonDiae_get( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient4SeveritySecmonDiae_val_ptr );
    int tpClient4SeveritySecmonFlom_get( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient4SeveritySecmonFlom_val_ptr );
    int tpClient4SeveritySecmonLom_get( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long * tpClient4SeveritySecmonLom_val_ptr );


int tpClient4SeverityTable_indexes_set_tbl_idx(tpClient4SeverityTable_mib_index *tbl_idx, long tpClient4SeverityIndex_val);
int tpClient4SeverityTable_indexes_set(tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityIndex_val);




#ifdef __cplusplus
}
#endif

#endif /* TPCLIENT4SEVERITYTABLE_DATA_GET_H */
/** @} */
