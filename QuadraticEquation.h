#ifndef QUADRATICEQUATION_H
#define QUADRATICEQUATION_H

#include "Equation.h"

namespace Equations {
    class QuadraticEquation : public Equation {
    private:
        double a, b, c;
    public:
        QuadraticEquation(double a, double b, double c);

        void solve() const override;
        void printEquationType() const override;
    };
} 

#endif 

