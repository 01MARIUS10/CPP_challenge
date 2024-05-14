#ifndef OVALE_HPP
#define OVALE_HPP


#include "../Forme.hpp"

class Ovale : public Forme {
private:
    double a, b;
public:
    Ovale(double a, double b);
    double getA() const { return a; }
    double getB() const { return b; }
    double perimetre() const ;
    double aire() const ;
    void display() const ;
};

#endif
