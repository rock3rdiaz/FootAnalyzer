#include "team.h"

namespace rocker {

Team::Team()
{

}

bool Team::teamIsComplete() {
    return this->players.size() == PLAYERS_LIMIT;
}

}


