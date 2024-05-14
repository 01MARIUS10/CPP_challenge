#ifndef SOLID_HPP
#define SOLID_HPP

class Solid {
    public:
        virtual double volume() const = 0;
        virtual double aire() const = 0;
        virtual void display() const = 0;
};

#endif
