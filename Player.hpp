#pragma once
#include "Game.hpp"
#include <string>
#include <iostream>


using namespace std;
namespace coup{
class Game;
class Player {

private:
string name;
int player_coins;
Game& currGame;
string my_role;

public:
    //constractor
Player(Game &game,string name,string role): currGame(game),name(name),my_role(role),player_coins(0){};
~Player(){};
    // getters and setter
    string role();
    Player& income();
    Player& foreign_aid();
    Player& coup(Player*);
    Player& block();
    int coins();
};
}