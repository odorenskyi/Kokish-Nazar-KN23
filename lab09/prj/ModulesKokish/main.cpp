#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale.h>
#include <bits/stdc++.h>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;
// Lab 8
float s_calculation(int x, int y, int z){
    float S;
    if (x > y && y != 0){
    //S = log(x-y)+sqrt((M_PI * pow(x, 2)) / (x + z / (2 * pow(y, 2))));
    S = log(x - y) + pow(x, 2) * M_PI * (1 + 2 * pow(z, 2));
    return S;
    }
    else {
    return -1;
    }

}
// Lab 9
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
    //float tf=32+((9/5)*tc);
    cout << fixed << setprecision(0) << "������� �����������: " << tc << " ������� ������" << endl;
    cout << fixed << setprecision(1) << "������� �����������: " << 32+9*tc/5 << " ������� ����������\n" << endl;
}

void printCopyright()
{
   system("chcp 65001 > nul");

    //system("chcp 65001 & cls");
    cout << " -----------------------------------------------\n\
| Nazar Kokish, CNTU, https://github.com/N-Kokish |\n\
| ����� ����, ����, https://github.com/N-Kokish  |\n\
 ------------ � All rights reserved ------------\n"<<endl;
}
using namespace std;

unsigned int bit_12(unsigned int x) {
if (x > 0 && x < 17948360) {
    unsigned int tenthBit = (x >> 11) & 1;
    unsigned int result = 0;

    for (int i = 0; i < sizeof(x) * 8; i++) {
      result += ((x & 1) == tenthBit) ? 1 : 0;
      x = x >> 1;
    }

    return result;
  } else {
    return -1;
  }
}
// Lab 10
//1
void addAuthorInfo(const char* file_name, const char* file_name1) {
    ifstream inFile(file_name);
    ofstream outFile(file_name1);
    if (!inFile.is_open()) {
        outFile << "�������: ������� ���� �� ���� ��� �� ���� ���� ��������!" << endl;
        inFile.close();

        return;
    }
    if (outFile.fail()) {
        outFile << "�� ������� �������� ��� ������� ����!" << endl;
        return;
    }

    srand(rand());
    outFile << "��������� ����������: ����� ����" << endl;
    outFile << "�������������������� ������������ �������� ����������" << endl;
    outFile << "�������������" << endl;
    outFile << "������" << endl;
    outFile << "2024" << endl;
    outFile << "��������� �����: " << rand() % 100 << endl;

    string line;
    bool hasPunctuationError = true;
    while (getline(inFile, line)) {
        if (!line.empty()) {
            char last_char = line.back();
            if (last_char != ',' && last_char != '.' && last_char != '!' && last_char != '?') {
                hasPunctuationError = false;
                break;
            }
        }
    }
    inFile.close();

    if (hasPunctuationError) {
        outFile << "����� ���� �� �������� ����� �� �� ����������� �������" << endl;
    } else {
        outFile << "����� ���� �� �������� ����� �� ����������� �������" << endl;
    }

    outFile.close();
}
//2
void appendAlphabet(const char* file_name) {
    ofstream outFile(file_name, ios::app);

    if (!outFile.is_open()) {
        cout << "�������: �������� ���� '" << file_name << "' �� ���� ���� ��������!" << endl;
        return;
    }

    // ������ ��������� ������ � ��������� ������
    for (char ch = 'A'; ch <= 'Z'; ++ch) {
        outFile << ch << " ";
    }
    outFile<< endl;
    time_t currentTime = time(nullptr);
    tm* localTime = localtime(&currentTime);
    char timeBuffer[50];
    //outFile << strftime(timeBuffer, 50, "%Y-%m-%d %H:%M:%S", localTime)<< endl;
    strftime(timeBuffer, 50, "%Y-%m-%d %H:%M:%S", localTime);
    outFile << timeBuffer << endl;
    outFile.close();

}
//3
void addResults(const char* input_file_name, const char* output_file_name) {
    ifstream inFile(input_file_name);
    ofstream outFile(output_file_name, ios::app);

    if (!inFile.is_open()) {
        cout << "�������: ������� ���� '" << input_file_name << "' �� ���� ���� ��������!" << endl;
        return;
    }

    if (!outFile.is_open()) {
        cout << "�������: �������� ���� '" << output_file_name << "' �� ���� ���� ��������!" << endl;
        inFile.close();
        return;
    }

    int x, y, z, b;
    char comma;

    // ������� �������� x, y, z �� b � �������� �����
    inFile >> x >> comma >> y >> comma >> z >> comma >> b;

    // ��������� ������� s_calculation � ��������� ����������
    float result = s_calculation(x, y, z);

    // ������������ ����� b � ������� �������������
    string binary_b = bitset<sizeof(int) * 8>(b).to_string();

    // �������� ���������� � �������� ����
    outFile << "��������� ��������� ������� s_calculation � ����������� " << x << ", " << y << ", " << z << ": " << result << endl;
    outFile << "����� "<<b<<" � ��������� ���: " << binary_b << endl;

    inFile.close();
    outFile.close();
}
void writeValues(const char* file_name, int x, int y, int z, int b) {//��� ������ ����� x y z b � ����
    ofstream outFile(file_name, ios::out);

    if (!outFile.is_open()) {
        cout << "�������: �������� ���� '" << file_name << "' �� ���� ���� ��������!" << endl;
        return;
    }

    outFile << x << ", " << y << ", " << z << ", " << b << endl;

    outFile.close();
}
