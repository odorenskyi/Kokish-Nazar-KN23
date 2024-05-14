#pragma once
#include "struct_type_priject_3.h"
#include <iostream>
#include <vector>

using namespace std;

void addNewBus(vector<BusSchedule>& schedule) {
    BusSchedule newBus;
    cout << "������ ����� �����: ";
    cin >> newBus.number;
    cout << "������ �������: ";
    cin.ignore();
    getline(cin, newBus.route);
    cout << "������ ����������� (�������/����/������): ";
    getline(cin, newBus.frequency);
    cout << "������ �� �����: ";
    getline(cin, newBus.days);
    cout << "������ ��� ��������: ";
    getline(cin, newBus.arrivalTime);
    cout << "������ ��� �������� �� ������ �������: ";
    getline(cin, newBus.finalStationArrivalTime);

    schedule.push_back(newBus);
    cout << "����� ���� ������ ������ �� ��������." << endl;
}

void deleteBus(vector<BusSchedule>& schedule, int number) {
    auto it = find_if(schedule.begin(), schedule.end(), [number](const BusSchedule& bus) { return bus.number == number; });
    if (it != schedule.end()) {
        schedule.erase(it);
        cout << "���� ����� " << number << " ������ �������� � ��������." << endl;
    }
    else {
        cout << "���� � ������� " << number << " �� �������� � �������." << endl;
    }
}