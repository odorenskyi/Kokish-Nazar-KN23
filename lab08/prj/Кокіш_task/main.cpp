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
| ����� ����, ����, https://github.com/N-Kokish  |\n\
 ------------ � All rights reserved ------------\n"<<endl;
}

int main()
{
    setlocale(LC_ALL,"UA");

    int x;
    cout << "������ x: ";
    cin >> x;

    int y;
    cout << "������ y: ";
    cin >> y;

    int z;
    cout << "������ z: ";
    cin >> z;

    char a;
    cout << "������ a: ";
    cin >> a;

    char b;
    cout << "������ b: ";
    cin >> b;
    printCopyright();


    cout << "\n" << "��������� �������� ������: " << getBoolResult(a, b) << endl;
    cout << "\nx (� ���������): " << x << "\ny (� ���������): " << y << "\nz (� ���������): " << z << endl;
    cout << "\nx (� ��������������): " << getHexadecimal_16(x) << "\ny (� ��������������): " << getHexadecimal_16(y) << "\nz (� ��������������): " << getHexadecimal_16(z) << endl;
    s_calculation(x, y, z);

    return 0;
}
