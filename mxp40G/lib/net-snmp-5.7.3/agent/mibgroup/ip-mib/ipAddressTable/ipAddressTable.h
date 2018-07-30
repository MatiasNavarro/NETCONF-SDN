/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.48 $ of : mfd-top.m2c,v $
 *
 * $Id$
 */
#ifndef IPADDRESSTABLE_H
#define IPADDRESSTABLE_H

#ifdef __cplusplus
extern          "C" {
#endif


/** @addtogroup misc misc: Miscellaneous routines
 *
 * @{
 */
#include <net-snmp/library/asn1.h>
#include <net-snmp/data_access/ipaddress.h>

    /*
     * other required module components 
     */
    /* *INDENT-OFF*  */
config_require(if-mib/data_access/interface)
config_require(ip-mib/data_access/ipaddress)
config_require(ip-mib/ipAddressTable/ipAddressTable_interface)
config_require(ip-mib/ipAddressTable/ipAddressTable_data_access)
    /* *INDENT-ON*  */

    /*
     * OID, column number and enum definions for ipAddressTable 
     */
#include "ipAddressTable_constants.h"

    /*
     *********************************************************************
     * function declarations
     */
    void            init_ipAddressTable(void);
    void            shutdown_ipAddressTable(void);

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table ipAddressTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * IP-MIB::ipAddressTable is subid 34 of ip.
     * Its status is Current.
     * OID: .1.3.6.1.2.1.4.34, length: 8
     */
    /*
     *********************************************************************
     * When you register your mib, you get to provide a generic
     * pointer that will be passed back to you for most of the
     * functions calls.
     *
     * TODO:100:r: Review all context structures
     */
    /*
     * TODO:101:o: |-> Review ipAddressTable registration context.
     */
    typedef netsnmp_data_list ipAddressTable_registration;

/**********************************************************************/
    /*
     * TODO:110:r: |-> Review ipAddressTable data context structure.
     * This structure is used to represent the data for ipAddressTable.
     */
    typedef netsnmp_ipaddress_entry ipAddressTable_data;


    /*
     *********************************************************************
     * TODO:115:o: |-> Review ipAddressTable undo context.
     * We're just going to use the same data structure for our
     * undo_context. If you want to do something more efficent,
     * define your typedef here.
     */
    typedef ipAddressTable_data ipAddressTable_undo_data;

    /*
     * TODO:120:r: |-> Review ipAddressTable mib index.
     * This structure is used to represent the index for ipAddressTable.
     */
    typedef struct ipAddressTable_mib_index_s {

        /*
         * ipAddressAddrType(1)/InetAddressType/ASN_INTEGER/long(u_long)//l/a/w/E/r/d/h
         */
        long            ipAddressAddrType;

        /*
         * ipAddressAddr(2)/InetAddress/ASN_OCTET_STR/char(char)//L/a/w/e/R/d/h
         */
        /** 128 - 1(other indexes) - oid length(10) = 116 */
        u_char          ipAddressAddr[116];
        size_t          ipAddressAddr_len;


    } ipAddressTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review ipAddressTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     *
     * BE VERY CAREFUL TO TAKE INTO ACCOUNT THE MAXIMUM
     * POSSIBLE LENGHT FOR EVERY VARIABLE LENGTH INDEX!
     * Guessing 128 - col/entry(2)  - oid len(8)
     */
#define MAX_ipAddressTable_IDX_LEN     118


    /*
     *********************************************************************
     * TODO:130:o: |-> Review ipAddressTable Row request (rowreq) context.
     * When your functions are called, you will be passed a
     * ipAddressTable_rowreq_ctx pointer.
     */
    typedef struct ipAddressTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
        netsnmp_index   oid_idx;
        oid             oid_tmp[MAX_ipAddressTable_IDX_LEN];

        ipAddressTable_mib_index tbl_idx;

        ipAddressTable_data *data;
        ipAddressTable_undo_data *undo;
        unsigned int    column_set_flags;       /* flags for set columns */


        /*
         * flags per row. Currently, the first (lower) 8 bits are reserved
         * for the user. See mfd.h for other flags.
         */
        u_int           rowreq_flags;

        /*
         * TODO:131:o: |   |-> Add useful data to ipAddressTable rowreq context.
         */

        /*
         * not available from net-snmp ipaddress data_access
         */
        uint32_t        ipAddressCreated;       /* sysUpTime */
        uint32_t        ipAddressLastChanged, ipAddressLastChanged_undo;        /* sysUpTime */
        int             ipAddressRowStatus, ipAddressRowStatus_undo;

        /*
         * storage for future expansion
         */
        netsnmp_data_list *ipAddressTable_data_list;

    } ipAddressTable_rowreq_ctx;

    typedef struct ipAddressTable_ref_rowreq_ctx_s {
        ipAddressTable_rowreq_ctx *rowreq_ctx;
    } ipAddressTable_ref_rowreq_ctx;

    /*
     *********************************************************************
     * function prototypes
     */
    int             ipAddressTable_pre_request(ipAddressTable_registration
                                               * user_context);
    int             ipAddressTable_post_request(ipAddressTable_registration
                                                * user_context, int rc);

    int
        ipAddressTable_rowreq_ctx_init(ipAddressTable_rowreq_ctx *
                                       rowreq_ctx, void *user_init_ctx);
    void
        ipAddressTable_rowreq_ctx_cleanup(ipAddressTable_rowreq_ctx *
                                          rowreq_ctx);

    ipAddressTable_data *ipAddressTable_allocate_data(void);
    void            ipAddressTable_release_data(ipAddressTable_data *
                                                data);

    int
        ipAddressTable_check_dependencies(ipAddressTable_rowreq_ctx *
                                          rowreq_ctx);
    int             ipAddressTable_commit(ipAddressTable_rowreq_ctx *
                                          rowreq_ctx);

        ipAddressTable_rowreq_ctx
        * ipAddressTable_row_find_by_mib_index(ipAddressTable_mib_index *
                                               mib_idx);

    extern const oid      ipAddressTable_oid[];
    extern const int      ipAddressTable_oid_size;


#include "ipAddressTable_interface.h"
#include "ipAddressTable_data_access.h"
    /*
     *********************************************************************
     * GET function declarations
     */

    /*
     *********************************************************************
     * GET Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table ipAddressTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * IP-MIB::ipAddressTable is subid 34 of ip.
     * Its status is Current.
     * OID: .1.3.6.1.2.1.4.34, length: 8
     */
    /*
     * indexes
     */
    int             ipAddressAddrType_map(long *
                                          mib_ipAddressAddrType_val_ptr,
                                          long
                                          raw_ipAddressAddrType_val);

    int             ipAddressIfIndex_get(ipAddressTable_rowreq_ctx *
                                         rowreq_ctx,
                                         long *ipAddressIfIndex_val_ptr);
    int             ipAddressType_get(ipAddressTable_rowreq_ctx *
                                      rowreq_ctx,
                                      u_long * ipAddressType_val_ptr);
    int             ipAddressPrefix_get(ipAddressTable_rowreq_ctx *
                                        rowreq_ctx,
                                        oid ** ipAddressPrefix_val_ptr_ptr,
                                        size_t
                                        * ipAddressPrefix_val_ptr_len_ptr);
    int             ipAddressOrigin_get(ipAddressTable_rowreq_ctx *
                                        rowreq_ctx,
                                        u_long * ipAddressOrigin_val_ptr);
    int             ipAddressStatus_get(ipAddressTable_rowreq_ctx *
                                        rowreq_ctx,
                                        u_long * ipAddressStatus_val_ptr);
    int             ipAddressCreated_get(ipAddressTable_rowreq_ctx *
                                         rowreq_ctx,
                                         u_long *
                                         ipAddressCreated_val_ptr);
    int             ipAddressLastChanged_get(ipAddressTable_rowreq_ctx *
                                             rowreq_ctx,
                                             u_long *
                                             ipAddressLastChanged_val_ptr);
    int             ipAddressRowStatus_get(ipAddressTable_rowreq_ctx *
                                           rowreq_ctx,
                                           u_long *
                                           ipAddressRowStatus_val_ptr);
    int             ipAddressStorageType_get(ipAddressTable_rowreq_ctx *
                                             rowreq_ctx,
                                             u_long *
                                             ipAddressStorageType_val_ptr);


    int
        ipAddressTable_indexes_set_tbl_idx(ipAddressTable_mib_index *
                                           tbl_idx,
                                           long ipAddressAddrType_val,
                                           u_char *ipAddressAddr_val_ptr,
                                           size_t
                                           ipAddressAddr_val_ptr_len);
    int             ipAddressTable_indexes_set(ipAddressTable_rowreq_ctx *
                                               rowreq_ctx,
                                               u_long
                                               ipAddressAddrType_val,
                                               u_char *ipAddressAddr_val_ptr,
                                               size_t
                                               ipAddressAddr_val_ptr_len);



    /*
     *********************************************************************
     * SET function declarations
     */

    /*
     *********************************************************************
     * SET Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table ipAddressTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * IP-MIB::ipAddressTable is subid 34 of ip.
     * Its status is Current.
     * OID: .1.3.6.1.2.1.4.34, length: 8
     */


    int             ipAddressTable_undo_setup(ipAddressTable_rowreq_ctx *
                                              rowreq_ctx);
    int             ipAddressTable_undo_cleanup(ipAddressTable_rowreq_ctx *
                                                rowreq_ctx);
    int             ipAddressTable_undo(ipAddressTable_rowreq_ctx *
                                        rowreq_ctx);
    int             ipAddressTable_commit(ipAddressTable_rowreq_ctx *
                                          rowreq_ctx);
    int             ipAddressTable_undo_commit(ipAddressTable_rowreq_ctx *
                                               rowreq_ctx);


    int             ipAddressIfIndex_check_value(ipAddressTable_rowreq_ctx
                                                 * rowreq_ctx, long
                                                 ipAddressIfIndex_val);

    int             ipAddressIfIndex_undo_setup(ipAddressTable_rowreq_ctx *
                                                rowreq_ctx);
    int             ipAddressIfIndex_set(ipAddressTable_rowreq_ctx *
                                         rowreq_ctx,
                                         long ipAddressIfIndex_val);
    int             ipAddressIfIndex_undo(ipAddressTable_rowreq_ctx *
                                          rowreq_ctx);

    int             ipAddressType_check_value(ipAddressTable_rowreq_ctx *
                                              rowreq_ctx,
                                              u_long ipAddressType_val);
    int             ipAddressType_undo_setup(ipAddressTable_rowreq_ctx *
                                             rowreq_ctx);
    int             ipAddressType_set(ipAddressTable_rowreq_ctx *
                                      rowreq_ctx,
                                      u_long ipAddressType_val);
    int             ipAddressType_undo(ipAddressTable_rowreq_ctx *
                                       rowreq_ctx);

    int             ipAddressPrefix_check_value(ipAddressTable_rowreq_ctx *
                                                rowreq_ctx,
                                                oid *
                                                ipAddressPrefix_val_ptr,
                                                size_t
                                                ipAddressPrefix_val_ptr_len);
    int             ipAddressPrefix_undo_setup(ipAddressTable_rowreq_ctx *
                                               rowreq_ctx);
    int             ipAddressPrefix_set(ipAddressTable_rowreq_ctx *
                                        rowreq_ctx,
                                        oid * ipAddressPrefix_val_ptr,
                                        size_t
                                        ipAddressPrefix_val_ptr_len);
    int             ipAddressPrefix_undo(ipAddressTable_rowreq_ctx *
                                         rowreq_ctx);

    int             ipAddressOrigin_check_value(ipAddressTable_rowreq_ctx *
                                                rowreq_ctx,
                                                u_long
                                                ipAddressOrigin_val);
    int             ipAddressOrigin_undo_setup(ipAddressTable_rowreq_ctx *
                                               rowreq_ctx);
    int             ipAddressOrigin_set(ipAddressTable_rowreq_ctx *
                                        rowreq_ctx,
                                        u_long ipAddressOrigin_val);
    int             ipAddressOrigin_undo(ipAddressTable_rowreq_ctx *
                                         rowreq_ctx);

    int             ipAddressStatus_check_value(ipAddressTable_rowreq_ctx *
                                                rowreq_ctx,
                                                u_long
                                                ipAddressStatus_val);
    int             ipAddressStatus_undo_setup(ipAddressTable_rowreq_ctx *
                                               rowreq_ctx);
    int             ipAddressStatus_set(ipAddressTable_rowreq_ctx *
                                        rowreq_ctx,
                                        u_long ipAddressStatus_val);
    int             ipAddressStatus_undo(ipAddressTable_rowreq_ctx *
                                         rowreq_ctx);

    int             ipAddressCreated_check_value(ipAddressTable_rowreq_ctx
                                                 * rowreq_ctx,
                                                 u_long
                                                 ipAddressCreated_val);
    int             ipAddressCreated_undo_setup(ipAddressTable_rowreq_ctx *
                                                rowreq_ctx);
    int             ipAddressCreated_set(ipAddressTable_rowreq_ctx *
                                         rowreq_ctx,
                                         u_long ipAddressCreated_val);
    int             ipAddressCreated_undo(ipAddressTable_rowreq_ctx *
                                          rowreq_ctx);

    int
        ipAddressLastChanged_check_value(ipAddressTable_rowreq_ctx *
                                         rowreq_ctx,
                                         u_long ipAddressLastChanged_val);
    int
        ipAddressLastChanged_undo_setup(ipAddressTable_rowreq_ctx *
                                        rowreq_ctx);
    int             ipAddressLastChanged_set(ipAddressTable_rowreq_ctx *
                                             rowreq_ctx,
                                             u_long
                                             ipAddressLastChanged_val);
    int             ipAddressLastChanged_undo(ipAddressTable_rowreq_ctx *
                                              rowreq_ctx);

    int
        ipAddressRowStatus_check_value(ipAddressTable_rowreq_ctx *
                                       rowreq_ctx,
                                       u_long ipAddressRowStatus_val);
    int             ipAddressRowStatus_undo_setup(ipAddressTable_rowreq_ctx
                                                  * rowreq_ctx);
    int             ipAddressRowStatus_set(ipAddressTable_rowreq_ctx *
                                           rowreq_ctx,
                                           u_long ipAddressRowStatus_val);
    int             ipAddressRowStatus_undo(ipAddressTable_rowreq_ctx *
                                            rowreq_ctx);

    int
        ipAddressStorageType_check_value(ipAddressTable_rowreq_ctx *
                                         rowreq_ctx,
                                         u_long ipAddressStorageType_val);
    int
        ipAddressStorageType_undo_setup(ipAddressTable_rowreq_ctx *
                                        rowreq_ctx);
    int             ipAddressStorageType_set(ipAddressTable_rowreq_ctx *
                                             rowreq_ctx,
                                             u_long
                                             ipAddressStorageType_val);
    int             ipAddressStorageType_undo(ipAddressTable_rowreq_ctx *
                                              rowreq_ctx);


    int
        ipAddressTable_check_dependencies(ipAddressTable_rowreq_ctx * ctx);


    /*
     * DUMMY markers, ignore
     *
     * TODO:099:x: *************************************************************
     * TODO:199:x: *************************************************************
     * TODO:299:x: *************************************************************
     * TODO:399:x: *************************************************************
     * TODO:499:x: *************************************************************
     */

#ifdef __cplusplus
}
#endif
#endif                          /* IPADDRESSTABLE_H */
/**  @} */

