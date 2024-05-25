//
// Created by user on 17/04/2024.
//

#include "Armadura.h"
#include <string>

Armadura::Armadura() : Superhumano(), Persona() {

    defensePower = 0;
    armorWeight = 0;
    elementalResistance = "";

}

Armadura::Armadura(int defensePower, int armorWeight, std::string elementalResistance, int numberOfHabilities, std::string specialName, std::string mainHability, int age, float imc, float bodyTemperature, std::string name, bool haveTattoos) : Superhumano(int numberOfHabilities, std::string specialName, std::string mainHability), Persona(int age, float imc, float bodyTemperature, std::string name, bool haveTattoos) {
    this->defensePower = defensePower;
    this->armorWeight = armorWeight;
    this->elementalResistance = elementalResistance;
}

Armadura::Armadura(const Armadura &rhs) : Superhumano(rhs), Persona(rhs) {

    defensePower = rhs.defensePower;
    armorWeight = rhs.armorWeight;
    elementalResistance = rhs.elementalResistance;

}

Armadura::~Armadura(){

}

int Armadura::getDefensePower() const {
    return defensePower;
}
void Armadura::setDefensePower(int defensePower) {
    this->defensePower = defensePower;
}
int Armadura::getArmorWeight() const {
    return armorWeight;
}
void Armadura::setArmorWeight(int armorWeight) {
    this->armorWeight = armorWeight;
}
std::string Armadura::getElementalResist() const {
    return elementalResistance;
}
void Armadura::setElementalResist(std::string elementalResist) {
    this->elementalResistance = elementalResistance;
}