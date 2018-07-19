//
// Created by z003j23c on 7/18/2018.
//
#include "../headers/RegularFighter.h"
#include "../headers/MasterFighter.h"
#include <iostream>
#include <algorithm>


Fighter* RegularFighter::master;

std::vector<Fighter*> Fighter::fighters;

const Fighter&& RegularFighter::Die() {
    Fighter* dead_fighter = this;

    auto it = std::find(begin(Fighter::fighters), end(Fighter::fighters), this);
    if (it != Fighter::fighters.end()) { Fighter::fighters.erase(it); }

    std::cout << "Regular Fighter Died " << this->name << std::endl;
    return static_cast<const Fighter&&>(*dead_fighter);
}