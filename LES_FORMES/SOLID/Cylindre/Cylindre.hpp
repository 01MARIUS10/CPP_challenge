#ifndef CYLINDRE_HPP
#define CYLINDRE_HPP

#include "../Solid.hpp"

class Cylindre : public Solid {
    private:
        double rayon, hauteur;
    public:
        Cylindre(double rayon, double hauteur);
        double getRayon() const { return rayon; }
        double getHauteur() const { return hauteur; }
        double volume() const ;
        double aire() const ;
        void display() const ;
};

#endif
