#include <iostream>
#include "Microwave.h"

using namespace std;

int main() {
    Microwave microwave; // Создание объекта
    int choice;
    int timeValue, powerValue;
    string foodValue;

    do {
        cout << "\nМеню:\n";
        cout << "1. Показать состояние СВЧ-печи\n";
        cout << "2. Включить СВЧ-печь\n";
        cout << "3. Выключить СВЧ-печь\n";
        cout << "4. Установить время приготовления\n";
        cout << "5. Установить уровень мощности\n";
        cout << "6. Установить тип пищи\n";
        cout << "0. Выход\n";
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
            case 1:
                microwave.displayState();
                break;
            case 2:
                microwave.turnOn();
                break;
            case 3:
                microwave.turnOff();
                break;
            case 4:
                cout << "Введите время приготовления в секундах: ";
                cin >> timeValue;
                microwave.setTime(timeValue);
                break;
            case 5:
                cout << "Введите уровень мощности (1-10): ";
                cin >> powerValue;
                microwave.setPowerLevel(powerValue);
                break;
            case 6:
		cout << "Введите тип пищи (например, мясо, овощи): ";
                cin >> foodValue;
                microwave.setFoodType(foodValue);
                break;
            case 0:
                cout << "Выход...\n";
                break;
            default:
                cout << "Некорректный выбор.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}
