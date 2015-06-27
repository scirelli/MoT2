#include "StdAfx.h"
#include "NullVehicle.h"

CNullVehicle::CNullVehicle(void)
{
}

CNullVehicle::~CNullVehicle(void)
{
}

std::string CNullVehicle::travel( int distance ){
	std::string rtn = "Could not find a vehicle of that type.";
	
	return rtn;
}