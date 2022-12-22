#pragma once
#include <string>

class Pets {
private:
    std :: string name;
    std :: string breed;
    std :: string greeting;
    int age;
    int mass;

public:
    Pets();
    Pets(std :: string cName, std :: string cBreed, std :: string cGreeting, int yAge, int cMass);
    void printPet();
    int get_age();
    std :: string get_greeting();
    std :: string get_name();
    //Start
};