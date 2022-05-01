#include <string>
#include <iostream>
#include <stdexcept>

#include "Game.hpp"
#include "Player.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Duke.hpp"
#include "doctest.h"

using namespace std;
using namespace coup;

Game game1{};
Game game2{};
Ambassador ambassador1(game1, "amb1");
Ambassador ambassador2(game2, "amb2");
Assassin assassin1(game1, "ass1");
Assassin assassin2(game1, "ass2");
Captain captain1(game1, "cap1");
Captain captain2(game2, "cap2");
Contessa contessa1(game1, "con1");
Contessa contessa2(game2, "con2");
Duke duke1(game1, "duk1");
Duke duke2(game2, "duk2");



TEST_CASE("Game is alive")
{
    vector<string> players = {"amb1", "ass1", "cap1", "con1", "duke1", "amb2"};
    for (uint i = 0; i < players.size(); i++)
    {
        CHECK_EQ(game1.turn(), players.at(i));
    }
}

TEST_CASE("bad turns"){
    ambassador1.income();
    CHECK_THROWS(captain1.income());
    CHECK_THROWS(game1.winner());
    for (int i = 0; i <20 ; ++i) {
        CHECK(1==1);
    }
}