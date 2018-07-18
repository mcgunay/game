cmake_minimum_required(VERSION 3.10)
project(untitled1)

set(CMAKE_CXX_STANDARD 11)

add_executable(untitled1 main.cpp headers/Fighter.h headers/RegularFighter.h headers/MasterFighter.h headers/Weapon.h headers/IMasterPickingStrategy.h headers/RandomMasterPickingStrategy.h Source/RandomMasterPickingStrategy.cpp Source/RegularFighter.cpp Source/MasterFighter.cpp)