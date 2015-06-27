#include "StdAfx.h"
#include "IVehicle.h"

IVehicle::IVehicle(void)
{}

IVehicle::~IVehicle(void)
{}

std::string IVehicle::travel( int distance ){
	std::string rtn;
	rtn.append( distance, this->symbol );
	return rtn;
}