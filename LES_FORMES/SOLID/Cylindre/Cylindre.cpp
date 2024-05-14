
#include "Cylindre.hpp"
#include <iostream>

Cylindre::Cylindre(double rayon, double hauteur) : rayon(rayon), hauteur(hauteur) {}

double Cylindre::volume() const {
    return 3.1415 * rayon * rayon * hauteur;
}

double Cylindre::aire() const {
    return 2 * 3.1415 * rayon * (rayon + hauteur);
}

void Cylindre::display() const {
    std::cout << "Cylindre de rayon " << rayon << " et hauteur " << hauteur << " unite" << std::endl;
}

