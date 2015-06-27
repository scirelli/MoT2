#include "StdAfx.h"
#include "VehicleFactory.h"

IVehicle* VehicleFactory::getVehicle( const std::string &vehicleName ){
	IVehicle *pVrtn;

	if( vehicleName.compare("Plane") == 0){
		pVrtn = new CPlane;
	}else if( vehicleName.compare("Car") == 0){
		pVrtn = new CCar;
	}else{
		pVrtn = new CNullVehicle;
	}

	return pVrtn;
}