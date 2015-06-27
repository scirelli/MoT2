#pragma once
#include "ivehicle.h"

class CNullVehicle :
	public IVehicle
{
public:
	CNullVehicle(void);
public:
	~CNullVehicle(void);

	std::string travel( int distance );
};
