#pragma once

class IVehicle
{
public:
	IVehicle(void);
	virtual ~IVehicle() = 0;

	virtual std::string travel( int distance );

protected:
	int distance;
	std::string name;
	char symbol;
};
