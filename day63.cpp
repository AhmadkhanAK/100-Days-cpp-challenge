#include<iostream>
using namespace std;

class LandVehicle {
	float fuel;

public:
	LandVehicle(float f = 1000) :fuel(f) {
		cout << "Land Vehicle's Constructor\n";
}

	float getFuel() {
		return fuel;
	}
	float getCoverableDistance() {
		return fuel * 20.0;
	}
};
class AirVehicle {
	float battery;
public:
	AirVehicle(float b = 100) :battery(b) {
		cout << "Air Vehicle's Constructor\n";
	}
	float getBattery() {
		return battery;
	}
	float getCoverableDistance() {
		return battery * 10.0;
	}
};
class FlyingCar: public LandVehicle,public AirVehicle {public:
	FlyingCar(float fuel = 1000, float battery = 100) :LandVehicle(fuel), AirVehicle(battery){
		cout << "Flying Car's Constructor\n";
	}
};
int main()
{
	FlyingCar flyingCar;

	 //Doesn't work because FlyingCar::getCoverableDistance() is ambiguous
	cout << flyingCar.getCoverableDistance() << endl;
              
	cout << flyingCar.LandVehicle::getCoverableDistance() << endl;
	cout << flyingCar.AirVehicle::getCoverableDistance() << endl;
	
	return 0;
}
