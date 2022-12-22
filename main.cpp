#include <iostream>
#include "Pets.h"
#include "Home.h"

enum kind{
    DOG,
    CAT,
    BIRD
};


int main() {

    Pets Dog("Dog Boel","Bulldog", "Bye", 5, 56);
    Pets Cat("Cat Tom","Egypt", "Hello", 3, 21);
    Pets Bird("Parrot Kabes","Wavy", "Hello", 4, 6);
    Pets group_in_home[3] = {Dog, Cat, Bird};
    Home owner_Daniel (group_in_home);

    owner_Daniel .printAllPets();
    std::cout<<"------------------------\n";
    owner_Daniel .findFriends();
    std::cout<<"------------------------\n";
    owner_Daniel .isPolite();
    std::cout<<"------------------------\n";
    owner_Daniel .sortedPets();

    std::cout<<"Goodbye user"<<std:: endl;
    return 0;
}
