/* User code: This file will not be overwritten by TASTE. */

#include "motion2d_consumer.h"
#include <iostream>
#include <fstream>
#include <sstream>

std::ofstream csv;

void motion2d_consumer_startup()
{
    csv.open (std::string()+__FILE__+".csv");
}

void motion2d_consumer_PI_sample(const asn1SccBase_commands_Motion2D *IN_sample)
{
	std::stringstream ss;
	ss << IN_sample->translation << " " << IN_sample->rotation << " " << IN_sample->heading.rad;
    csv << ss.str() << "\n";
}

void motion2d_consumer_PI_close()
{
	csv.close();
}

