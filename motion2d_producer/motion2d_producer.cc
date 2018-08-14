/* User code: This file will not be overwritten by TASTE. */
#include "motion2d_producer.h"
#include <math.h>
#include <iostream>

#define N_SAMPLES 1000
#define TARGET 2*M_PI
#define STEP TARGET/N_SAMPLES
double i_sample;

void motion2d_producer_startup()
{
    i_sample = 0;
}

void motion2d_producer_PI_trigger()
{
    if(i_sample < N_SAMPLES){
    	asn1SccBase_commands_Motion2D val;
    	val.translation = sin(STEP * i_sample);
    	val.rotation = 0.5+sin(STEP * i_sample);
    	val.heading.rad = 1+sin(STEP * i_sample++);
    	std::cout << "motion2d_producer: " << i_sample << "/" << N_SAMPLES << std::endl;
    	motion2d_producer_RI_dispatch_motion_command(&val);
    }
}

