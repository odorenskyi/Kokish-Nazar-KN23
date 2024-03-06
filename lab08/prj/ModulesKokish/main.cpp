#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale.h>

using namespace std;

void s_calculation(int x, int y, int z)
{
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

