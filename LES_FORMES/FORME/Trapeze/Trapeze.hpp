#ifndef TRAPEZE_HPP
#define TRAPEZE_HPP


#include "../Forme.hpp"

class Trapeze : public Forme {
    private:
        double a, b, h;
    public:
        Trapeze(double a, double b, double h);
        double getA() const { return a; }
        double getB() const { return b; }
        double getH() const { return h; }
        double perimetre() const ;
        double aire() const ;
        void display() const ;
};

#endif
