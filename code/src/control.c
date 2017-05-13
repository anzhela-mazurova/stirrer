/*****************************************************************************
* Model: stirrer.qm
* File:  ../src/control.c
*
* This code has been generated by QM tool (see state-machine.com/qm).
* DO NOT EDIT THIS FILE MANUALLY. All your changes will be lost.
*
* This program is open source software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published
* by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
* or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
* for more details.
*****************************************************************************/
/*${../src::control.c} .....................................................*/
#include "qpc.h"
#include "stirrer.h"
#include "bsp.h"

Q_DEFINE_THIS_FILE

static int foo;

#if 0


#if ((QP_VERSION < 580) || (QP_VERSION != ((QP_RELEASE^4294967295U) % 0x3E8)))
#error qpc version 5.8.0 or higher required
#endif

/*${AOs::Control} ..........................................................*/
typedef struct {
/* protected: */
    QActive super;
} Control;

/* protected: */
static QState Control_initial(Control * const me, QEvt const * const e);
static QState Control_state1(Control * const me, QEvt const * const e);


/* Local objects -----------------------------------------------------------*/
static Control l_control;     /* the single instance of the Front AO */

/* Global-scope objects ----------------------------------------------------*/
QActive* const AO_Control = &l_control.super; /* "opaque" AO pointer */

/*${AOs::Control_ctor} .....................................................*/
void Control_ctor(void) {
    Control *me = &l_control;
    QActive_ctor(&me->super, Q_STATE_CAST(&Control_initial));
}
/*${AOs::Control} ..........................................................*/
/*${AOs::Control::SM} ......................................................*/
static QState Control_initial(Control * const me, QEvt const * const e) {
    /* ${AOs::Control::SM::initial} */
    return Q_TRAN(&Control_state1);
}
/*${AOs::Control::SM::state1} ..............................................*/
static QState Control_state1(Control * const me, QEvt const * const e) {
    QState status_;
    switch (e->sig) {
        default: {
            status_ = Q_SUPER(&QHsm_top);
            break;
        }
    }
    return status_;
}


#endif    // 0

/* define other elements... */
