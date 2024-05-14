#pragma once
#include <vector>
#include "struct_type_priject_3.h"
#include <iostream>

using namespace std;

void searchByStation(const vector<BusSchedule>& schedule, const string& stationName) {
    cout << "����� � ����������� " << stationName << ":" << endl;
    for (const auto& bus : schedule) {
        if (bus.route.find(stationName) != string::npos) {
            cout << "����� �����: " << bus.number << ", �������: " << bus.route << ", ��� ��������: " << bus.arrivalTime << endl;
        }
    }
}

void printSchedule(const vector<BusSchedule>& schedule) {
    cout << "������� ���� ��������:" << endl;
    for (const auto& bus : schedule) {
        cout << "����� �����: " << bus.number << ", �������: " << bus.route << ", �����������: " << bus.frequency << ", �� �����: " << bus.days << ", ��� ��������: " << bus.arrivalTime << ", ��� �������� �� ������ �������: " << bus.finalStationArrivalTime << endl;
    }
}