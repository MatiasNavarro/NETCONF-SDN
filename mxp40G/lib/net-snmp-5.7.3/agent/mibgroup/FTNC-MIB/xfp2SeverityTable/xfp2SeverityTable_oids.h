/*
 * Note: this file originally auto-generated by mib2c using
 *  $
 *
 * $Id:$
 */
#ifndef XFP2SEVERITYTABLE_OIDS_H
#define XFP2SEVERITYTABLE_OIDS_H

#ifdef __cplusplus
extern "C" {
#endif


/* column number definitions for table xfp2SeverityTable */
#define XFP2SEVERITYTABLE_OID              1,3,6,1,4,1,43484,1,1,3,5,2


#define COLUMN_XFP2SEVERITYINDEX         1
    
#define COLUMN_XFP2SEVERITYPRESENCE         2
#define COLUMN_XFP2SEVERITYPRESENCE_FLAG    (0x1 << 0)
    
#define COLUMN_XFP2SEVERITYRXLOSS         3
#define COLUMN_XFP2SEVERITYRXLOSS_FLAG    (0x1 << 1)
    
#define COLUMN_XFP2SEVERITYREADY         4
#define COLUMN_XFP2SEVERITYREADY_FLAG    (0x1 << 2)
    
#define COLUMN_XFP2SEVERITYTXPOWER         5
#define COLUMN_XFP2SEVERITYTXPOWER_FLAG    (0x1 << 3)
    
#define COLUMN_XFP2SEVERITYRXPOWER         6
#define COLUMN_XFP2SEVERITYRXPOWER_FLAG    (0x1 << 4)
    
#define COLUMN_XFP2SEVERITYTEMPERATURE         7
#define COLUMN_XFP2SEVERITYTEMPERATURE_FLAG    (0x1 << 5)
    
#define COLUMN_XFP2SEVERITYLOWTXPOWER         8
#define COLUMN_XFP2SEVERITYLOWTXPOWER_FLAG    (0x1 << 6)
    
#define COLUMN_XFP2SEVERITYHIGHTXPOWER         9
#define COLUMN_XFP2SEVERITYHIGHTXPOWER_FLAG    (0x1 << 7)
    
#define COLUMN_XFP2SEVERITYLOWRXPOWER         10
#define COLUMN_XFP2SEVERITYLOWRXPOWER_FLAG    (0x1 << 8)
    
#define COLUMN_XFP2SEVERITYHIGHRXPOWER         11
#define COLUMN_XFP2SEVERITYHIGHRXPOWER_FLAG    (0x1 << 9)
    
#define COLUMN_XFP2SEVERITYRXCDRLOSSOFLOCK         12
#define COLUMN_XFP2SEVERITYRXCDRLOSSOFLOCK_FLAG    (0x1 << 10)
    
#define COLUMN_XFP2SEVERITYTXCDRLOSSOFLOCK         13
#define COLUMN_XFP2SEVERITYTXCDRLOSSOFLOCK_FLAG    (0x1 << 11)
    
#define COLUMN_XFP2SEVERITYLASERFAULT         14
#define COLUMN_XFP2SEVERITYLASERFAULT_FLAG    (0x1 << 12)
    

#define XFP2SEVERITYTABLE_MIN_COL   COLUMN_XFP2SEVERITYPRESENCE
#define XFP2SEVERITYTABLE_MAX_COL   COLUMN_XFP2SEVERITYLASERFAULT
    

    /*
     * TODO:405:r: Review XFP2SEVERITYTABLE_SETTABLE_COLS macro.
     * OR together all the writable cols.
     */
#define XFP2SEVERITYTABLE_SETTABLE_COLS (COLUMN_XFP2SEVERITYPRESENCE_FLAG | COLUMN_XFP2SEVERITYRXLOSS_FLAG | COLUMN_XFP2SEVERITYREADY_FLAG | COLUMN_XFP2SEVERITYTXPOWER_FLAG | COLUMN_XFP2SEVERITYRXPOWER_FLAG | COLUMN_XFP2SEVERITYTEMPERATURE_FLAG | COLUMN_XFP2SEVERITYLOWTXPOWER_FLAG | COLUMN_XFP2SEVERITYHIGHTXPOWER_FLAG | COLUMN_XFP2SEVERITYLOWRXPOWER_FLAG | COLUMN_XFP2SEVERITYHIGHRXPOWER_FLAG | COLUMN_XFP2SEVERITYRXCDRLOSSOFLOCK_FLAG | COLUMN_XFP2SEVERITYTXCDRLOSSOFLOCK_FLAG | COLUMN_XFP2SEVERITYLASERFAULT_FLAG)

#ifdef __cplusplus
}
#endif

#endif /* XFP2SEVERITYTABLE_OIDS_H */
