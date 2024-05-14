#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP


#include "../Forme.hpp"

class Rectangle : public Forme {
    private:
        double longueur, largeur;
    public:
        Rectangle(double longueur, double largeur);
        double getLongueur() const { return longueur; }
        double getLargeur() const { return largeur; }
        double perimetre() const ;
        double aire() const ;
        void display() const ;
};

#endif
