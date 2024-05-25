//
// Created by user on 13/04/2024.


#include "Persona.h"

Persona::Persona() {

    age = 0;
    imc = 0;
    bodyTemperature = 0;
    name = "";
    haveTattoos = false;


}


Persona::Persona(int age, float imc, float bodyTemperature, std::string name, bool haveTattoos) {

    this->age = age;
    this->imc = imc;
    this->bodyTemperature = bodyTemperature;
    this->name = name;
    this->haveTattoos = haveTattoos;
}

Persona::Persona(const Persona &rhs) {

    age = rhs.age;
    imc = rhs.imc;
    bodyTemperature = rhs.bodyTemperature;
    name = rhs.name;
    haveTattoos = rhs.haveTattoos;
}

Persona::~Persona(){
//Destrcutor
}

int Persona::getAge() const {
    return age;
}

void Persona::setAge(int age) {
    this->age = age;
}

float Persona::getImc() const {
    return imc;
}

void Persona::setImc(float imc) {
    this->imc = imc;
}

float Persona::getBodyTemperature() const {
    return bodyTemperature;
}

void Persona::setBodyTemperature(float bodyTemperature) {
    this->bodyTemperature = bodyTemperature;
}

std::string Persona::getName() const {
    return name;
}

void Persona::setName(std::string name) {
    this -> name = name;
}

bool Persona::getHaveTattoos() const {
    return haveTattoos;
}

void Persona::setHaveTattoos(bool haveTattoos) {
    this -> haveTattoos = haveTattoos;
}



