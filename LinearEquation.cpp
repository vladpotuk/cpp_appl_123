#include "LinearEquation.h"
#include <cmath> 

namespace Equations {
    LinearEquation::LinearEquation(double a, double b) : a(a), b(b) {}

    void LinearEquation::solve() const {
        std::cout << "����'���� ������� �������\n";
        if (a == 0) {
            if (b == 0) {
                std::cout << "����� ������ (������������ ����'����)\n";
            }
            else {
                std::cout << "���� ����'���� (������� ������)\n";
            }
        }
        else {
            double x = -b / a;
            std::cout << "���� �����: x = " << x << "\n";
        }
    }

    void LinearEquation::printEquationType() const {
        std::cout << "��� �������: ˳����\n";
    }
} 
