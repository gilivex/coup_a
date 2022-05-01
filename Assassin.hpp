#pragma once
#include <iostream>
#include <string>
#include "Player.hpp"

using namespace std;

namespace coup
{

    class Assassin : public Player
    {
        public:
        Assassin(Game, string);
        void coup(Player);
    };
}