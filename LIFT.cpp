#include <iostream>
#include <Windows.h>
#include "lift_class.h"
using namespace std;

const int firstFloor = 1;



int main()
{
    cout << "Hello World!\n";
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << endl;
    cout << "Добро пожаловать в программу управлением лифтом." << endl;
    liftClass lift;
    int choice;
    bool maxFloorIsSet = false;
    cout << "Выберите команду из списка: " << endl
        << "1 - включить/выключить лифт; 2 - задать номер верхнего этажа; 3 - управлять перемещением лифта; 4 - вернуть лифт на первый этаж; 5 - вывод текущего положения лифта; 6 - выход из программы." << endl
        << "Состояние лифта на данный момент: ";
    if (lift.working) 
    { 
        cout << "включён."; 
    }
    else 
    { 
        cout << "выключен."; 
    }
    do {
        cout << "\nВведите команду: ";
        cin >> choice;
        cout << '\n';
        switch (choice)
        {
        case 1: 
        {
            if (!lift.working)
            {
                lift.working = true;
                cout << "Лифт включён." << endl;
            }
            else 
            { 
                lift.working = false;
                cout << "Лифт выключён." << endl; 
            }
            break;
        }
        case 2: 
        {
            lift.setMaxFloor();
            maxFloorIsSet = true;
            break;
        }
        case 3: 
        { 
            if (!maxFloorIsSet)
            {
                cout << "Номер верхнего этажа не задан! Чтобы задать номер верхнего этажа введите команду \"2\"." << endl;
            }
            if (!lift.working)
            {
                cout << "Лифт выключен, необходимо его включить." << endl;
            }
            if (maxFloorIsSet && lift.working)
            {
                lift.controlLift();
            }
            break;
        }
        case 4: 
        {
            lift.setFirstFloor();
            break;
        }
        case 5: 
        {
            cout << "В настоящий момент времени лифт на ";
            lift.printFloorForNow();
            cout << " этаже." << endl;
            break;
        }
        case 6: 
        {
            cout << "Выход из программы..." << endl; 
            break;
        }
        default: 
        { 
            cout << "Такой команды нет.";
            break;
        }
        }
    } while (choice != 6);
}
