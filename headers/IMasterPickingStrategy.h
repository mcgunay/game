//
// Created by z003j23c on 7/18/2018.
//
#include "../headers/Fighter.h"
#ifndef IMASTERPICKINGSTRATEGY_H
#define IMASTERPICKINGSTRATEGY_H




class IMasterPickingStrategy{
public:
    virtual const Fighter& Pick() = 0;

};

#endif //UNTITLED1_IMASTERPICKINGSTRATEGY_H