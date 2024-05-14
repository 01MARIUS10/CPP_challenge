#include "Triangle.hpp"
#include <iostream>
#include <cmath> 

Triangle::Triangle(double a, double b, double h) : a(a), b(b), h(h) {}

double Triangle::perimetre() const {
    return a + b + std::sqrt(a*a + b*b - h*h);
}

double Triangle::aire() const {
    return 0.5 * b * h;
}
void Triangle::display() const{
    std::cout << "Triangle de base " << a << " et hauteur " << h << " unite" << std::endl;
}
