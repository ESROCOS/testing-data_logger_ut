/* User code: This file will not be overwritten by TASTE. */

#include "double_consumer.h"
#include <iostream>
#include <fstream>

std::ofstream csv;

void double_consumer_startup()
{
    csv.open (std::string()+__FILE__+".csv");
}

void double_consumer_PI_sample(const asn1SccT_Double *IN_sample)
{
    csv << *IN_sample << "\n";
}

void double_consumer_PI_close()
{
	csv.close();
}


