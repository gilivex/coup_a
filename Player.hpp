#pragma once
#include "Game.hpp"
#include <string>
#include <iostream>


using namespace std;
namespace coup{

class Player {

private:
string name;


public:
Player(Game game,string name);
string role();
int player_coins = 0;
void income();
void foreign_aid();
void coup(Player);
void block();
int coins();
};
}