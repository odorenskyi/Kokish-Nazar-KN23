#pragma once
#include <string>

using namespace std;

struct BusSchedule {
    int number;
    string route;
    string frequency;
    string days;
    string arrivalTime;
    string finalStationArrivalTime;
};