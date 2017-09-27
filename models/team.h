#ifndef TEAM_H
#define TEAM_H

#include <string>
#include "player.h"

namespace rocker {

class Team
{
public:
    Team();

    static const unsigned short PLAYERS_LIMIT = 23;

    inline std::vector<Player> getPlayers(){ return players; }
    inline std::string getName(){ return name; }
    inline unsigned short getYearOfFundation(){ return yearOfFoundation; }

    bool teamIsComplete();
private:
    std::string name;
    unsigned short yearOfFoundation;
    std::vector<Player> players;
};

}

#endif // TEAM_H
