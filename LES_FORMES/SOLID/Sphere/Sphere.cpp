#include "Sphere.hpp"
#include <iostream>

Sphere::Sphere(double rayon) : rayon(rayon) {}

double Sphere::volume() const {
    return (4.0 / 3.0) * 3.1415 * rayon * rayon * rayon;
}

double Sphere::aire() const {
    return 4 * 3.1415 * rayon * rayon;
}
void Sphere::display() const{
    std::cout << "Sphere de rayon " << rayon << " unite" << std::endl;
}
