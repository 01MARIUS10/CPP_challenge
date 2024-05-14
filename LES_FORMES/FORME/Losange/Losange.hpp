#ifndef LOSANGE_HPP
#define LOSANGE_HPP

#include "../Forme.hpp"

class Losange : public Forme {
    private:
        double a, b, C;
    public:
        Losange(double a, double b, double C);
        double getA() const { return a; }
        double getB() const { return b; }
        double getC() const { return C; }
        double perimetre() const ;
        double aire() const ;
        void display() const ;
};

#endif
