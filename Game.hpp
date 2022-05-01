#pragma once
#include <vector>
#include <stdexcept>

using namespace std;
namespace coup
{
    class Game
    {
    private:
        string winner();

    public:
        Game(); 
        vector<string> players();
        string turn();
    };
}