/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_motion2d_producer__
#define __USER_CODE_H_motion2d_producer__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void motion2d_producer_startup();

void motion2d_producer_PI_trigger();

extern void motion2d_producer_RI_dispatch_motion_command(const asn1SccBase_commands_Motion2D *);

#ifdef __cplusplus
}
#endif


#endif
