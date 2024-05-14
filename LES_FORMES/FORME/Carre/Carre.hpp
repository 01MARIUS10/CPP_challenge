#ifndef CARRE_HPP
#define CARRE_HPP

#include "../Forme.hpp"

class Carre : public Forme {
    private:
        double cote;
    public:
        Carre();
        Carre(double c);
        ~Carre();
        double getCote();
        void setCote(double c);
        double perimetre() const ;
        double aire() const ;
        void display() const ;
};

#endif 