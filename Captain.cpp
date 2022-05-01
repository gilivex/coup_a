#include <iostream>
#include <string>
#include "Game.hpp"
#include "Captain.hpp"

using namespace std;
using namespace coup;
namespace coup

{
    Captain& Captain::steal(Player p1){
        return *this;
    }
    Captain& Captain::block(Player p1){
        return *this;
    }
};
