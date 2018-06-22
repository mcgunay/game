
//
// Created by z003j23c on 21.06.2018.
//
#include "Fighter.h"
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <chrono>

MasterFighter* RegularFighter::master;
std::vector<Fighter*> Fighter::fighters;


Fighter& RegularFighter::Die() {
    Fighter* dead_fighter = this;

    auto it = std::find(Fighter::fighters.begin(), Fighter::fighters.end(), this);
    if (it != Fighter::fighters.end()) { Fighter::fighters.erase(it); }

    std::cout << "Regular Fighter Died " << this->name << std::endl;
    return *dead_fighter;
}
Fighter& MasterFighter::Die() {

    int rnd  = rand() % this->fighters.size();
    //int rnd = 1;
    Fighter* new_master = (Fighter*)Fighter::fighters.at(rnd);
    MasterFighter* old_master = RegularFighter::master;
    //Remove old master from the list
    auto it = std::find(Fighter::fighters.begin(), Fighter::fighters.end(), this);
    if (it != Fighter::fighters.end()) { Fighter::fighters.erase(it); }

    RegularFighter::master = new MasterFighter(new_master->name);

    std::cout << "New Master is " << RegularFighter::master->name << std::endl;

    return *old_master;

}
