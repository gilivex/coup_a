#include <iostream>
#include <string>
#include "Game.hpp"
#include "Contessa.hpp"

using namespace std;
namespace coup
{
    Contessa Contessa : (Game game, string name) : Player(game, name)
    {
    }
    void Contessa::block()
    {
    }

}