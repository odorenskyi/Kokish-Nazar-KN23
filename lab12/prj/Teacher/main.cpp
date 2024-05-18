#include <iostream>
#include <stdexcept>
#include <Windows.h>
#include <fstream>
#include "Modules�okish.h"
#include <sstream>
#define TEST_SUITE_FILE "..\\..\\TestSuite\\TestSuite.txt"
#define TEST_RESULTS_FILE "..\\..\\TestSuite\\TestResults.txt"
using namespace std;
int main() {
    system("chcp 1251 & cls");
    string currentFilePath = __FILE__; // ��������� ��������� ����� �� ������������ �����
    int checkResult = currentFilePath.find("\\lab12\\prj\\");
    if (checkResult == -1) {
        for (int i = 0; i < 100; ++i) { // ³��������� ��������� �������
            Beep(500, 100);
        }

        ofstream resultFile(TEST_RESULTS_FILE); // ³������� ����� ��� ������ ����������
        if (resultFile.is_open()) {
            resultFile << "��������� ����� ������� ��������� ����������� ������!";
            resultFile.close();
        } else { // ���� ���� �� ������� �������
            cerr << "��������� ������� ���� ��� ������.";
            return 1;
        }
    } else {
        ifstream inputFile(TEST_SUITE_FILE);
        ofstream outputFile(TEST_RESULTS_FILE);

        string line;
        int testCase = 0;

        while (getline(inputFile, line)) { // ���������� ����� � ����� � ��������� ������ ���� �� ���� ��������� ����
            stringstream ss(line); // ��������� ������ ��� �����

            double length, width, height;
            ss >> length >> width >> height; // ���������� ������ � ������(��� ���������� ����� �� ���������� length >> width >> height

            try {
                ClassLab12_KOKISH testObject(length, width, height);

                testCase++;


                outputFile << "���� " << testCase << endl;
                outputFile << "�������: " << testObject.getLength() << endl;
                outputFile << "������: " << testObject.getWidth() << endl;
                outputFile << "������: " << testObject.getHeight() << endl;
                outputFile << "����� �������: " << testObject.getSurfaceArea() << endl << endl;
            } catch (const invalid_argument& e) {
                testCase++;
                outputFile << "���� " << testCase << ": " << e.what() << endl << endl; // ����� ����������� ��� ������� � ���� ����������
            }
        }

        cout << "����� ������ ��������, ���������� ������� � ���� TestResults.txt" << endl;

        inputFile.close();
        outputFile.close();
    }

    return 0;
}



/*    try {
        // ��������� ��'���� ����� �� ���������� ������
        ClassLab12_KOKISH obj1;
        cout << "�������: " << obj1.getLength() << endl;
        cout << "������: " << obj1.getWidth() << endl;
        cout << "������: " << obj1.getHeight() << endl;
        cout << "����� �������: " << obj1.getSurfaceArea() << endl;
        ClassLab12_KOKISH tablet(10, 5, 2);
        cout << "�������: " << tablet.getLength() << endl;
        cout << "������: " << tablet.getWidth() << endl;
        cout << "������: " << tablet.getHeight() << endl;
        cout << "����� �������: " << tablet.getSurfaceArea() << endl;

        // ���� ��������
        tablet.setLength(12);
        tablet.setWidth(6);
        tablet.setHeight(3);
        cout << "��� ������: " << endl;
        cout << "�������: " << tablet.getLength() << endl;
        cout << "������: " << tablet.getWidth() << endl;
        cout << "������: " << tablet.getHeight() << endl;
        cout << "���� ����� �������: " << tablet.getSurfaceArea() << endl;
    } catch (const invalid_argument& e) {
        cerr << "�������: " << e.what() << endl;
    }
*/
