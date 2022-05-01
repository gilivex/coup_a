#include <iostream>
#include "Player.hpp"
#include <string>
#include "Ambassador.hpp"

using namespace std;
namespace coup
{
    
    Ambassador Ambassador : (Game game, string name) : Player(game, name)
    {
    }

    void Ambassador::transfer()
    {
    }
    void Ambassador::block()
    {
    }

}
}