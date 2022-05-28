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
		cout << "������� ����� �������� �����: ";
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

	void setFirstFloor()
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
};

