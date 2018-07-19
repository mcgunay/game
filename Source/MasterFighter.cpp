//
// Created by z003j23c on 7/18/2018.
//
#include "../headers/RegularFighter.h"
#include "../headers/MasterFighter.h"
#include "../headers/RandomMasterPickingStrategy.h"
#include <iostream>
#include <algorithm>

const Fighter&& MasterFighter::Die() {

    Fighter* old_master = RegularFighter::master;
    //Remove old master from the list
    auto it = std::find(begin(Fighter::fighters), end(Fighter::fighters), this);
    if (it != Fighter::fighters.end()) { Fighter::fighters.erase(it); }

    //Picking new master
    MasterFighter::PickNewMaster();

    return  static_cast<const Fighter&&>(*old_master);

}

