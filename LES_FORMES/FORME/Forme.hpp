#ifndef SHAPE_HPP
#define SHAPE_HPP

class Forme{
    public:
        virtual double perimetre() const = 0;
        virtual double aire() const = 0;
        virtual void display() const = 0;
};

#endif