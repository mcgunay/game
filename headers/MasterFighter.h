//
// Created by z003j23c on 7/18/2018.
//
#include "Fighter.h"
#include "../headers/IMasterPickingStrategy.h"
#ifndef UNTITLED1_MASTERFIGHTER_H
#define UNTITLED1_MASTERFIGHTER_H

#endif //UNTITLED1_MASTERFIGHTER_H

class MasterFighter : public Fighter{
public:
    MasterFighter(char *name, IMasterPickingStrategy *pickingStrategy)
            : Fighter(name), pickingStrategy(pickingStrategy) {}
    const Fighter&& Die() override;
    void PickNewMaster(){
        pickingStrategy->Pick();
    }

public:
    IMasterPickingStrategy* pickingStrategy;

};