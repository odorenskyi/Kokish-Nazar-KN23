#include "prj_3_Konstantynov.h"
#include "prj_3_Kokish.h"
#include "prj_3_Lytvyn.h"
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector<BusSchedule> schedule;
    string filename = "bus_schedule.txt";

    ifstream file(filename);
    if (file.is_open()) {
        int number;
        char comma;
        while (file >> number) {
            BusSchedule bus;
            bus.number = number;
            file >> comma >> ws;
            getline(file, bus.route, ',');
            getline(file, bus.frequency, ',');
            getline(file, bus.days, ',');
            getline(file, bus.arrivalTime, ',');
            getline(file, bus.finalStationArrivalTime);
            schedule.push_back(bus);
        }
        file.close();
    }
    else {
        cout << "�� ������� ����������� ������� � �����. ���� ���� �������� �����." << endl;
    }

    int choice;
    do {
        cout << "\n����:\n1. ����� �� ������ �������\n2. ��������� ��������\n3. ��������� ������ �����\n4. ��������� �����\n5. ���������� ������ ��������" << endl;
        cout << "������ �����: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string stationName;
            cout << "������ ����� �����������: ";
            cin.ignore();
            getline(cin, stationName);
            searchByStation(schedule, stationName);
            break;
        }
        case 2:
            printSchedule(schedule);
            break;
        case 3:
            addNewBus(schedule);
            break;
        case 4: {
            int number;
            cout << "������ ����� ����� ��� ���������: ";
            cin >> number;
            deleteBus(schedule, number);
            break;
        }
        case 5:
            saveScheduleToFile(schedule, filename);
            cout << "����� �� ������������ ���������. �� ���������!" << endl;
            break;
        default:
            cout << "������� ����. ���� �����, ������� ����� �����." << endl;
        }
    } while (choice != 5);

    return 0;
}
