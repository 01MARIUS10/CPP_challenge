#include <iostream>
#include "Carre.hpp"



Carre::Carre(){

}
Carre::Carre(double c){
    
}
Carre::~Carre(){
    
}

double Carre::getCote(){
    return cote;
}
void Carre::setCote(double c){
     cote = c;
}

double Carre::perimetre() const{
    return cote * 4;
}

double Carre::aire() const{
    return cote*cote;
}


void Carre::display() const{
    std::cout<<" carre de cote "<<cote<<" unite"<<std::endl;
}