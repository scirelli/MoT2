#pragma once
#include "IVehicle.h"
#include "IVehicle.h"
#include "Plane.h"
#include "Car.h"
#include "NullVehicle.h"

class VehicleFactory
{
public:
	static IVehicle* getVehicle( const std::string &vehicleName );
};
