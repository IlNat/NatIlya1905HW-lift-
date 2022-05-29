#include "lift_class.h"
using namespace std;


void liftClass::setFloor(int floor)
{
	floorForNow = floor;
}

void liftClass::setMaxFloor()
{
	cout << "Введите номер верхнего этажа: ";
	cin >> maxFloor;
}

void liftClass::printFloorForNow()
{
	cout << floorForNow;
}

void liftClass::controlLift()
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

void liftClass::setFirstFloor()
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
