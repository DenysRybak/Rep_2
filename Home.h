
#include "Pets.h"

class Home {
private:
    Pets* group;
public:
    Home(Pets group[3]);
    Pets& getPetByIndex(int i);
    void printAllPets();
    void findFriends();
    int isPolite();
    const char *greeting;
    int sortedPets();
    //Functions
};