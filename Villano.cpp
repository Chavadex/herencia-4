//
// Created by user on 14/04/2024.
//

#include "Villano.h"




Villano::Villano() : Superhumano()  {
    deaths = 0;
    powerLevel = 0;
    weakness = "";
}

Villano::Villano(int age, float imc, float bodyTemperature, std::string name, bool haveTattoos, int numberOfHabilities, std::string specialName, std::string mainHability, int deaths, int powerLevel, std::string weakness) : Superhumano(age, imc, bodyTemperature, name, haveTattoos, numberOfHabilities, specialName, mainHability)  {

    this->deaths = deaths;
    this->powerLevel = powerLevel;
    this->weakness = weakness;
}

Villano::Villano(const Villano &rhs) : Superhumano(rhs) {
    deaths = rhs.deaths;
    powerLevel = rhs.powerLevel;
    weakness = rhs.weakness;
}

Villano::~Villano() {
    //Destructor
}

int Villano::getDeaths() const {
    return deaths;
}
void Villano::setDeaths(int deaths) {
    this->deaths = deaths;
}
int Villano::getPowerLevel() const {
    return powerLevel;
}
void Villano::setPowerLevel(int powerLevel) {
    this->powerLevel=powerLevel;
}
std::string Villano::getWeakness() {
    return weakness;
}
void Villano::setWeakness(std::string weakness) {
    this->weakness = weakness;
}