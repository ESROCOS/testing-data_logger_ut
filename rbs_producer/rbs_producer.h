/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_rbs_producer__
#define __USER_CODE_H_rbs_producer__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void rbs_producer_startup();

void rbs_producer_PI_trigger();

extern void rbs_producer_RI_dispatch(const asn1SccBase_samples_RigidBodyState *);

#ifdef __cplusplus
}
#endif


#endif
