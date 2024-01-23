#include "Equation.h"
#include "LinearEquation.h"
#include "QuadraticEquation.h"

int main() {
    system("chcp 1251");
    system("cls");
    using namespace Equations;

    
    double a, b, c;
    std::cout << "Введіть коефіцієнти a, b, c для квадратного рівняння ax^2 + bx + c = 0: ";
    std::cin >> a >> b >> c;

    
    LinearEquation linear(2.0, 3.0);
    QuadraticEquation quadratic(a, b, c);

  
    linear.printEquationType();
    linear.solve();

    quadratic.printEquationType();
    quadratic.solve();

    return 0;
}

