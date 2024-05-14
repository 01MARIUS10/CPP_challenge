#include <iostream>
#include "Cercle.hpp"


Cercle::Cercle(){
        rayon=0;
}
Cercle::Cercle(double r){
        rayon=r;
}
Cercle::~Cercle(){

}

void Cercle::setRayon(double r){
        rayon=r;
}
double Cercle::getRayon(){
        return rayon;
}

double Cercle::perimetre() const {
    return 2 * 3.1415 * rayon;
}
double Cercle::aire() const{
    return 3.1415*rayon*rayon;
}
void Cercle::display() const{
    std::cout<<" cercle de rayon "<<rayon<<" unite"<<std::endl;
}

