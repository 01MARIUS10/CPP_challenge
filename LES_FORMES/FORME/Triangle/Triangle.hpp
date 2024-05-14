#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "../Forme.hpp"

class Triangle : public Forme {
    private:
        double a, b, h;
    public:
        Triangle(double a, double b, double h);
        double getA() const { return a; }
        double getB() const { return b; }
        double getH() const { return h; }
        double perimetre() const ;
        double aire() const ;
        void display() const ;
};

#endif
