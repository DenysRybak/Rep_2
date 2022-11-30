#include <iostream>
#include "Pets.h"
Pets ::Pets(std::string cName, std::string cBreed, std::string cGreeting, int yAge, int cMass) {
    this -> name = cName;
    this -> breed = cBreed;
    this -> greeting = cGreeting;
    this -> age = yAge;
    this -> mass = cMass;
}
void Pets::printPet() {
    std:: cout <<"Name : " <<this->name<< ", Breed : " <<this->breed<< ", Greeting :"<<this->greeting<<", Age :" <<this->age<< ", Mass :" <<this->mass<<"\n";
}

int Pets::getAge() {
    return this -> age;
}
std::string Pets :: getName(){
    return this -> name;
}
std::string Pets ::getGreeting() {
    return this -> greeting;
}


