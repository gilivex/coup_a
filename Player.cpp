#include <string>
#include <iostream>
#include <stdexcept>
#include "Player.hpp"

using namespace std;
using namespace coup;
namespace coup
{


  string Player::role()
  {
    return " this player role is: ";
  }

  Player& Player::income()
  {
       player_coins++;
      return *this;
  }

  Player& Player::foreign_aid()
  {
    player_coins += 2;
      return *this;
  }

  Player& Player::coup(Player*)
  {
      return *this;
  }

  Player& Player::block()
  {
    throw runtime_error("you cannot do this action");
  }

  int Player::coins()
  {
    return this->player_coins;
  }
}