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
Ambassador ambassador1(game1, "amb");
Ambassador ambassador2(game2, "amb2");
Assassin assassin1(game1, "ass1");
Assassin assassin2(game1, "ass2");
Captain captain1(game1, "cap1");
Captain captain2(game2, "cap2");
Contessa contessa1(game1, "con1");
Contessa contessa2(game2, "con2");
Duke duke1(game1, "duk1");
Duke duke2(game2, "duk2");

vector<Player> game1_players = {ambassador1,assassin1,captain1,contessa1,duke1};
vector<Player> game2_players = {ambassador2,assassin2,captain2,contessa2,duke2};

TEST_CASE("Game is alive")
{
    vector<string> names = {"shlomo", "noga", "noam", "harel", "haim", "dovi"};
    for (uint i = 0; i < players.size(); i++)
    {
        CHECK_EQ(g1.turn(), names.at(i));
        players.at(i).income();
    }
}
TEST_CASE("income&foreign_aid")
{
    for (int i = 1; i <= 10; i++)
    {
        CHECK_EQ(duke1.coins(), i);
        duke1.income();
    }
    for (int i = 10; i <= 30; i += 2)
    {
        CHECK_EQ(duke1.coins(), i);
        duke1.foreign_aid();
    }
}
