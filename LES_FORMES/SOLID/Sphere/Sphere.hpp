#ifndef SPHERE_HPP
#define SPHERE_HPP

#include "../Solid.hpp"

class Sphere : public Solid {
    private:
        double rayon;
    public:
        Sphere(double rayon);
        double getRayon() const { return rayon; }
        double volume() const ;
        double aire() const ;
        void display() const ;
};

#endif
