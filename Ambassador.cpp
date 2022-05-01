#include <iostream>
#include "Player.hpp"
#include <string>
#include "Ambassador.hpp"


using namespace std;
using namespace coup;
namespace coup
{
    
    Ambassador& Ambassador::transfer(Player p1, Player p2)
    {
        return *this;
    }
    Ambassador& Ambassador::block(Player)
    {
        return *this;
    }
};
