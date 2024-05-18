#ifndef MODULESКOKISH_H_INCLUDED
#define MODULESКOKISH_H_INCLUDED
#include <cmath>
#include <stdexcept>
#include <iostream>

class ClassLab12_KOKISH {
private:
    double length;
    double width;
    double height;

public:
    // Конструктор для ініціалізації атрибутів
    ClassLab12_KOKISH() : length(1), width(1), height(1) {}
    ClassLab12_KOKISH(double length, double width, double height) {
        if (length <= 0 || width <= 0 || height <= 0) {
            throw std::invalid_argument("Розміри повинні бути більше нуля");
        }
        this->length = length;
        this->width = width;
        this->height = height;
    }

    // Геттери для отримання значень атрибутів
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    double getHeight() const {
        return height;
    }

    // Сеттери для зміни значень атрибутів з валідацією
    void setLength(double length) {
        if (length <= 0) {
            throw std::invalid_argument("Довжина повинна бути більше нуля");
        }
        this->length = length;
    }

    void setWidth(double width) {
        if (width <= 0) {
            throw std::invalid_argument("Ширина повинна бути більше нуля");
        }
        this->width = width;
    }

    void setHeight(double height) {
        if (height <= 0) {
            throw std::invalid_argument("Висота повинна бути більше нуля");
        }
        this->height = height;
    }

    // Метод для обчислення площі поверхні прямокутного паралелепіпеда
    double getSurfaceArea() const {
        return 2 * (length * width + length * height + width * height);
    }
};


#endif // MODULESКOKISH_H_INCLUDED
