//
// Created by z003j23c on 7/18/2018.
//
#include "../headers/RegularFighter.h"
#include "../headers/MasterFighter.h"
#include "../headers/RandomMasterPickingStrategy.h"
#include <iostream>

const Fighter &RandomMasterPickingStrategy::Pick() {
    int rnd  = rand() % Fighter::fighters.size();
    //int rnd = 1;
    Fighter* new_master = (Fighter*)Fighter::fighters.at(rnd);

    RegularFighter::master = new MasterFighter(new_master->name, nullptr);

    std::cout << "New Master is " << RegularFighter::master->name << std::endl;

    return *new_master;
}