#ifndef ACTIVATION_HPP
#define ACTIVATION_HPP

#include <iostream>
#include <fstream>
#include <string>

class Activation
{
private:
    std::string cleDeProduit = "ABCD";
    int tentativeRestante;
    bool status = false;

public:
    Activation();
    ~Activation();
    bool ifCanTentative();
};

#endif