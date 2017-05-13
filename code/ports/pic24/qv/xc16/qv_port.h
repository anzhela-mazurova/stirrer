/**
* @file
* @brief QV/C port to PIC24 xc16
* @cond
******************************************************************************
* Last Updated for Version: 5.8.1
* Date of the Last Update:  04MAR2017
*
* Contact information:
* mailto:mazurov@gmail.com
******************************************************************************
* @endcond
*/
#ifndef qv_port_h
#define qv_port_h

#include <xc.h>



    /* macro to put the CPU to sleep inside QV_onIdle() */
    #define QV_CPU_SLEEP() do { \
        Sleep(); \
        QF_INT_ENABLE(); \
    } while (0)


    /* initialization of the QV kernel for Cortex-M3/M4/M4F */
    #define QV_INIT() QV_init()
    void QV_init(void);

#include "qv.h" /* QV platform-independent public interface */

#endif /* qv_port_h */
