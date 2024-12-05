#ifndef MICROWAVE_H
#define MICROWAVE_H

#include <iostream>
#include <string>

using namespace std;

class Microwave {
private:
    bool isOn;          // Состояние печи (включена/выключена)
    int time;          // Время приготовления в секундах
    int powerLevel;    // Уровень мощности (от 1 до 10)
    string foodType;   // Тип пищи, которая готовится

public:
    // Конструктор по умолчанию
    Microwave() : isOn(false), time(0), powerLevel(1), foodType("Не выбрано") {}

    // Конструктор с параметрами
    Microwave(bool state, int t, int level, string type)
        : isOn(state), time(t), powerLevel(level), foodType(type) {}

    // Метод для включения печи
    void turnOn() {
        isOn = true;
        cout << "СВЧ-печь выключена.\n";
    }

    // Метод для выключения печи
    void turnOff() {
        isOn = false;
        cout << "СВЧ-печь выключена.\n";
    }
    
    // Метод для установки времени приготовления
    void setTime(int seconds) {
        if (isOn) {
            time = seconds;
            cout << "Время приготовления установлено на " << time << " секунд.\n";
        } else {
            cout << "СВЧ-печь выключена. Включите её, чтобы установить время.\n";
        }
    }

    // Метод для установки уровня мощности
    void setPowerLevel(int level) {
        if (isOn) {
            if (level >= 1 && level <= 10) {
                powerLevel = level;
                cout << "Уровень мощности установлен на " << powerLevel << ".\n";
            } else {
                cout << "Уровень мощности должен быть от 1 до 10.\n";
            }
        } else {
            cout << "СВЧ-печь выключена. Включите её, чтобы установить уровень мощности.\n";
        }
    }

    // Метод для установки типа пищи
    void setFoodType(string type) {
        if (isOn) {
            foodType = type;
            cout << "Тип пищи установлен на " << foodType << ".\n";
        } else {
            cout << "СВЧ-печь выключена. Включите её, чтобы установить тип пищи.\n";
        }
    }

    // Метод для отображения текущего состояния печи
    void displayState() const {
        cout << "Состояние СВЧ-печи: " << (isOn ? "Включена" : "Выключена")
             << ", Время: " << time 
             << " секунд, Уровень мощности: " << powerLevel 
             << ", Тип пищи: " << foodType << "\n";
    }
};

#endif // MICROWAVE_H

