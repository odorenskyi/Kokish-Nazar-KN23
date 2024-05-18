#ifndef MODULES�OKISH_H_INCLUDED
#define MODULES�OKISH_H_INCLUDED
#include <cmath>
#include <stdexcept>
#include <iostream>

class ClassLab12_KOKISH {
private:
    double length;
    double width;
    double height;

public:
    // ����������� ��� ����������� ��������
    ClassLab12_KOKISH() : length(1), width(1), height(1) {}
    ClassLab12_KOKISH(double length, double width, double height) {
        if (length <= 0 || width <= 0 || height <= 0) {
            throw std::invalid_argument("������ ������ ���� ����� ����");
        }
        this->length = length;
        this->width = width;
        this->height = height;
    }

    // ������� ��� ��������� ������� ��������
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    double getHeight() const {
        return height;
    }

    // ������� ��� ���� ������� �������� � ���������
    void setLength(double length) {
        if (length <= 0) {
            throw std::invalid_argument("������� ������� ���� ����� ����");
        }
        this->length = length;
    }

    void setWidth(double width) {
        if (width <= 0) {
            throw std::invalid_argument("������ ������� ���� ����� ����");
        }
        this->width = width;
    }

    void setHeight(double height) {
        if (height <= 0) {
            throw std::invalid_argument("������ ������� ���� ����� ����");
        }
        this->height = height;
    }

    // ����� ��� ���������� ����� ������� ������������ �������������
    double getSurfaceArea() const {
        return 2 * (length * width + length * height + width * height);
    }
};


#endif // MODULES�OKISH_H_INCLUDED
