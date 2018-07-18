//
// Created by z003j23c on 7/18/2018.
//

#ifndef UNTITLED1_WEAPON_H
#define UNTITLED1_WEAPON_H

#endif //UNTITLED1_WEAPON_H
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