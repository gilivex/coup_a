#pragma once
#include <iostream>
#include "Player.hpp"
#include <string>

using namespace std;

namespace coup
{
    class Captain : public Player
    {

    public:
        Captain(Game, string);
        void steal(Player);
        void block(Player);
    };
}
