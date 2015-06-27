#include "StdAfx.h"
#include "Main.h"
#include "VehicleFactory.h"

Main::Main(void){
	this->pVehicle = NULL;
}

Main::~Main(void){
	if( this->pVehicle != NULL )
		delete this->pVehicle;
}

#define PLANE 1
#define CAR   2

void Main::questionUser(){
	unsigned int choice=0, distance=0;
	string output;
	
	cout << "Would you like to travel by:\n\t1. Plane\n\t2. Car\nEnter choice: ";
	cin >> choice;
	cout << "\n\nHow far would you like to travel?\nEnter choice: ";
	cin >> distance;

	switch( choice ){
		case PLANE:
		{
			this->pVehicle = VehicleFactory::getVehicle("Plane");
			break;
		}
		case CAR:
		{
			this->pVehicle = VehicleFactory::getVehicle("Car");
			break;
		}
		default:
			cout << choice << " is not a valid choice!" << endl;
			this->pVehicle = VehicleFactory::getVehicle( "" );
	}

	output = this->pVehicle->travel( distance );
	cout << "\n\nYour journey [" << output << "]" << endl;
}