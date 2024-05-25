//
// Created by user on 14/04/2024.
//

#include "Superhumano.h"

Superhumano::Superhumano() : Persona(){
    numberOfHabilities = 0;
    specialName = "";
    mainHability = "";
}

Superhumano::Superhumano(int age, float imc, float bodyTemperature, std::string name, bool haveTattoos, int numberOfHabilities, std::string specialName, std::string mainHability) : Persona(age, imc, bodyTemperature, name, haveTattoos) {

    this->numberOfHabilities = numberOfHabilities;
    this->specialName = specialName;
    this->mainHability = mainHability;

}

Superhumano::Superhumano(const Superhumano &rhs) : Persona(rhs) {

    numberOfHabilities = rhs.numberOfHabilities;
    specialName = rhs.specialName;
    mainHability = rhs.mainHability;

}

Superhumano::~Superhumano() {
    //Destructor
}

int Superhumano::getNumberOfHabilities() const
{
    return numberOfHabilities;
}
void Superhumano::setNumberOfHabilities(int numberOfHabilities) {
    this->numberOfHabilities = numberOfHabilities;
}

std::string Superhumano::getSpecialName() const {
    return specialName;
}

void Superhumano::setSpecialName(std::string specialName) {
    this->specialName = specialName;
}

std::string Superhumano::getMainHability() const {
    return mainHability;
}

void Superhumano::setMainHability(std::string mainHability) {
    this -> mainHability = mainHability;
}