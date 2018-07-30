/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
#ifndef TXPALRMTXTABLE_DATA_ACCESS_H
#define TXPALRMTXTABLE_DATA_ACCESS_H

#ifdef __cplusplus
extern "C" {
#endif


/* *********************************************************************
 * function declarations
 */

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table txpAlrmTxTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::txpAlrmTxTable is subid 1 of txpAlrm.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.2.9.1.1, length: 11
*/


    int txpAlrmTxTable_init_data(txpAlrmTxTable_registration * txpAlrmTxTable_reg);


    /*
     * TODO:180:o: Review txpAlrmTxTable cache timeout.
     * The number of seconds before the cache times out
     */
#define TXPALRMTXTABLE_CACHE_TIMEOUT   1

void txpAlrmTxTable_container_init(netsnmp_container **container_ptr_ptr,
                             netsnmp_cache *cache);
void txpAlrmTxTable_container_shutdown(netsnmp_container *container_ptr);

int txpAlrmTxTable_container_load(netsnmp_container *container);
void txpAlrmTxTable_container_free(netsnmp_container *container);

int txpAlrmTxTable_cache_load(netsnmp_container *container);
void txpAlrmTxTable_cache_free(netsnmp_container *container);

    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
/* *********************************************************************
 * Since we have no idea how you really access your data, we'll go with
 * a worst case example: a flat text file.
 */
#define MAX_LINE_SIZE 256
    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/
    int txpAlrmTxTable_row_prep( txpAlrmTxTable_rowreq_ctx *rowreq_ctx);



#ifdef __cplusplus
}
#endif

#endif /* TXPALRMTXTABLE_DATA_ACCESS_H */
