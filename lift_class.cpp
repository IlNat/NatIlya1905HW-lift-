#include "lift_class.h"
using namespace std;


void liftClass::setFloor(int floor)
{
	floorForNow = floor;
}

void liftClass::setMaxFloor()
{
	cout << "������� ����� �������� �����: ";
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
		cout << "������� ���� ��...\n";
		cin >> floor;
		if (floor < 1 || floor > maxFloor || floor == floorForNow)
		{
			cout << "����������� ����� ����� �����. ��������� ����.\n";
		}
		else
		{
			setFloor(floor);
			cout << "� ��������� ������ ������� ���� �� ";
			printFloorForNow();
			cout << " �����." << endl;
		}
	} while (floor < 0 && floor > maxFloor && floor == floorForNow);
}

void liftClass::setFirstFloor()
{
	if (floorForNow == 1)
	{
		cout << "���� � ��� ��������� �� ������ �����." << endl;
	}
	else
	{
		floorForNow = 1;
		cout << "���� ��������� �� 1 �����." << endl;
	}
}
