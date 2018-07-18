//
// Created by z003j23c on 21.06.2018.
//
#include <vector>
#ifndef UNTITLED1_SPECIFICATIONS_H
#define UNTITLED1_SPECIFICATIONS_H

#endif //UNTITLED1_SPECIFICATIONS_H

class Fighter {

public:

    Fighter(char *name) : name(name) {

    }
    virtual ~Fighter(){

    }
    virtual const Fighter&& Die() = 0;

    static Fighter& PickNewMaster();

public:
    char* name;
    static std::vector<Fighter*> fighters;

};










