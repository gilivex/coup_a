#include <string>
#include <iostream>
#include <stdexcept>
#include "Player.hpp"

using namespace std;

namespace coup
{

  Player::Player(Game game, string name): game,name(game,name)
  {
  }

  string Player::role()
  {
    return " this player role is: ";
  }

  void Player::income()
  {
    player_coins++;
  }

  void Player::foreign_aid()
  {
    player_coins += 2;
  }
  
  void Player::coup(Player)
  {
  }

  void Player::block()
  {
  }

  int Player::coins()
  {
    return this->player_coins;
  }
}