#pragma once
#include "IVehicle.h"

using namespace std;

class Main
{
public:
	Main(void);
public:
	~Main(void);

	void questionUser();

private:
	IVehicle *pVehicle;
};
