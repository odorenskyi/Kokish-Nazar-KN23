#include <iostream>
#include "ModulesKokish_.h"
using namespace std;
void testThirdTask(int test_case, unsigned int x, unsigned int expected) {
    cout << "Тест-кейс №" << test_case << endl;
    cout << "Вхідні дані:\nN: " << x << endl;

    unsigned int result = bit_12(x);
    cout << "Результат: " << result << endl;

    if (result == expected) {
        cout << "Статус тест-кейса: passed" << endl;
    } else {
        cout << "Статус тест-кейса: failed" << endl;
    }

    cout << endl;
}


int main()
{


    cout << "\n\n9.1\n" << endl;
    Assessment(5);
    Assessment(36);
    Assessment(62);
    Assessment(68);
    Assessment(76);
    Assessment(83);
    Assessment(91);
    Assessment(0);
    Assessment(111);
    Assessment(1);
    cout << "\n\n9.2\n" << endl;
    temperature_average(1, 1, 1, 1, 1, 1, 1 );
    temperature_average(0, 0, 0, 0, 0, 0, 0 );
    temperature_average(5, 2, 7, 21, 21, 35, 49 );
    temperature_average(27, 28, 29, 27, 28, 29, 35 );
    temperature_average(4, 15, 19, 17, 25, 32, 35 );
    temperature_average(-8, -15, -25, -63, -1, -7, -7 );
    temperature_average(-8, -8, 9, 6, 3, 5, -14 );
    temperature_average(-8, -8, 9, 99, 3, 5, -14 );
    temperature_average(111, 120, 350, 0, -14, -35, -49 );
    temperature_average(7, 7, 7, -7, -7, -7, 126 );
    cout << "\n\n9.3\n" << endl;
    testThirdTask(1, 17948359, 14);
    testThirdTask(2, 1840999, 20);
    testThirdTask(3, 4116662, 19);
    testThirdTask(4, 1220212, 11);
    testThirdTask(5, 1333330, 8);
    testThirdTask(6, 400000, 6);
    testThirdTask(7, 4222222, 9);
    testThirdTask(8, 5322156, 21);
    testThirdTask(9, 2923248, 11);
    testThirdTask(10,5222251, 16);




    return 0;
}
