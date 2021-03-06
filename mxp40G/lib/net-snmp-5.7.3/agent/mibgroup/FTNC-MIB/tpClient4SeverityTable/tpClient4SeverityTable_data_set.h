/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
#ifndef TPCLIENT4SEVERITYTABLE_DATA_SET_H
#define TPCLIENT4SEVERITYTABLE_DATA_SET_H

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
 *** Table tpClient4SeverityTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::tpClient4SeverityTable is subid 5 of tpAlarms.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.1.1.3.6.5, length: 12
*/


int tpClient4SeverityTable_undo_setup( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx);
int tpClient4SeverityTable_undo_cleanup( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx);
int tpClient4SeverityTable_undo( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx);
int tpClient4SeverityTable_commit( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx);
int tpClient4SeverityTable_undo_commit( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx);


int tpClient4SeverityFramerFsmms_check_value( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityFramerFsmms_val);
int tpClient4SeverityFramerFsmms_undo_setup( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );
int tpClient4SeverityFramerFsmms_set( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityFramerFsmms_val );
int tpClient4SeverityFramerFsmms_undo( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );

int tpClient4SeverityFramerFssusts_check_value( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityFramerFssusts_val);
int tpClient4SeverityFramerFssusts_undo_setup( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );
int tpClient4SeverityFramerFssusts_set( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityFramerFssusts_val );
int tpClient4SeverityFramerFssusts_undo( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );

int tpClient4SeverityFramerSoof_check_value( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityFramerSoof_val);
int tpClient4SeverityFramerSoof_undo_setup( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );
int tpClient4SeverityFramerSoof_set( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityFramerSoof_val );
int tpClient4SeverityFramerSoof_undo( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );

int tpClient4SeverityFramerSlof_check_value( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityFramerSlof_val);
int tpClient4SeverityFramerSlof_undo_setup( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );
int tpClient4SeverityFramerSlof_set( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityFramerSlof_val );
int tpClient4SeverityFramerSlof_undo( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );

int tpClient4SeverityFramerSif_check_value( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityFramerSif_val);
int tpClient4SeverityFramerSif_undo_setup( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );
int tpClient4SeverityFramerSif_set( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityFramerSif_val );
int tpClient4SeverityFramerSif_undo( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );

int tpClient4SeverityFramerFst_check_value( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityFramerFst_val);
int tpClient4SeverityFramerFst_undo_setup( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );
int tpClient4SeverityFramerFst_set( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityFramerFst_val );
int tpClient4SeverityFramerFst_undo( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );

int tpClient4SeverityLosstatLosf_check_value( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityLosstatLosf_val);
int tpClient4SeverityLosstatLosf_undo_setup( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );
int tpClient4SeverityLosstatLosf_set( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityLosstatLosf_val );
int tpClient4SeverityLosstatLosf_undo( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );

int tpClient4SeverityPathmonAccstat_check_value( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityPathmonAccstat_val);
int tpClient4SeverityPathmonAccstat_undo_setup( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );
int tpClient4SeverityPathmonAccstat_set( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityPathmonAccstat_val );
int tpClient4SeverityPathmonAccstat_undo( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );

int tpClient4SeverityPathmonDais_check_value( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityPathmonDais_val);
int tpClient4SeverityPathmonDais_undo_setup( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );
int tpClient4SeverityPathmonDais_set( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityPathmonDais_val );
int tpClient4SeverityPathmonDais_undo( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );

int tpClient4SeverityPathmonDbdi_check_value( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityPathmonDbdi_val);
int tpClient4SeverityPathmonDbdi_undo_setup( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );
int tpClient4SeverityPathmonDbdi_set( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityPathmonDbdi_val );
int tpClient4SeverityPathmonDbdi_undo( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );

int tpClient4SeverityPathmonDlck_check_value( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityPathmonDlck_val);
int tpClient4SeverityPathmonDlck_undo_setup( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );
int tpClient4SeverityPathmonDlck_set( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityPathmonDlck_val );
int tpClient4SeverityPathmonDlck_undo( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );

int tpClient4SeverityPathmonMsiunst_check_value( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityPathmonMsiunst_val);
int tpClient4SeverityPathmonMsiunst_undo_setup( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );
int tpClient4SeverityPathmonMsiunst_set( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeverityPathmonMsiunst_val );
int tpClient4SeverityPathmonMsiunst_undo( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );

int tpClient4SeveritySecmonBipsfs_check_value( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeveritySecmonBipsfs_val);
int tpClient4SeveritySecmonBipsfs_undo_setup( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );
int tpClient4SeveritySecmonBipsfs_set( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeveritySecmonBipsfs_val );
int tpClient4SeveritySecmonBipsfs_undo( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );

int tpClient4SeveritySecmonDbdi_check_value( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeveritySecmonDbdi_val);
int tpClient4SeveritySecmonDbdi_undo_setup( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );
int tpClient4SeveritySecmonDbdi_set( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeveritySecmonDbdi_val );
int tpClient4SeveritySecmonDbdi_undo( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );

int tpClient4SeveritySecmonDiae_check_value( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeveritySecmonDiae_val);
int tpClient4SeveritySecmonDiae_undo_setup( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );
int tpClient4SeveritySecmonDiae_set( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeveritySecmonDiae_val );
int tpClient4SeveritySecmonDiae_undo( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );

int tpClient4SeveritySecmonFlom_check_value( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeveritySecmonFlom_val);
int tpClient4SeveritySecmonFlom_undo_setup( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );
int tpClient4SeveritySecmonFlom_set( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeveritySecmonFlom_val );
int tpClient4SeveritySecmonFlom_undo( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );

int tpClient4SeveritySecmonLom_check_value( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeveritySecmonLom_val);
int tpClient4SeveritySecmonLom_undo_setup( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );
int tpClient4SeveritySecmonLom_set( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx, long tpClient4SeveritySecmonLom_val );
int tpClient4SeveritySecmonLom_undo( tpClient4SeverityTable_rowreq_ctx *rowreq_ctx );


int tpClient4SeverityTable_check_dependencies(tpClient4SeverityTable_rowreq_ctx *ctx);

void setTpClient4Severity(char *alarm, long severity_value);

#ifdef __cplusplus
}
#endif

#endif /* TPCLIENT4SEVERITYTABLE_DATA_SET_H */
