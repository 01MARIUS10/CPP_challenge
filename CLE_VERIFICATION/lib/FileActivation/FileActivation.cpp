#include "FileActivation.hpp"
#include <fstream>


std::string FileActivation::wordFile = "./file/motCle.txt";
std::string FileActivation::CountFile = "./file/compteur.txt";
std::string FileActivation::globalStatusFile = "./file/status.txt";


//return 2 if always check
//return 0 if not
int FileActivation::verifyIfHasBeenChecked() {
    int state(0);
    std::ifstream fichier(globalStatusFile);
    if (fichier.is_open()) {
        std::string motCle;
        if (fichier >> motCle) {
            if (motCle == "SUCCESS") {
                state =  2;
            } 
        }
        fichier.close();
    } 
    return state;
}

//return 1 if can only
//return 0 if not
int FileActivation::verifyIfExpired() {
    int state(0);
    std::ifstream fichier(CountFile);


    if (fichier.is_open()) {
        int count;
        if (fichier >> count) {
            std::cout << count<<std::endl;
            if (count>0) {
                state =  1;
            } 
        }
        fichier.close();
    } 
    return state;
}
int FileActivation::getStatus() {
    //verifie si il a deja ete activee(status 2)
    int state(0);
    state = FileActivation::verifyIfHasBeenChecked();

    if(state==2){
        return 2;
    }

    state = FileActivation::verifyIfExpired();
    if(state==1){
        return 1;
    }
    return 0;
}

int FileActivation::checkIfCanTentative(){
    //2 if always logged
    //1 if can log
    //0 if session has been finished
    int state(0);
    state = FileActivation::getStatus();

    
    if(state==0){
        return 0;
    }
    return 1;
}
int FileActivation::logginTentative(std::string cle)
{
    int state(0);
    std::ifstream fichier(wordFile);
    if (fichier.is_open()) {
        std::string motCle;
        if (fichier >> motCle) {
            if (motCle == cle) {
                FileActivation::writeSuccessLog();
                state = 1;
            } else {
                state = 0;
                FileActivation::decrementCount();
            }
        }
        fichier.close();
    } else {
        state = 0;
    }
    return state;
}

void FileActivation::setCount(int a) {
    std::ofstream fichier(CountFile, std::ios::out | std::ios::trunc);
    if (fichier.is_open()) {
        fichier << a;
        fichier.close();
    } else {
        std::cout << "Impossible d'ouvrir le fichier de comptage." << std::endl;
    }
}


void FileActivation::writeSuccessLog() {
    std::ofstream fichier(CountFile, std::ios::out | std::ios::app);
    if (fichier.is_open()) {
        fichier << "SUCCESS";
        fichier.close();
    } else {
        std::cout << "Impossible d'ouvrir le fichier de comptage." << std::endl;
    }
}

void FileActivation::decrementCount() {
    std::ifstream fichier(CountFile, std::ios::in);
    int count;
    if (fichier.is_open()) {
        fichier >> count;
        fichier.close();
    }
    FileActivation::setCount(count-1);
}