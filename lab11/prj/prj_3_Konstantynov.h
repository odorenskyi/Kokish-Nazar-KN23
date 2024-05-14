#pragma once
#include <vector>
#include "struct_type_priject_3.h"
#include <iostream>

using namespace std;

void searchByStation(const vector<BusSchedule>& schedule, const string& stationName) {
    cout << "Рейси з автостанції " << stationName << ":" << endl;
    for (const auto& bus : schedule) {
        if (bus.route.find(stationName) != string::npos) {
            cout << "Номер рейсу: " << bus.number << ", Маршрут: " << bus.route << ", Час прибуття: " << bus.arrivalTime << endl;
        }
    }
}

void printSchedule(const vector<BusSchedule>& schedule) {
    cout << "Розклад руху автобусів:" << endl;
    for (const auto& bus : schedule) {
        cout << "Номер рейсу: " << bus.number << ", Маршрут: " << bus.route << ", Періодичність: " << bus.frequency << ", Дні тижня: " << bus.days << ", Час прибуття: " << bus.arrivalTime << ", Час прибуття до кінцевої станції: " << bus.finalStationArrivalTime << endl;
    }
}