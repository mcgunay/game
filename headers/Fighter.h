//
// Created by z003j23c on 21.06.2018.
//
#include <vector>
#include <string>
#ifndef FIGHTER_H
#define FIGHTER_H



class Fighter {

public:

    Fighter(std::string name) : name(name) {

    }
    virtual ~Fighter(){

    }
    virtual const Fighter&& Die() = 0;

    static Fighter& PickNewMaster();

public:
    std::string name;
    static std::vector<Fighter*> fighters;

};




#endif //UNTITLED1_SPECIFICATIONS_H





