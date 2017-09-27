#include "team.h"

namespace rocker {

Team::Team()
{

}

bool Team::teamIsComplete() {
    return this->players.size() == PLAYERS_LIMIT;
}

void Team::addPlayer(Player *p) {
    if(!this->teamIsComplete()) {
        this->players.push_back(p);
    } else {
        std::cout << "the team is complete" << std::endl;
    }
}

}


