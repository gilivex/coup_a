#include <iostream>
#include <string>
#include "Duke.hpp"
#include "Player.hpp"

using namespace std;
namespace coup
{

    Duke& Duke::tax()
    {
        return *this;
    }
    Duke& Duke::block(Player)
    {
        return *this;
    }
};
