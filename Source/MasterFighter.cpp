//
// Created by z003j23c on 7/18/2018.
//
#include "../headers/RegularFighter.h"
#include "../headers/MasterFighter.h"
#include "../headers/RandomMasterPickingStrategy.h"
#include <iostream>

const Fighter&& MasterFighter::Die() {

    MasterFighter* old_master = RegularFighter::master;
    //Remove old master from the list
    auto it = std::find(Fighter::fighters.begin(), Fighter::fighters.end(), this);
    if (it != Fighter::fighters.end()) { Fighter::fighters.erase(it); }

    //Picking new master
    MasterFighter::PickNewMaster();

    return  static_cast<const Fighter&&>(*old_master);;

}

