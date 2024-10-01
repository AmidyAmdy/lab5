#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    cout << "Menu" << endl;
    cout << "1 - Add a Furniture" << endl;
    cout << "2 - Add a Worker" << endl;
    cout << "3 - Add a Car" << endl;
    cout << "4 - Delete Furniture" << endl;
    cout << "5 - Delete Workers" << endl;
    cout << "6 - Delete Cars" << endl;
    cout << "7 - Save in file" << endl;
    cout << "8 - Load from file" << endl;
    cout << "9 - Quit" << endl;

    while (1)
    {
        switch (_getch())
        {
        case '1':

            break;

        case '2':

            break;

        case '3':

            break;

        case '4':

            break;

        case '5':

            break;

        case '6':

            break;

        case '7':
            cout << "Exiting program.";
            return 0;
            break;

        default:
            cout << "You pressed a wrong button. Try again" << endl;
            break;
        }
    }
}