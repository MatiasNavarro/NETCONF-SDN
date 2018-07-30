/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-features.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "../../trafficProcessorTable.h"

#include "trafficProcessorTable_data_access.h"

#include <stdio.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>


#include "../../../../lib/hl_configs/definitions.h"

void shm_handler_create(Monitor *pt_monitor_struct);
Monitor *pt_monitor_struct;


/** @ingroup interface
 * @addtogroup data_access data_access: Routines to access data
 *
 * These routines are used to locate the data used to satisfy
 * requests.
 * 
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table trafficProcessorTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::trafficProcessorTable is subid 1 of trafficProcessor.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.1.1.1.2.10.1, length: 13
*/

/**
 * initialization for trafficProcessorTable data access
 *
 * This function is called during startup to allow you to
 * allocate any resources you need for the data table.
 *
 * @param trafficProcessorTable_reg
 *        Pointer to trafficProcessorTable_registration
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : unrecoverable error.
 */
int
trafficProcessorTable_init_data(trafficProcessorTable_registration * trafficProcessorTable_reg)
{
    DEBUGMSGTL(("verbose:trafficProcessorTable:trafficProcessorTable_init_data","called\n"));

    /*
     * TODO:303:o: Initialize trafficProcessorTable data.
     */
    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
    /*
     * if you are the sole writer for the file, you could
     * open it here. However, as stated earlier, we are assuming
     * the worst case, which in this case means that the file is
     * written to by someone else, and might not even exist when
     * we start up. So we can't do anything here.
     */
    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/

    return MFD_SUCCESS;
} /* trafficProcessorTable_init_data */

/**
 * container overview
 *
 */

/**
 * container initialization
 *
 * @param container_ptr_ptr A pointer to a container pointer. If you
 *        create a custom container, use this parameter to return it
 *        to the MFD helper. If set to NULL, the MFD helper will
 *        allocate a container for you.
 * @param  cache A pointer to a cache structure. You can set the timeout
 *         and other cache flags using this pointer.
 *
 *  This function is called at startup to allow you to customize certain
 *  aspects of the access method. For the most part, it is for advanced
 *  users. The default code should suffice for most cases. If no custom
 *  container is allocated, the MFD code will create one for your.
 *
 *  This is also the place to set up cache behavior. The default, to
 *  simply set the cache timeout, will work well with the default
 *  container. If you are using a custom container, you may want to
 *  look at the cache helper documentation to see if there are any
 *  flags you want to set.
 *
 * @remark
 *  This would also be a good place to do any initialization needed
 *  for you data source. For example, opening a connection to another
 *  process that will supply the data, opening a database, etc.
 */
void
trafficProcessorTable_container_init(netsnmp_container **container_ptr_ptr,
                             netsnmp_cache *cache)
{
    DEBUGMSGTL(("verbose:trafficProcessorTable:trafficProcessorTable_container_init","called\n"));
    
    if (NULL == container_ptr_ptr) {
        snmp_log(LOG_ERR,"bad container param to trafficProcessorTable_container_init\n");
        return;
    }

    /*
     * For advanced users, you can use a custom container. If you
     * do not create one, one will be created for you.
     */
    *container_ptr_ptr = NULL;

    if (NULL == cache) {
        snmp_log(LOG_ERR,"bad cache param to trafficProcessorTable_container_init\n");
        return;
    }

    /*
     * TODO:345:A: Set up trafficProcessorTable cache properties.
     *
     * Also for advanced users, you can set parameters for the
     * cache. Do not change the magic pointer, as it is used
     * by the MFD helper. To completely disable caching, set
     * cache->enabled to 0.
     */
    cache->timeout = TRAFFICPROCESSORTABLE_CACHE_TIMEOUT; /* seconds */
} /* trafficProcessorTable_container_init */

/**
 * container shutdown
 *
 * @param container_ptr A pointer to the container.
 *
 *  This function is called at shutdown to allow you to customize certain
 *  aspects of the access method. For the most part, it is for advanced
 *  users. The default code should suffice for most cases.
 *
 *  This function is called before trafficProcessorTable_container_free().
 *
 * @remark
 *  This would also be a good place to do any cleanup needed
 *  for you data source. For example, closing a connection to another
 *  process that supplied the data, closing a database, etc.
 */
void
trafficProcessorTable_container_shutdown(netsnmp_container *container_ptr)
{
    DEBUGMSGTL(("verbose:trafficProcessorTable:trafficProcessorTable_container_shutdown","called\n"));
    
    if (NULL == container_ptr) {
        snmp_log(LOG_ERR,"bad params to trafficProcessorTable_container_shutdown\n");
        return;
    }

} /* trafficProcessorTable_container_shutdown */

/**
 * load initial data
 *
 * TODO:350:M: Implement trafficProcessorTable data load
 * This function will also be called by the cache helper to load
 * the container again (after the container free function has been
 * called to free the previous contents).
 *
 * @param container container to which items should be inserted
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_RESOURCE_UNAVAILABLE : Can't access data source
 * @retval MFD_ERROR                : other error.
 *
 *  This function is called to load the index(es) (and data, optionally)
 *  for the every row in the data set.
 *
 * @remark
 *  While loading the data, the only important thing is the indexes.
 *  If access to your data is cheap/fast (e.g. you have a pointer to a
 *  structure in memory), it would make sense to update the data here.
 *  If, however, the accessing the data invovles more work (e.g. parsing
 *  some other existing data, or peforming calculations to derive the data),
 *  then you can limit yourself to setting the indexes and saving any
 *  information you will need later. Then use the saved information in
 *  trafficProcessorTable_row_prep() for populating data.
 *
 * @note
 *  If you need consistency between rows (like you want statistics
 *  for each row to be from the same time frame), you should set all
 *  data here.
 *
 */
int
trafficProcessorTable_container_load(netsnmp_container *container)
{
    trafficProcessorTable_rowreq_ctx *rowreq_ctx;
    size_t                 count = 0;

    /*
     * temporary storage for index values
     */
        /*
         * trafficProcessorIndex(1)/INTEGER32/ASN_INTEGER/long(long)//l/a/w/e/R/d/h
         */
   long   trafficProcessorIndex = 1;

    DEBUGMSGTL(("verbose:trafficProcessorTable:trafficProcessorTable_container_load","called\n"));

	/*
	 * TODO:352:M: |   |-> set indexes in new trafficProcessorTable rowreq context.
	 * data context will be set from the param (unless NULL,
	 *      in which case a new data context will be allocated)
	 */
	rowreq_ctx = trafficProcessorTable_allocate_rowreq_ctx(NULL);
	if (NULL == rowreq_ctx) {
		snmp_log(LOG_ERR, "memory allocation failed\n");
		return MFD_RESOURCE_UNAVAILABLE;
	}
	if(MFD_SUCCESS != trafficProcessorTable_indexes_set(rowreq_ctx
						   , trafficProcessorIndex
		   )) {
		snmp_log(LOG_ERR,"error setting index while loading "
				 "trafficProcessorTable data.\n");
		trafficProcessorTable_release_rowreq_ctx(rowreq_ctx);
	}

	shm_handler_create(pt_monitor_struct);

    /*
     * TODO:352:r: |   |-> populate trafficProcessorTable data context.
     * Populate data context here. (optionally, delay until row prep)
     */
   /*
    * TRANSIENT or semi-TRANSIENT data:
    * copy data or save any info needed to do it in row_prep.
    */
   /*
    * setup/save data for lineFramerFsmmtrb3s
    * lineFramerFsmmtrb3s(2)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.lineFramerFsmmtrb3s = pt_monitor_struct->tp_defects_struct.tp_line_framer_status.fields.fsmmtrb3s;

   /*
    * setup/save data for lineFramerFsmmtrb2s
    * lineFramerFsmmtrb2s(3)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.lineFramerFsmmtrb2s = pt_monitor_struct->tp_defects_struct.tp_line_framer_status.fields.fsmmtrb2s;

   /*
    * setup/save data for lineFramerFsmmtrb1s
    * lineFramerFsmmtrb1s(4)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.lineFramerFsmmtrb1s = pt_monitor_struct->tp_defects_struct.tp_line_framer_status.fields.fsmmtrb1s;

   /*
    * setup/save data for lineFramerFsmms
    * lineFramerFsmms(5)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.lineFramerFsmms = pt_monitor_struct->tp_defects_struct.tp_line_framer_status.fields.fsmms;
    
    /*
     * setup/save data for lineFramerSif
     * lineFramerSif(6)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
     */
    /** no mapping */
   rowreq_ctx->data.lineFramerSif = pt_monitor_struct->tp_defects_struct.tp_line_framer_status.fields.sif;
    
   /*
    * setup/save data for lineFramerSoof
    * lineFramerSoof(7)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.lineFramerSoof = pt_monitor_struct->tp_defects_struct.tp_line_framer_status.fields.soof;
    
    /*
     * setup/save data for lineFramerSlof
     * lineFramerSlof(8)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
     */
    /** no mapping */
   rowreq_ctx->data.lineFramerSlof = pt_monitor_struct->tp_defects_struct.tp_line_framer_status.fields.slof;
    
   /*
        * setup/save data for lineFramerFst
        * lineFramerFst(9)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
        */
       /** no mapping */
   rowreq_ctx->data.lineFramerFst = pt_monitor_struct->tp_defects_struct.tp_line_framer_status.fields.fst;

   /*
    * setup/save data for lineLosstatLosf
    * lineLosstatLosf(10)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.lineLosstatLosf = pt_monitor_struct->tp_defects_struct.tp_line_los_status.fields.losf;

   /*
    * setup/save data for lineSecmonFlom
    * lineSecmonFlom(11)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.lineSecmonFlom = pt_monitor_struct->tp_defects_struct.tp_line_section_mon.fields.flom;

   /*
    * setup/save data for lineSecmonBipsfs
    * lineSecmonBipsfs(12)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.lineSecmonBipsfs = pt_monitor_struct->tp_defects_struct.tp_line_section_mon.fields.bipsfs;

   /*
    * setup/save data for lineSecmonDiae
    * lineSecmonDiae(13)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.lineSecmonDiae = pt_monitor_struct->tp_defects_struct.tp_line_section_mon.fields.diae;

   /*
    * setup/save data for lineSecmonDbdi
    * lineSecmonDbdi(14)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.lineSecmonDbdi = pt_monitor_struct->tp_defects_struct.tp_line_section_mon.fields.dbdi;

   /*
    * setup/save data for lineSecmonLom
    * lineSecmonLom(15)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.lineSecmonLom = pt_monitor_struct->tp_defects_struct.tp_line_section_mon.fields.lom;

   /*
    * setup/save data for linePathmonAccstat
    * linePathmonAccstat(16)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.linePathmonAccstat = pt_monitor_struct->tp_defects_struct.tp_line_path_mon.fields.accstat;

   /*
    * setup/save data for linePathmonMsiunst
    * linePathmonMsiunst(17)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.linePathmonMsiunst = pt_monitor_struct->tp_defects_struct.tp_line_path_mon.fields.msiunst;

   /*
    * setup/save data for linePathmonDais
    * linePathmonDais(18)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.linePathmonDais = pt_monitor_struct->tp_defects_struct.tp_line_path_mon.fields.dais;

   /*
    * setup/save data for linePathmonDlck
    * linePathmonDlck(19)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.linePathmonDlck = pt_monitor_struct->tp_defects_struct.tp_line_path_mon.fields.dlck;

   /*
    * setup/save data for linePathmonDbdi
    * linePathmonDbdi(20)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.linePathmonDbdi = pt_monitor_struct->tp_defects_struct.tp_line_path_mon.fields.dbdi;

   /*
    * setup/save data for client1FramerFsmms
    * client1FramerFsmms(21)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client1FramerFsmms = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[0].fields.fsmms;

   /*
    * setup/save data for client1FramerFsusts
    * client1FramerFsusts(22)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client1FramerFsusts = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[0].fields.fsusts;
    
    /*
     * setup/save data for client1FramerSif
     * client1FramerSif(23)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
     */
    /** no mapping */
   rowreq_ctx->data.client1FramerSif = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[0].fields.sif;
    
   /*
    * setup/save data for client1FramerSoof
    * client1FramerSoof(24)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client1FramerSoof = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[0].fields.soof;
    
    /*
     * setup/save data for client1FramerSlof
     * client1FramerSlof(25)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
     */
    /** no mapping */
   rowreq_ctx->data.client1FramerSlof = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[0].fields.slof;
    
    /*
     * setup/save data for client1FramerFst
     * client1FramerFst(26)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
     */
    /** no mapping */
   rowreq_ctx->data.client1FramerFst = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[0].fields.fst;
    
   /*
    * setup/save data for client1LosstatLosf
    * client1LosstatLosf(27)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client1LosstatLosf = pt_monitor_struct->tp_defects_struct.tp_client_los_status[0].fields.losf;

   /*
    * setup/save data for client1SecmonFlom
    * client1SecmonFlom(28)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client1SecmonFlom = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[0].fields.flom;

   /*
    * setup/save data for client1SecmonBipsfs
    * client1SecmonBipsfs(29)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client1SecmonBipsfs = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[0].fields.bipsfs;

   /*
    * setup/save data for client1SecmonDiae
    * client1SecmonDiae(30)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client1SecmonDiae = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[0].fields.diae;

   /*
    * setup/save data for client1SecmonDbdi
    * client1SecmonDbdi(31)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client1SecmonDbdi = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[0].fields.dbdi;

   /*
    * setup/save data for client1SecmonLom
    * client1SecmonLom(32)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client1SecmonLom = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[0].fields.lom;

   /*
    * setup/save data for client1PathmonAccstat
    * client1PathmonAccstat(33)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client1PathmonAccstat = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[0].fields.accstat;

   /*
    * setup/save data for client1PathmonMsiunst
    * client1PathmonMsiunst(34)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client1PathmonMsiunst = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[0].fields.msiunst;

   /*
    * setup/save data for client1PathmonDais
    * client1PathmonDais(35)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client1PathmonDais = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[0].fields.dais;

   /*
    * setup/save data for client1PathmonDlck
    * client1PathmonDlck(36)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client1PathmonDlck = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[0].fields.dlck;

   /*
    * setup/save data for client1PathmonDbdi
    * client1PathmonDbdi(37)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client1PathmonDbdi = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[0].fields.dbdi;

   /*
    * setup/save data for client2FramerFsmms
    * client2FramerFsmms(38)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client2FramerFsmms = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[1].fields.fsmms;

   /*
    * setup/save data for client2FramerFsusts
    * client2FramerFsusts(39)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client2FramerFsusts = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[1].fields.fsusts;
    
    /*
     * setup/save data for client2FramerSif
     * client2FramerSif(40)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
     */
    /** no mapping */
   rowreq_ctx->data.client2FramerSif = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[1].fields.sif;
    
   /*
    * setup/save data for client2FramerSoof
    * client2FramerSoof(41)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client2FramerSoof = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[1].fields.soof;
    
    /*
     * setup/save data for client2FramerSlof
     * client2FramerSlof(42)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
     */
    /** no mapping */
   rowreq_ctx->data.client2FramerSlof = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[1].fields.slof;
    
    /*
     * setup/save data for client2FramerFst
     * client2FramerFst(43)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
     */
    /** no mapping */
   rowreq_ctx->data.client2FramerFst = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[1].fields.fst;
    
   /*
    * setup/save data for client2LosstatLosf
    * client2LosstatLosf(44)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client2LosstatLosf = pt_monitor_struct->tp_defects_struct.tp_client_los_status[1].fields.losf;

   /*
    * setup/save data for client2SecmonFlom
    * client2SecmonFlom(45)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client2SecmonFlom = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[1].fields.flom;

   /*
    * setup/save data for client2SecmonBipsfs
    * client2SecmonBipsfs(46)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client2SecmonBipsfs = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[1].fields.bipsfs;

   /*
    * setup/save data for client2SecmonDiae
    * client2SecmonDiae(47)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client2SecmonDiae = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[1].fields.diae;

   /*
    * setup/save data for client2SecmonDbdi
    * client2SecmonDbdi(48)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client2SecmonDbdi = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[1].fields.dbdi;

   /*
    * setup/save data for client2SecmonLom
    * client2SecmonLom(49)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client2SecmonLom = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[1].fields.lom;

   /*
    * setup/save data for client2PathmonAccstat
    * client2PathmonAccstat(50)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client2PathmonAccstat = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[1].fields.accstat;

   /*
    * setup/save data for client2PathmonMsiunst
    * client2PathmonMsiunst(51)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client2PathmonMsiunst = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[1].fields.msiunst;

   /*
    * setup/save data for client2PathmonDais
    * client2PathmonDais(52)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client2PathmonDais = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[1].fields.dais;

   /*
    * setup/save data for client2PathmonDlck
    * client2PathmonDlck(53)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client2PathmonDlck = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[1].fields.dlck;

   /*
    * setup/save data for client2PathmonDbdi
    * client2PathmonDbdi(54)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client2PathmonDbdi = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[1].fields.dbdi;

   /*
    * setup/save data for client3FramerFsmms
    * client3FramerFsmms(55)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client3FramerFsmms = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[2].fields.fsmms;

   /*
    * setup/save data for client3FramerFsusts
    * client3FramerFsusts(56)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client3FramerFsusts = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[2].fields.fsusts;
    
    /*
     * setup/save data for client3FramerSif
     * client3FramerSif(57)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
     */
    /** no mapping */
   rowreq_ctx->data.client3FramerSif = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[2].fields.sif;
    
   /*
    * setup/save data for client3FramerSoof
    * client3FramerSoof(58)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client3FramerSoof = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[2].fields.soof;
    
    /*
     * setup/save data for client3FramerSlof
     * client3FramerSlof(59)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
     */
    /** no mapping */
   rowreq_ctx->data.client3FramerSlof = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[2].fields.slof;
    
    /*
     * setup/save data for client3FramerFst
     * client3FramerFst(60)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
     */
    /** no mapping */
   rowreq_ctx->data.client3FramerFst = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[2].fields.fst;
    
   /*
    * setup/save data for client3LosstatLosf
    * client3LosstatLosf(61)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client3LosstatLosf = pt_monitor_struct->tp_defects_struct.tp_client_los_status[2].fields.losf;

   /*
    * setup/save data for client3SecmonFlom
    * client3SecmonFlom(62)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client3SecmonFlom = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[2].fields.flom;

   /*
    * setup/save data for client3SecmonBipsfs
    * client3SecmonBipsfs(63)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client3SecmonBipsfs = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[2].fields.bipsfs;

   /*
    * setup/save data for client3SecmonDiae
    * client3SecmonDiae(64)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client3SecmonDiae = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[2].fields.diae;

   /*
    * setup/save data for client3SecmonDbdi
    * client3SecmonDbdi(65)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client3SecmonDbdi = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[2].fields.dbdi;

   /*
    * setup/save data for client3SecmonLom
    * client3SecmonLom(66)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client3SecmonLom = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[2].fields.lom;

   /*
    * setup/save data for client3PathmonAccstat
    * client3PathmonAccstat(67)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client3PathmonAccstat = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[2].fields.accstat;

   /*
    * setup/save data for client3PathmonMsiunst
    * client3PathmonMsiunst(68)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client3PathmonMsiunst = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[2].fields.msiunst;

   /*
    * setup/save data for client3PathmonDais
    * client3PathmonDais(69)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client3PathmonDais = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[2].fields.dais;

   /*
    * setup/save data for client3PathmonDlck
    * client3PathmonDlck(70)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client3PathmonDlck = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[2].fields.dlck;

   /*
    * setup/save data for client3PathmonDbdi
    * client3PathmonDbdi(71)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client3PathmonDbdi = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[2].fields.dbdi;

   /*
    * setup/save data for client4FramerFsmms
    * client4FramerFsmms(72)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client4FramerFsmms = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[3].fields.fsmms;

   /*
    * setup/save data for client4FramerFsusts
    * client4FramerFsusts(73)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client4FramerFsusts = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[3].fields.fsusts;
    
    /*
     * setup/save data for client4FramerSif
     * client4FramerSif(74)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
     */
    /** no mapping */
   rowreq_ctx->data.client4FramerSif = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[3].fields.sif;
    
   /*
    * setup/save data for client4FramerSoof
    * client4FramerSoof(75)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client4FramerSoof = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[3].fields.soof;
    
    /*
     * setup/save data for client4FramerSlof
     * client4FramerSlof(76)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
     */
    /** no mapping */
   rowreq_ctx->data.client4FramerSlof = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[3].fields.slof;
    
    /*
     * setup/save data for client4FramerFst
     * client4FramerFst(77)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
     */
    /** no mapping */
   rowreq_ctx->data.client4FramerFst = pt_monitor_struct->tp_defects_struct.tp_client_framer_status[3].fields.fst;
    
   /*
    * setup/save data for client4LosstatLosf
    * client4LosstatLosf(78)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client4LosstatLosf = pt_monitor_struct->tp_defects_struct.tp_client_los_status[3].fields.losf;

   /*
    * setup/save data for client4SecmonFlom
    * client4SecmonFlom(79)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client4SecmonFlom = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[3].fields.flom;

   /*
    * setup/save data for client4SecmonBipsfs
    * client4SecmonBipsfs(80)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client4SecmonBipsfs = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[3].fields.bipsfs;

   /*
    * setup/save data for client4SecmonDiae
    * client4SecmonDiae(81)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client4SecmonDiae = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[3].fields.diae;

   /*
    * setup/save data for client4SecmonDbdi
    * client4SecmonDbdi(82)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client4SecmonDbdi = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[3].fields.dbdi;

   /*
    * setup/save data for client4SecmonLom
    * client4SecmonLom(83)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client4SecmonLom = pt_monitor_struct->tp_defects_struct.tp_client_section_mon[3].fields.lom;

   /*
    * setup/save data for client4PathmonAccstat
    * client4PathmonAccstat(84)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client4PathmonAccstat = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[3].fields.accstat;

   /*
    * setup/save data for client4PathmonMsiunst
    * client4PathmonMsiunst(85)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client4PathmonMsiunst = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[3].fields.msiunst;

   /*
    * setup/save data for client4PathmonDais
    * client4PathmonDais(86)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client4PathmonDais = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[3].fields.dais;

   /*
    * setup/save data for client4PathmonDlck
    * client4PathmonDlck(87)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client4PathmonDlck = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[3].fields.dlck;

   /*
    * setup/save data for client4PathmonDbdi
    * client4PathmonDbdi(88)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
    */
   /** no mapping */
   rowreq_ctx->data.client4PathmonDbdi = pt_monitor_struct->tp_defects_struct.tp_client_path_mon[3].fields.dbdi;
        
	/*
	 * insert into table container
	 */
	CONTAINER_INSERT(container, rowreq_ctx);

    DEBUGMSGT(("verbose:trafficProcessorTable:trafficProcessorTable_container_load",
               "inserted %d records\n", count));

    return MFD_SUCCESS;
} /* trafficProcessorTable_container_load */

/**
 * container clean up
 *
 * @param container container with all current items
 *
 *  This optional callback is called prior to all
 *  item's being removed from the container. If you
 *  need to do any processing before that, do it here.
 *
 * @note
 *  The MFD helper will take care of releasing all the row contexts.
 *
 */
void
trafficProcessorTable_container_free(netsnmp_container *container)
{
    DEBUGMSGTL(("verbose:trafficProcessorTable:trafficProcessorTable_container_free","called\n"));

    /*
     * TODO:380:M: Free trafficProcessorTable container data.
     */
} /* trafficProcessorTable_container_free */

/**
 * prepare row for processing.
 *
 *  When the agent has located the row for a request, this function is
 *  called to prepare the row for processing. If you fully populated
 *  the data context during the index setup phase, you may not need to
 *  do anything.
 *
 * @param rowreq_ctx pointer to a context.
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 */
int
trafficProcessorTable_row_prep( trafficProcessorTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:trafficProcessorTable:trafficProcessorTable_row_prep","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:390:o: Prepare row for request.
     * If populating row data was delayed, this is the place to
     * fill in the row for this request.
     */

    return MFD_SUCCESS;
} /* trafficProcessorTable_row_prep */

/** @} */