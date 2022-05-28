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

	bool checkSettingFloor(int floor) 
	{

	}

	void setFloor(int floor) 
	{ 
		floorForNow = floor; 
	}

	void setMaxFloor() 
	{
		cout << "Введите номер верхнего этажа: ";
		cin >> maxFloor;
	}

	void printFloorForNow() 
	{ 
		cout << floorForNow; 
	}

	void controlLift()
	{
		int floor;
		do {
			cout << "Вызвать лифт на...\n";
			cin >> floor;
			if (floor < 1 || floor > maxFloor || floor == floorForNow)
			{
				cout << "Неправильно введён номер этажа. Повторите ввод.\n";
			}
			else
			{
				setFloor(floor);
				cout << "В настоящий момент времени лифт на ";
				printFloorForNow();
				cout << " этаже." << endl;
			}
		} while (floor < 0 && floor > maxFloor && floor == floorForNow);
	}

	void setFirstFloor()
	{
		if (floorForNow == 1)
		{
			cout << "Лифт и так находится на первом этаже." << endl;
		}
		else 
		{
			floorForNow = 1;
			cout << "Лифт находится на 1 этаже." << endl;
		}
	}
};

