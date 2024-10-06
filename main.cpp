#include <iostream>
#include <conio.h>
#include <string>
#include "keeper.h"
#include "worker.h"
#include "furniture.h"
#include "exceptions.h"
#include "car.h"
using namespace std;

int main()
{
    string str1;
    string str2;
    string str3;
    string str4;
    int num1;
    double double1;
    double double2;
    double double3;

    Keeper keeper;

    cout << "Menu" << endl;
    cout << "1 - Add a Furniture" << endl;
    cout << "2 - Add a Worker" << endl;
    cout << "3 - Add a Car" << endl;
    cout << "4 - Delete Furniture" << endl;
    cout << "5 - Delete Workers" << endl;
    cout << "6 - Delete Cars" << endl;
    cout << "7 - Save to file" << endl;
    cout << "8 - Load from file" << endl;
    cout << "9 - Print Factory" << endl;
    cout << "0 - Quit" << endl;

    while (1)
    {
        switch (_getch())
        {
        case '1':
            cout << "\nAdding a furniture:" << endl;
            cout << "Type: ";
            cin >> str1;
            cout << "\nHeight: ";
            cin >> double1;
            cout << "\nWeight: ";
            cin >> double2;
            cout << "\nDepth: ";
            cin >> double3;
            cout << "\nColor: ";
            cin >> str2;
            cout << "\nMaterial: ";
            cin >> str3;
            cout << "\nPrice: ";
            cin >> num1;

            keeper.add(new Furniture(str1, double1, double2, double3, str2, str3, num1));
            break;

        case '2':
            cout << "\nAdding a worker" << endl;
            cout << "Name: ";
            cin >> str1;
            cout << "\nPosition: ";
            cin >> str2;
            cout << "\nSalary: ";
            cin >> num1;
            cout << "\nAddress: ";
            cin >> str3;
            cout << "\nPhone number: ";
            cin >> str4;

            keeper.add(new Worker(str1, str2, num1, str3, str4));
            break;

        case '3':
            cout << "\nAdding a car" << endl;
            cout << "Mark: ";
            cin >> str1;
            cout << "\nModel: ";
            cin >> str2;
            cout << "\nNum: ";
            cin >> str3;

            keeper.add(new Car(str1, str2, str3));
            break;

        case '4':
            keeper.remove("Furniture");
            break;

        case '5':
            keeper.remove("Worker");
            break;

        case '6':
            keeper.remove("Car");
            break;

        case '7':
            keeper.saveToFile();
            break;

        case '8':
            try
            {
                if (!keeper)
                {
                    cout << "Loaded successfully!" << endl;
                }
            }
            catch (const FileOpenException &e)
            {
                cerr << e.what() << endl;
            }
            catch (const exception &e)
            {
                cerr << "Unknown error: " << e.what() << endl;
            }
            break;

        case '9':
            keeper.print_all();
            break;

        case '0':
            cout << "\nExiting program.";
            return 0;
            break;

        default:
            cout << "\nYou pressed a wrong button. Try again" << endl;
            break;
        }
    }
}

/*
"C:\MinGW\bin\g++.exe" -fdiagnostics-color=always -g "C:\Users\Dmitry\Desktop\Programming\CPP\lab5\main.cpp" "C:\Users\Dmitry\Desktop\Programming\CPP\lab5\keeper_methods.cpp" "C:\Users\Dmitry\Desktop\Programming\CPP\lab5\methods.cpp" -o "C:\Users\Dmitry\Desktop\Programming\CPP\lab5\main.exe"
*/