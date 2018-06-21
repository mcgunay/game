#include <iostream>
#include "Fighter.h"
#include <vector>
#include <algorithm>

int main() {

    std::vector<Fighter*> vec;
    MasterFighter master("Master");
    RegularFighter figther("SomeFighter");
    figther.SetMaster(&master);
    vec.push_back(&master);
    vec.push_back(&figther);

    std::for_each(vec.begin(), vec.end(), [](Fighter* f){
        std::cout << "Figther: " << f->name << std::endl;   });

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}