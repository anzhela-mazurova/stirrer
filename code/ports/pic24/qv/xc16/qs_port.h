/**
* @file
* @brief QS/C port to a PIC24 CPU and xc16 compiler.
* @ingroup qs
* @cond
******************************************************************************
* Last updated for version 5.6.0
* Last updated on  04MAR2017
*
*
* Contact information:
* mailto:mazurov@gmail.com
******************************************************************************
* @endcond
*/
#ifndef qs_port_h
#define qs_port_h

/* QS time-stamp size in bytes */
#define QS_TIME_SIZE     4

/* object pointer size in bytes */
#define QS_OBJ_PTR_SIZE  2

/* function pointer size in bytes */
#define QS_FUN_PTR_SIZE  2

/*****************************************************************************
* NOTE: QS might be used with or without other QP components, in which
* case the separate definitions of the macros QF_CRIT_STAT_TYPE,
* QF_CRIT_ENTRY, and QF_CRIT_EXIT are needed. In this port QS is configured
* to be used with the other QP component, by simply including "qf_port.h"
* *before* "qs.h".
*/
#include "qf_port.h" /* use QS with QF */
#include "qs.h"      /* QS platform-independent public interface */

#endif /* qs_port_h */
