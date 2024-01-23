#include "LinearEquation.h"
#include <cmath> 

namespace Equations {
    LinearEquation::LinearEquation(double a, double b) : a(a), b(b) {}

    void LinearEquation::solve() const {
        std::cout << "Розв'язок лінійного рівняння\n";
        if (a == 0) {
            if (b == 0) {
                std::cout << "Безліч коренів (нескінченність розв'язків)\n";
            }
            else {
                std::cout << "Немає розв'язків (рівняння невірне)\n";
            }
        }
        else {
            double x = -b / a;
            std::cout << "Один корінь: x = " << x << "\n";
        }
    }

    void LinearEquation::printEquationType() const {
        std::cout << "Тип рівняння: Лінійне\n";
    }
} 
