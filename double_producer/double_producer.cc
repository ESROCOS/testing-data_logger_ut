/* User code: This file will not be overwritten by TASTE. */

#include "double_producer.h"

int n_cycles = 50000;
int i_cycle = 0;

void double_producer_startup()
{
    i_cycle = 0;
}

void double_producer_PI_trigger()
{
    double val = sin((double)i_cycle / (double)n_cycles);
    double_producer_RI_dispatch(val);
}

