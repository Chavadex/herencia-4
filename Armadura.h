//
// Created by user on 17/04/2024.
//

#ifndef TAREACLASES_ARMADURA_H
#define TAREACLASES_ARMADURA_H

#include <string>
#include "Persona.h"
#include "Superhumano.h"


class Armadura : public Superhumano, public Persona {

public:
    Armadura();
    Armadura(int defensePower, int armorWeight, std::string elementalResistance, int numberOfHabilities, std::string specialName, std::string mainHability, int age, float imc, float bodyTemperature, std::string name, bool haveTattoos) : Superhumano(int numberOfHabilities, std::string specialName, std::string mainHability), Persona(int age, float imc, float bodyTemperature, std::string name, bool haveTattoos);
    Armadura(Armadura &rhs);
    ~Armadura();



    int getDefensePower() const;
    void setDefensePower(int defensePower);
    int getArmorWeight() const;
    void setArmorWeight(int armorWeight);
    std::string getElementalResist() const;
    void setElementalResist(std::string elementalResist);


private:
    int defensePower;
    int armorWeight;
    std::string elementalResistance;



};


#endif //TAREACLASES_ARMADURA_H
