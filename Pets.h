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
    int getAge();
    std :: string getGreeting();
    std :: string getName();

};