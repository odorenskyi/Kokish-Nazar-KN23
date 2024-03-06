#include <iostream>
#include <locale.h>
#include "ModulesKokish_.h"

using namespace std;

int main()
{
     setlocale(LC_ALL,"UA");
    cout << "TC_01: ";
    s_calculation(10, 5, 2);
    cout << "TC_02: ";
    s_calculation(15, 3 ,6);
    cout << "TC_03: ";
    s_calculation(20, 4, 1);
    cout << "TC_04: ";
    s_calculation(25, 5, 3);
    cout << "TC_05: ";
    s_calculation(30, 6, 2);
    cout << "TC_06: ";
    s_calculation(35, 7, 5);
    cout << "TC_07: ";
    s_calculation(40, 8, 1);
    cout << "TC_08: ";
    s_calculation(45, 9, 3);
    cout << "TC_09: ";
    s_calculation(50, 5, 2);
    cout << "TC_10: ";
    s_calculation(5, 11, 4);
    return 0;
}
