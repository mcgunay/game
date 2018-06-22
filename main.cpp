#include <iostream>
#include "Fighter.h"
#include <vector>
#include <algorithm>
#include <time.h>

int main() {
    srand (time(NULL));
    MasterFighter master("Master");
    RegularFighter figther_1("Fighter_1");
    RegularFighter figther_2("Fighter_2");
    RegularFighter figther_3("Fighter_3");
    RegularFighter figther_4("Fighter_4");
    RegularFighter figther_5("Fighter_5");
    figther_1.SetMaster(&master);
    Fighter::fighters.push_back(&master);
    Fighter::fighters.push_back(&figther_1);
    Fighter::fighters.push_back(&figther_2);
    Fighter::fighters.push_back(&figther_3);
    Fighter::fighters.push_back(&figther_4);
    Fighter::fighters.push_back(&figther_5);

    std::for_each(Fighter::fighters.begin(), Fighter::fighters.end(), [](Fighter* f){
        std::cout << "Figther: " << f->name << std::endl;   });

    Fighter& dead_master = master.Die();
    std::cout << "Dead Master " << dead_master.name << std::endl;
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}