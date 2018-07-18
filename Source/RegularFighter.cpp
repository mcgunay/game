//
// Created by z003j23c on 7/18/2018.
//
#include "../headers/RegularFighter.h"
#include "../headers/MasterFighter.h"
#include <iostream>

MasterFighter* RegularFighter::master;


const Fighter&& RegularFighter::Die() {
    Fighter* dead_fighter = this;

    auto it = std::find(Fighter::fighters.begin(), Fighter::fighters.end(), this);
    if (it != Fighter::fighters.end()) { Fighter::fighters.erase(it); }

    std::cout << "Regular Fighter Died " << this->name << std::endl;
    return static_cast<const Fighter&&>(*dead_fighter);
}