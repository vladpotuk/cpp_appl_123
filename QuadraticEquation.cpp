#include "QuadraticEquation.h"
#include <cmath> 

namespace Equations {
    QuadraticEquation::QuadraticEquation(double a, double b, double c) : a(a), b(b), c(c) {}

    void QuadraticEquation::solve() const {
        std::cout << "Розв'язок квадратного рівняння\n";
        double discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            double x1 = (-b + sqrt(discriminant)) / (2 * a);
            double x2 = (-b - sqrt(discriminant)) / (2 * a);
            std::cout << "Два корені: x1 = " << x1 << ", x2 = " << x2 << "\n";
        }
        else if (discriminant == 0) {
            double x = -b / (2 * a);
            std::cout << "Один корінь: x = " << x << "\n";
        }
        else {
            std::cout << "Немає дійсних коренів (комплексні корені)\n";
        }
    }

    void QuadraticEquation::printEquationType() const {
        std::cout << "Тип рівняння: Квадратне\n";
    }
} 
