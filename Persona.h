//
// Created by user on 13/04/2024.
//

#ifndef TAREACLASES_PERSONA_H
#define TAREACLASES_PERSONA_H

#include <string>

class Persona {
public:
    Persona();
    Persona(int age, float imc, float bodyTemperature, std::string name, bool haveTattoos);
    Persona(const Persona &rhs);
    ~Persona();

    int getAge()const;
    void setAge(int age);
    float getImc() const;
    void setImc(float imc);
    float  getBodyTemperature()const;
    void setBodyTemperature(float bodyTemperature);
    std::string getName() const;
    void setName(std::string name);
    bool getHaveTattoos()const;
    void setHaveTattoos(bool haveTattoos);


private:
    int age;
    float imc;
    float bodyTemperature;
    std::string name;
    bool haveTattoos;
};


#endif //TAREACLASES_PERSONA_H
