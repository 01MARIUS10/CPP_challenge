
#include "Losange.hpp"
#include <cmath>
#include <iostream>

Losange::Losange(double a, double b, double C) : a(a), b(b), C(C) {}

double Losange::perimetre() const {
    return a + b + a + b;
}

double Losange::aire() const {
    return 0.5 * a * b * std::sin(C);
}
void Losange::display() const{
    std::cout<<" Losange de cote ("<<a<<","<<b<<","<<C<<") unite"<<std::endl;
}
