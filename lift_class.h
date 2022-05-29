#pragma once
#include <iostream>
using namespace std;

class liftClass
{
private:
	int minFloor = 1;
	int maxFloor;
	int floorForNow = 1;
	
public: 
	bool working;

	void setFloor(int floor);
	void setMaxFloor();
	void printFloorForNow();
	void controlLift();
	void setFirstFloor();
};

