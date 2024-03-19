#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale.h>
#include <bits/stdc++.h>
#include <string>


using namespace std;

void s_calculation(int x, int y, int z){
    system("chcp 65001 > nul");

    setlocale(LC_ALL,"UA");
    float S;
    if (x > y && y != 0){
    //S = log(x-y)+sqrt((M_PI * pow(x, 2)) / (x + z / (2 * pow(y, 2))));
    S = log(x - y) + pow(x, 2) * M_PI * (1 + 2 * pow(z, 2));
     cout << "S: " << setprecision(3) << fixed << S << endl;
    }
    else {
    cout << "Неможливо визначити, результат виразу не може бути обчисленим" << endl;
    }

}

void Assessment(int x){
    system("chcp 65001 > nul");

    if (0 < x && x <= 34) {
        cout << "FX with the obligatory repeated course" << endl;
    } else if (35 <= x && x <= 59) {
        cout << "F with the possibility of re-assembly" << endl;
    } else if (60 < x && x <= 66) {
        cout << "E satisfies minimum criteria" << endl;
    }else if (67 <= x && x <= 74) {
        cout << "D not bad, but with significant number of defects" << endl;
    }else if (75 <= x && x <= 81) {
        cout << "C overall correct fulfillment of certain significant number of errors" << endl;
    }else if (82 <= x && x <= 89) {
        cout << "B above average some mistakes" << endl;
    }else if (90 <= x && x <= 100) {
        cout << "A excellent performance with small number errors" << endl;
    }else {
        cout << "Error enter within [1,100]" << endl;
    }
}

void temperature_average(int m, int t,int w,int th,int fr,int s,int sn){
    system("chcp 65001 > nul");
    float tc= (m+t+w+th+fr+s+sn)/7;
    float tf=32+(9/5)*tc;
    cout << fixed << setprecision(0) << "Середня температура: " << tc << " градусів Цельсія" << endl;
    cout << fixed << setprecision(1) << "Середня температура: " << tf << " градусів Фаренгейта" << endl;
}

void printCopyright()
{
    system("chcp 1251 & cls");
    //system("chcp 65001 & cls");
    cout << " -----------------------------------------------\n\
| Nazar Kokish, CNTU, https://github.com/N-Kokish |\n\
| Назар Кокіш, ЦНТУ, https://github.com/N-Kokish  |\n\
 ------------ © All rights reserved ------------\n"<<endl;
}
int bit_12(int x){
    system("chcp 65001 > nul");
    if (x < 0 || x > 17948360) {
        cout << "Число вийшло за заданий діапазон (0 - 17948360)" << endl;
        return 1;
    }
    int bin = 0, k = 1;
    while (x)
    {
        bin += (x%2) * k;
        k *= 10;
        x/=2;

    }
    string str = to_string(bin);
    int countONE = count(str.begin(), str.end(), '1');
    int countZERO = count(str.begin(), str.end(), '0');
    reverse(str.begin(), str.end());
    if (str.length() < 13) {
        cout << "Недостатньо бітів" << endl;
        return 1;
    }
    switch (str[12]) {
        case '0':
            cout << "Кількість двійкових нулів: " << countZERO << endl;
            break;
        case '1':
            cout << "Кількість двійкових одиниць: " << countONE << endl;
            break;
    }
    return 0;
}
