
#include "Ovale.hpp"
#include <iostream>

Ovale::Ovale(double a, double b) : a(a), b(b) {}

double Ovale::perimetre() const {
    return 3.1415 * (a + b);
}

double Ovale::aire() const {
    return 3.1415 * a * b;
}
void Ovale::display() const {
    std::cout << "Ovale de demi-longueur (" << a << "," << b << ") unite" << std::endl;
}

