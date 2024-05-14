#pragma once
#include "struct_type_priject_3.h"
#include <iostream>
#include <vector>

using namespace std;

void addNewBus(vector<BusSchedule>& schedule) {
    BusSchedule newBus;
    cout << "Введіть номер рейсу: ";
    cin >> newBus.number;
    cout << "Введіть маршрут: ";
    cin.ignore();
    getline(cin, newBus.route);
    cout << "Введіть періодичність (щоденно/парні/непарні): ";
    getline(cin, newBus.frequency);
    cout << "Введіть дні тижня: ";
    getline(cin, newBus.days);
    cout << "Введіть час прибуття: ";
    getline(cin, newBus.arrivalTime);
    cout << "Введіть час прибуття до кінцевої станції: ";
    getline(cin, newBus.finalStationArrivalTime);

    schedule.push_back(newBus);
    cout << "Новий рейс успішно додано до розкладу." << endl;
}

void deleteBus(vector<BusSchedule>& schedule, int number) {
    auto it = find_if(schedule.begin(), schedule.end(), [number](const BusSchedule& bus) { return bus.number == number; });
    if (it != schedule.end()) {
        schedule.erase(it);
        cout << "Рейс номер " << number << " успішно вилучено з розкладу." << endl;
    }
    else {
        cout << "Рейс з номером " << number << " не знайдено у розкладі." << endl;
    }
}