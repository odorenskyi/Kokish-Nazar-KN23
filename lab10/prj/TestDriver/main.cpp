#include <iostream>

#include "ModulesKokish_.h"

using namespace std;

int main() {
    //10.1
    addAuthorInfo("input_1.txt","output_1.txt");
    addAuthorInfo("input_2.txt","output_2.txt");
    addAuthorInfo("input_3.txt","output_3.txt");
    addAuthorInfo("input_88.txt","output_88.txt");
    //10.2
    appendAlphabet("input_4.txt");
    appendAlphabet("input_4.txt");
    appendAlphabet("input_5.txt");
    //10.3
    writeValues("input6.txt", 10, 5, 2, 4);
    addResults("input6.txt", "output6.txt");
    writeValues("input6.txt", 10, 10, 10, 5);

    addResults("input6.txt", "output6.txt");
    writeValues("input6.txt", 15, 10, 10, 6);

    addResults("input6.txt", "output6.txt");
    writeValues("input6.txt", 10, 15, 10, 7);
    addResults("input6.txt", "output6.txt");

    return 0;
}
