#include <iostream>
#include <string>
#include <Assassin.hpp>
#include <Player.hpp>
#include <stdexcept>

using namespace std;

namespace coup
{
    
    Assassin Assassin :(Game game, string name) : Player(game, name)
    {
    }

    void Assassin::coup(Player p1) {
        this-> player_coins -= 3;

    };
}