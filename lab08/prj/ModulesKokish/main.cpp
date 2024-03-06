#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void s_calculation(int x, int y, int z)
{
    system("chcp 65001 > nul");
    float S;
    if (x > y && y != 0){
    S = log(x-y)+sqrt((M_PI * pow(x, 2)) / (x + z / (2 * pow(y, 2))));
     cout << "S: " << setprecision(3) << fixed << S << endl;
    }
    else {
    cout << "Неможливо визначити, результат виразу не може бути обчисленим" << endl;
    }

}

