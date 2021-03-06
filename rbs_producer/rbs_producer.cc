/* User code: This file will not be overwritten by TASTE. */

#include "rbs_producer.h"
#include <math.h>
#include <iostream>

#define N_SAMPLES 2000
#define TARGET 4*M_PI
#define STEP TARGET/N_SAMPLES
int i_sample;

void rbs_producer_startup()
{
    i_sample = 0;
}

void rbs_producer_PI_trigger()
{
    if(i_sample < N_SAMPLES){
    	asn1SccBase_samples_RigidBodyState val;
        asn1SccBase_samples_RigidBodyState_Initialize(&val);
        val.position.data.nCount = 3;
    	val.position.data.arr[0] = cos(STEP * i_sample);
    	val.position.data.arr[1] = sin(STEP * i_sample);
    	val.position.data.arr[2] = ((double)i_sample/N_SAMPLES);
        val.orientation.im.nCount = 3;
    	val.orientation.im.arr[0] = cos(STEP * i_sample);
    	val.orientation.im.arr[1] = cos(0.5+STEP * i_sample);
    	val.orientation.im.arr[2] = cos(1.0+STEP * i_sample++);
    	val.orientation.re = 1;
        if((i_sample % 100) == 0){
    	   std::cout << "rbs_producer: " << i_sample << "/" << N_SAMPLES << std::endl;
        }
    	rbs_producer_RI_dispatch(&val);
    }
}

