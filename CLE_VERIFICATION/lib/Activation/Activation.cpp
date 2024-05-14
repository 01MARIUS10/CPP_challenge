#include "Activation.hpp"
#include "../FileActivation/FileActivation.hpp"

bool Activation::ifCanTentative()
{
    int st(0);
    st = FileActivation::checkIfCanTentative();
    return st==1? true:false;
}

Activation::Activation()
{

    if(Activation::ifCanTentative())
    {
        std::cout<<" _______CLE DE SECURITE ________"<<std::endl;
        std::cout<<"veuillez entrez votre cle de securite :";
        std::string s(" ");
        std::cin>>s;

        int st(0);
        st = FileActivation::logginTentative(s);

        if(st==1){
            std::cout << "vous etes connecte" << std::endl;
        }
        else{
            std::cout << "mdp errone, vous etes en tant que invite" << std::endl;
        }

    }
    else{
        std::cout << "SESSION PERDU , Navres vous ne pouvez plus acceder " << std::endl;
        
    }
    
}
Activation::~Activation(){

}

