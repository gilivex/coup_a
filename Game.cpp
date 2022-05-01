#include "Game.hpp"
#include <string>
#include <vector>
#include <iostream>
using namespace std;
using namespace coup;

    vector<string> Game::players(){
        vector <string> Players_names;
        return Players_names;
    }
    string Game::turn(){
        return "player turn is:";
    }
    Game& Game::add_player(Player *new_Player){
        livePlayers.push_back(new_Player);
        return *this;
           }
    string Game::winner(){
        return "the winner is: ";
    }

