#ifndef EQUATION_H
#define EQUATION_H

#include <iostream>

class Equation {
public:
    virtual void solve() const = 0;  
    virtual void printEquationType() const = 0;  
    virtual ~Equation() {}  
};

#endif 

