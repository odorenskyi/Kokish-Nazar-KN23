#pragma once
#include "struct_type_priject_3.h"
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void saveScheduleToFile(const vector<BusSchedule>& schedule, const string& filename) {
    ofstream file(filename);
    if (!file.is_open()) {
        cout << "Помилка: Неможливо відкрити файл для запису." << endl;
        return;
    }

    for (const auto& bus : schedule) {
        file << bus.number << "," << bus.route << "," << bus.frequency << "," << bus.days << "," << bus.arrivalTime << "," << bus.finalStationArrivalTime << endl;
    }

    file.close();
}