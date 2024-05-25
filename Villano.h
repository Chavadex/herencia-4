//
// Created by user on 14/04/2024.
//

#ifndef TAREACLASES_VILLANO_H
#define TAREACLASES_VILLANO_H

#include <string>
#include "Superhumano.h"


class Villano : public Superhumano{
public:
    Villano();
    Villano(int age, float imc, float bodyTemperature, std::string name, bool haveTattoos, int numberOfHabilities, std::string specialName, std::string mainHability, int deaths, int powerLevel, std::string weakness);
    Villano(const Villano &rhs);
    ~Villano();


    int getDeaths() const;
    void setDeaths(int deaths);
    int getPowerLevel() const;
    void setPowerLevel(int powerLevel);
    std::string getWeakness();
    void setWeakness(std::string weakness);


private:
    int deaths;
    int powerLevel;
    std::string weakness;

};


#endif //TAREACLASES_VILLANO_H
