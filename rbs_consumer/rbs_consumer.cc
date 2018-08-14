/* User code: This file will not be overwritten by TASTE. */

#include "rbs_consumer.h"
#include <iostream>
#include <fstream>
#include <sstream>

std::ofstream csv;

void rbs_consumer_startup()
{
    csv.open (std::string()+__FILE__+".csv");
}

void rbs_consumer_PI_sample(const asn1SccBase_samples_RigidBodyState *IN_sample)
{
    std::stringstream ss;
	ss << IN_sample->position.data.arr[0] << " " << IN_sample->position.data.arr[1] << 
		" " << IN_sample->position.data.arr[2] << " " << IN_sample->orientation.im.arr[0] <<
		" " << IN_sample->orientation.im.arr[1] << " " << IN_sample->orientation.im.arr[2] <<
		" " << IN_sample->orientation.re;
    csv << ss.str() << "\n";
}

void rbs_consumer_PI_close()
{
    csv.close();
}

