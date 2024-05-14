#include "Trapeze.hpp"
#include <iostream>

Trapeze::Trapeze(double a, double b, double h) : a(a), b(b), h(h) {}

double Trapeze::perimetre() const {
    return a + b + a + b;
}

double Trapeze::aire() const {
    return 0.5 * (a + b) * h;
}
void Trapeze::display() const{
    std::cout << "Trapeze de longueur des bases (" << a << "," << b << ") et hauteur " << h << " unite" << std::endl;
}
