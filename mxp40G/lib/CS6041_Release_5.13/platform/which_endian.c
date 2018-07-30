/***********************************************************************/
/* This file contains unpublished documentation and software           */ 
/* proprietary to Cortina Systems Incorporated. Any use or disclosure, */
/* in whole or in part, of the information in this file without a      */
/* written consent of an officer of Cortina Systems Incorporated is    */
/* strictly prohibited.                                                */
/* Copyright (c) 2002-2014 by Cortina Systems Incorporated.            */
/***********************************************************************/
/*
 * which_endian.c
 *
 * Simple test to determine endian-ness of the machine.
 *
 * $Id: which_endian.c,v 1.3 2014/03/20 15:28:15 ktleinfe Exp $
 */

/*
 * To force the driver to use big-endian or little-endian(for eg.,
 * when using a cross-compiler), set the appropriate flag below to 
 * a 1. This will by-pass the endian-ness test.
 */
#define CS_FLAG_BIG_ENDIAN		0
#define CS_FLAG_LITTLE_ENDIAN		0

main()
{
 unsigned short int  val = 0x2211 ;
 char low_byte = ((char *)&val)[0] ;

#if CS_FLAG_BIG_ENDIAN
 printf("CS_BIG_ENDIAN") ;
 return ;
#endif

#if CS_FLAG_LITTLE_ENDIAN
 printf("CS_LITTLE_ENDIAN") ;
 return ;
#endif

 if (low_byte == 0x22) {
    printf("CS_BIG_ENDIAN") ;
 }
 else {
    printf("CS_LITTLE_ENDIAN") ;
 }
}

