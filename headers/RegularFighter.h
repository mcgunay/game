//
// Created by z003j23c on 7/18/2018.
//
#include "Fighter.h"
#include <string>
#ifndef REGULARFIGHTER_H
#define REGULARFIGHTER_H



class RegularFighter : public Fighter{
public:
    RegularFighter(std::string name) : Fighter(name) {
        Fighter::fighters.push_back(this);
    }
    static void SetMaster(Fighter* master){
        RegularFighter::master = master;
    }
    const Fighter&& Die() override;
public:
    static Fighter* master;

};


#endif //UNTITLED1_REGULARFIGHTER_H