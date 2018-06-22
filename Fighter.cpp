
//
// Created by z003j23c on 21.06.2018.
//
#include "Fighter.h"
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <chrono>
#include <utility>

MasterFighter* RegularFighter::master;
std::vector<Fighter*> Fighter::fighters;

const Fighter &RandomMasterPickingStrategy::Pick() {
    int rnd  = rand() % Fighter::fighters.size();
    //int rnd = 1;
    Fighter* new_master = (Fighter*)Fighter::fighters.at(rnd);

    RegularFighter::master = new MasterFighter(new_master->name, nullptr);

    std::cout << "New Master is " << RegularFighter::master->name << std::endl;

    return *new_master;
}

Fighter&& RegularFighter::Die() {
    Fighter* dead_fighter = this;

    auto it = std::find(Fighter::fighters.begin(), Fighter::fighters.end(), this);
    if (it != Fighter::fighters.end()) { Fighter::fighters.erase(it); }

    std::cout << "Regular Fighter Died " << this->name << std::endl;
    return static_cast<Fighter&&>(*dead_fighter);
}
Fighter&& MasterFighter::Die() {

    MasterFighter* old_master = RegularFighter::master;
    //Remove old master from the list
    auto it = std::find(Fighter::fighters.begin(), Fighter::fighters.end(), this);
    if (it != Fighter::fighters.end()) { Fighter::fighters.erase(it); }

    //Picking new master
    MasterFighter::PickNewMaster();

    return  static_cast<Fighter&&>(*old_master);;

}


