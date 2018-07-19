//
// Created by ctsnz0060 on 19.07.2018.
//


#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../headers/Fighter.h"
#include "../headers/IMasterPickingStrategy.h"
#include "../headers/MasterFighter.h"
#include "../headers/RegularFighter.h"
#include "../headers/RandomMasterPickingStrategy.h"


class FakePickingStrategy: public IMasterPickingStrategy{

public:
    const Fighter &Pick(){
        Fighter* new_master = (Fighter*)Fighter::fighters.at(0);

        RegularFighter::master = new MasterFighter(new_master->name, nullptr);

        return *new_master;
    }
};

class TestFixture{
public:
    MasterFighter *master;
    RegularFighter *fighter1;
    RegularFighter *fighter2;

    TestFixture(){
        master = new MasterFighter("Master", new FakePickingStrategy);
        fighter1 = new RegularFighter("Fighter1");
        fighter2 = new RegularFighter("Fighter2");
    }

    ~TestFixture(){
    }
};

TEST_CASE_METHOD(TestFixture, "01_When a masterfighter die, a new masterfigher should be picked."){

    master->Die();

    CHECK(RegularFighter::master->name == fighter1->name);
}

/*TEST_CASE( "When a masterfighter die, a new masterfigher should be picked.", "[MasterFighter]")
{

    MasterFighter master("Master", new FakePickingStrategy);
    RegularFighter fighter1("Fighter1");
    RegularFighter fighter2("Fighter2");

    master.Die();

    CHECK(RegularFighter::master->name == fighter1.name);
}*/

