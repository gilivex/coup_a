#include <iostream>
#include <string>
#include "Game.hpp"
#include "Contessa.hpp"

using namespace std;
using namespace coup;
namespace coup
{
    Contessa& Contessa::block(Player& p1)
    {
        return *this;
    }
};