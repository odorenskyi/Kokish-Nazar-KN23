#include <iostream>
#include "ModulesKokish_.h"

using namespace std;

bool getBoolResult(char a, char b)
{
    return (a + 10 >= b);
}

int getHexadecimal_16(int number)
{
    cout << hex;
    return number;
}

/*int getHexadecimal_08(int number)
{
    cout << oct;
    return number;
}*/

void printCopyright()
{
    system("chcp 1251 & cls");
    //system("chcp 65001 & cls");
    cout << " -----------------------------------------------\n\
| Nazar Kokish, CNTU, https://github.com/N-Kokish |\n\
| Ќазар  ок≥ш, ÷Ќ“”, https://github.com/N-Kokish  |\n\
 ------------ © All rights reserved ------------\n"<<endl;
}

int main()
{
    setlocale(LC_ALL,"UA");

    int x;
    cout << "”вед≥ть x: ";
    cin >> x;

    int y;
    cout << "”вед≥ть y: ";
    cin >> y;

    int z;
    cout << "”вед≥ть z: ";
    cin >> z;

    char a;
    cout << "”вед≥ть a: ";
    cin >> a;

    char b;
    cout << "”вед≥ть b: ";
    cin >> b;
    printCopyright();


    cout << "\n" << "–езультат лог≥чного виразу: " << getBoolResult(a, b) << endl;
    cout << "\nx (в дес€тков≥й): " << x << "\ny (в дес€тков≥й): " << y << "\nz (в дес€тков≥й): " << z << endl;
    cout << "\nx (в ш≥стнадц€тков≥й): " << getHexadecimal_16(x) << "\ny (в ш≥стнадц€тков≥й): " << getHexadecimal_16(y) << "\nz (в ш≥стнадц€тков≥й): " << getHexadecimal_16(z) << endl;
    s_calculation(x, y, z);

    return 0;
}
