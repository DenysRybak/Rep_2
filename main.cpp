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
    Pets groupInhome[3] = {Dog, Cat, Bird};
    Home den (groupInhome);

    den.printAllPets();
    std::cout<<"------------------------\n";
    den.findFriends();
    std::cout<<"------------------------\n";
    den.isPolite();
    std::cout<<"------------------------\n";
    den.sortedPets();


    return 0;
}
