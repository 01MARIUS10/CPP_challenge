#ifndef CERCLE_HPP
#define CERCLE_HPP


#include "../Forme.hpp"


class Cercle : public Forme{
    private :
        double rayon;
    public :
        Cercle();
        Cercle(double r);
        ~Cercle();
        double getRayon();
        void setRayon(double r);
        double perimetre() const ;
        double aire() const ;
        void display() const ;
};

#endif