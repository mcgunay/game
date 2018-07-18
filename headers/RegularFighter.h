//
// Created by z003j23c on 7/18/2018.
//
#include "Fighter.h"
#ifndef UNTITLED1_REGULARFIGHTER_H
#define UNTITLED1_REGULARFIGHTER_H

#endif //UNTITLED1_REGULARFIGHTER_H


class RegularFighter : public Fighter{
public:
    RegularFighter(char *name) : Fighter(name) {}
    static void SetMaster(Fighter* master){
        RegularFighter::master = master;
    }
    const Fighter&& Die() override;
public:
    static Fighter* master;

};