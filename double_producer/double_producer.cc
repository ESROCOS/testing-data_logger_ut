#include "double_producer.h"
#include <math.h>
#include <iostream>

#define N_SAMPLES 4000
#define TARGET 2*M_PI
#define STEP TARGET/N_SAMPLES
double i_sample;

void double_producer_startup()
{
    i_sample = 0;
}

void double_producer_PI_trigger()
{
	if(i_sample < N_SAMPLES){
    	double val = sin(STEP * i_sample++);
    	std::cout << "double_producer: " << i_sample << "/" << N_SAMPLES << std::endl;
    	double_producer_RI_dispatch(&val);
    }
}
