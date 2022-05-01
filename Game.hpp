#pragma once
#include <vector>
#include <stdexcept>

using namespace std;
namespace coup
{
    class Player;
    class Game
    {
    private:
        vector<Player*> livePlayers;

    public:
        Game(){};
        ~Game(){};
        vector<string> players();
        Game& add_player(Player *new_Player);
        string turn();
        string winner();

    };
};