#include <iostream>
#include <conio.h>
#include "ModulesKokish_.h"
using namespace std;

int main(){
    system("chcp 65001 & cls");
    char function_choice;
    do {
        printCopyright() ;
        cout << "Оберіть функцію, що бажаєте виконати (\"h\", \"f\", \"d\", \"s\"): ";
        cin >> function_choice;
        cout << endl;
    switch (function_choice) {
            case 'h': {
                int x;
                cout << "x: ";
                cin >> x;

                int y;
                cout << "y: ";
                cin >> y;

                int z;
                cout << "z: ";
                cin >> z;
                cout << "Результат функції s_calculation(): ";
                s_calculation(x, y, z);
                break;
            }
            case 'f': {
                int x;
                cout << "x: ";
                cin >> x;

                cout << "Результат функції 9.1: ";
                Assessment(x);
                break;
            }
            case 'd': {
                int m, t, w, th, fr, s, sn;
                cout << "Введіть температуру понеділка: " << endl;
                cin >> m;
                cout << "Введіть температуру вівторка: " << endl;
                cin >> t;
                cout << "Введіть температуру середи: " << endl;
                cin >> w;
                cout << "Введіть температуру четверга: " << endl;
                cin >> th;
                cout << "Введіть температуру п\'ятниці: " << endl;
                cin >> fr;
                cout << "Введіть температуру суботи: " << endl;
                cin >> s;
                cout << "Введіть температуру неділі : " << endl;
                cin >> sn;
                temperature_average( m,  t, w, th, fr, s, sn);
                break;
                }
            case 's': {
                unsigned int x;
                cout << "x: ";
                cin >> x;

                cout << "Результат функції 9.3: " << bit_12(x) << endl;
                break;
            }
            default: {
                cout << "\aВи вказали неіснуючу функцію, спробуйте ще раз!" << endl;
                break;
            }


        }
        cout << "\nНатисніть \"a\" або \"A\" або \"p\" для завершення  виконання програми інакше для повтору виконання програми";
        function_choice = getch();
    } while (function_choice != 'a' || function_choice != 'A' || function_choice != 'p');

    return 0;
}



