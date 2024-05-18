#include <iostream>
#include <stdexcept>
#include <Windows.h>
#include <fstream>
#include "ModulesКokish.h"
#include <sstream>
#define TEST_SUITE_FILE "..\\..\\TestSuite\\TestSuite.txt"
#define TEST_RESULTS_FILE "..\\..\\TestSuite\\TestResults.txt"
using namespace std;
int main() {
    system("chcp 1251 & cls");
    string currentFilePath = __FILE__; // Отримання поточного шляху до виконуваного файлу
    int checkResult = currentFilePath.find("\\lab12\\prj\\");
    if (checkResult == -1) {
        for (int i = 0; i < 100; ++i) { // Відтворення звукового сигналу
            Beep(500, 100);
        }

        ofstream resultFile(TEST_RESULTS_FILE); // Відкриття файлу для запису результатів
        if (resultFile.is_open()) {
            resultFile << "Порушення вимог порядку виконання лабораторної роботи!";
            resultFile.close();
        } else { // Якщо файл не вдалося відкрити
            cerr << "Неможливо відкрити файл для запису.";
            return 1;
        }
    } else {
        ifstream inputFile(TEST_SUITE_FILE);
        ofstream outputFile(TEST_RESULTS_FILE);

        string line;
        int testCase = 0;

        while (getline(inputFile, line)) { // Зчитування рядків з файлу з тестовими даними поки не буде досягнуто кінця
            stringstream ss(line); // Створення потоку для рядка

            double length, width, height;
            ss >> length >> width >> height; // Зчитування розмірів з потоку(або розбивання рядка на компоненти length >> width >> height

            try {
                ClassLab12_KOKISH testObject(length, width, height);

                testCase++;


                outputFile << "Тест " << testCase << endl;
                outputFile << "Довжина: " << testObject.getLength() << endl;
                outputFile << "Ширина: " << testObject.getWidth() << endl;
                outputFile << "Висота: " << testObject.getHeight() << endl;
                outputFile << "Площа поверхні: " << testObject.getSurfaceArea() << endl << endl;
            } catch (const invalid_argument& e) {
                testCase++;
                outputFile << "Тест " << testCase << ": " << e.what() << endl << endl; // Запис повідомлення про помилку у файл результатів
            }
        }

        cout << "Тести успішно завершені, результати записані у файл TestResults.txt" << endl;

        inputFile.close();
        outputFile.close();
    }

    return 0;
}



/*    try {
        // Створення об'єкта класу та тестування методів
        ClassLab12_KOKISH obj1;
        cout << "Довжина: " << obj1.getLength() << endl;
        cout << "Ширина: " << obj1.getWidth() << endl;
        cout << "Висота: " << obj1.getHeight() << endl;
        cout << "Площа поверхні: " << obj1.getSurfaceArea() << endl;
        ClassLab12_KOKISH tablet(10, 5, 2);
        cout << "Довжина: " << tablet.getLength() << endl;
        cout << "Ширина: " << tablet.getWidth() << endl;
        cout << "Висота: " << tablet.getHeight() << endl;
        cout << "Площа поверхні: " << tablet.getSurfaceArea() << endl;

        // Зміна атрибутів
        tablet.setLength(12);
        tablet.setWidth(6);
        tablet.setHeight(3);
        cout << "Нові розміри: " << endl;
        cout << "Довжина: " << tablet.getLength() << endl;
        cout << "Ширина: " << tablet.getWidth() << endl;
        cout << "Висота: " << tablet.getHeight() << endl;
        cout << "Нова площа поверхні: " << tablet.getSurfaceArea() << endl;
    } catch (const invalid_argument& e) {
        cerr << "Помилка: " << e.what() << endl;
    }
*/
