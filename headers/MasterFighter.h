//
// Created by z003j23c on 7/18/2018.
//
#include "Fighter.h"
#include "../headers/IMasterPickingStrategy.h"
#include <string>

#ifndef MASTERFIGHTER_H
#define MASTERFIGHTER_H


class MasterFighter : public Fighter{
public:
    MasterFighter(std::string name, IMasterPickingStrategy *pickingStrategy)
            : Fighter(name), pickingStrategy(pickingStrategy) {
        Fighter::fighters.push_back(this);
    }
    const Fighter&& Die() override;
    void PickNewMaster(){
        pickingStrategy->Pick();
    }

public:
    IMasterPickingStrategy* pickingStrategy;

};


#endif //UNTITLED1_MASTERFIGHTER_H