
//
// Created by z003j23c on 21.06.2018.
//
#include "Fighter.h"

MasterFighter* RegularFighter::master;

void RegularFighter::SetMaster(MasterFighter* master) {
    master = master;
}

Fighter& MasterFighter::Die() {
    // set new static master
    // remove from the fighters list
    return new Fighter("dummy");
    
}
