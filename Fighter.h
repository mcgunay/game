//
// Created by z003j23c on 21.06.2018.
//
#include <vector>
#ifndef UNTITLED1_SPECIFICATIONS_H
#define UNTITLED1_SPECIFICATIONS_H

#endif //UNTITLED1_SPECIFICATIONS_H

enum class WeaponType  {Sword, Gun};

class Weapon{

public:
    char* name;
    double power;
    WeaponType weaponType;
public:
    Weapon(double power, char *name, WeaponType weaponType) : power(power), name(name), weaponType(weaponType) {

    }
};

class Fighter {

public:

    Fighter(char *name) : name(name) {

    }
    virtual ~Fighter(){

    }
    virtual Fighter& Die() = 0;

public:
    char* name;
    static std::vector<Fighter*> fighters;

};

class MasterFighter : public Fighter{
public:
    MasterFighter(char *name) : Fighter(name) {}
    Fighter& Die() override;


};

class RegularFighter : public Fighter{
public:
    RegularFighter(char *name) : Fighter(name) {}
    static void SetMaster(MasterFighter* master){
        RegularFighter::master = master;
    }
    Fighter& Die() override;
public:
    static MasterFighter* master;

};







