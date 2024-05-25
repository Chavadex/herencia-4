//
// Created by user on 14/04/2024.
//

#ifndef TAREACLASES_SUPERHUMANO_H
#define TAREACLASES_SUPERHUMANO_H

#include <string>
#include "Persona.h"

class Superhumano : public Persona{
public:
    Superhumano();
    Superhumano(int age, float imc, float bodyTemperature, std::string name, bool haveTattoos, int numberOfHabilities, std::string specialName, std::string mainHability);
    Superhumano(const Superhumano &rhs);
    ~Superhumano();

    int getNumberOfHabilities()const;
    void setNumberOfHabilities(int numberOfHabilities);
    std::string getSpecialName() const;
    void setSpecialName(std::string specialName);
    std::string getMainHability()const;
    void setMainHability(std::string mainHability);

private:
    int numberOfHabilities;
    std::string specialName;
    std::string mainHability;





};


#endif //TAREACLASES_SUPERHUMANO_H
