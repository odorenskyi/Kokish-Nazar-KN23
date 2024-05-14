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
        cout << "Не вдалося завантажити розклад з файлу. Файл буде створено пізніше." << endl;
    }

    int choice;
    do {
        cout << "\nМеню:\n1. Пошук за назвою станції\n2. Виведення розкладу\n3. Додавання нового рейсу\n4. Вилучення рейсу\n5. Завершення роботи програми" << endl;
        cout << "Оберіть опцію: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string stationName;
            cout << "Введіть назву автостанції: ";
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
            cout << "Введіть номер рейсу для вилучення: ";
            cin >> number;
            deleteBus(schedule, number);
            break;
        }
        case 5:
            saveScheduleToFile(schedule, filename);
            cout << "Дякую за користування програмою. До побачення!" << endl;
            break;
        default:
            cout << "Невірний вибір. Будь ласка, виберіть опцію знову." << endl;
        }
    } while (choice != 5);

    return 0;
}
