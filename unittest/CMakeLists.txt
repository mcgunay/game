cmake_minimum_required(VERSION 3.10)
project(untitled1)

set(CMAKE_CXX_STANDARD 11)

add_executable(unittestFighter catch.hpp ../headers ../Source/MasterFighter.cpp ../Source/RegularFighter.cpp Test_MasterFighter.cpp)