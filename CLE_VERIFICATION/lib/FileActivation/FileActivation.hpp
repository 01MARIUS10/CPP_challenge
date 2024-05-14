#ifndef FILEACTIVATION_HPP
#define FILEACTIVATION_HPP

#include <iostream>
#include <fstream>
#include <string>

class FileActivation
{
    private:
        static std::string wordFile;
        static std::string CountFile;
        static std::string globalStatusFile;

    public:
        //tentative
        static int logginTentative(std::string cle);
        static int checkIfCanTentative();

        //ecriture dans le fichier
        static void setCount(int a);
        static void decrementCount();

        static void writeSuccessLog();

        //les status p-a-p au fichiers
        static int getStatus();
        static int verifyIfExpired();
        static int verifyIfHasBeenChecked();
        

};

#endif