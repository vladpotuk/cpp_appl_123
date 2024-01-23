#ifndef LINEAREQUATION_H
#define LINEAREQUATION_H

#include "Equation.h"

namespace Equations {
    class LinearEquation : public Equation {
    private:
        double a, b;
    public:
        LinearEquation(double a, double b);

        void solve() const override;
        void printEquationType() const override;
    };
} 

#endif 

