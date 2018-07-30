/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
#ifndef XFP4TABLE_DATA_ACCESS_H
#define XFP4TABLE_DATA_ACCESS_H

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
 *** Table xfp4Table
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::xfp4Table is subid 6 of mxpMIBObjects.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.2.6, length: 9
*/


    int xfp4Table_init_data(xfp4Table_registration * xfp4Table_reg);


    /*
     * TODO:180:o: Review xfp4Table cache timeout.
     * The number of seconds before the cache times out
     */
#define XFP4TABLE_CACHE_TIMEOUT   1

void xfp4Table_container_init(netsnmp_container **container_ptr_ptr,
                             netsnmp_cache *cache);
void xfp4Table_container_shutdown(netsnmp_container *container_ptr);

int xfp4Table_container_load(netsnmp_container *container);
void xfp4Table_container_free(netsnmp_container *container);

int xfp4Table_cache_load(netsnmp_container *container);
void xfp4Table_cache_free(netsnmp_container *container);

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
    int xfp4Table_row_prep( xfp4Table_rowreq_ctx *rowreq_ctx);



#ifdef __cplusplus
}
#endif

#endif /* XFP4TABLE_DATA_ACCESS_H */