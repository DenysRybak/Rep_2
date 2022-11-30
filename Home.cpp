#include "Home.h"
#include "Pets.h"
#include <iostream>

Home::Home(Pets *group) {
    this -> group = group;
}
Pets& Home::getPetByIndex(int i)  {
    return (Pets&)this -> group[i];
}
void Home::printAllPets()  {
    for (int i =0;  i<3; i++) {
        getPetByIndex(i).printPet();
    }
}
void Home::findFriends(){
    for (int i=0; i<3; i++) {
        for (int j = 0; j < 3; j++) {
            if(i==j){
                continue;
            }
            if(this ->getPetByIndex(i).getAge()- this->getPetByIndex(j).getAge()<=1){
                std::cout<<getPetByIndex(i).getName()<<"and"<<getPetByIndex(j).getName()<<"are friend!\n";
            }
        }
    }
}
int Home :: isPolite() {
    for (int i = 0; i < 3; i++) {
        if (this ->getPetByIndex(i).getGreeting() == "Hello") {
            std::cout << "True" << std::endl;
        } else {
            std::cout << "False" << std::endl;
        }
    }
    return 0;
}

void swap(Pets& sr1, Pets& sr2){
    Pets temp = sr1;
    sr1=sr2;
    sr2=temp;

}

int Home::sortedPets() {
    Pets* sortedPets = this->group;
    for(int i=0; i<3; i++){
        for (int j=0; j<3-i-1; j++) {
            if (this->getPetByIndex(j).getAge() < this->getPetByIndex(j + 1).getAge())
                swap(getPetByIndex(j), getPetByIndex(j + 1));
        }
    }
    for (int i=0; i<3; i++) {
      sortedPets[i].printPet();
    }
   return 0;
}