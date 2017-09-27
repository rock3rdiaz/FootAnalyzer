#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"
#include "structs/position.h"
#include <vector>
#include <string>
#include <iostream>

namespace rocker {

class Player : public Person
{
public:
    Player(std::string firstName, std::string lastName) : Person(firstName, lastName) {}
    Player(std::string firstName, std::string lastName, Position position);
    Player(std::string firstName, std::string lastName, std::vector<Position> position);

    inline std::vector<Position> getPositions() { return positions; }

    void addPosition(Position p);
    void removePosition(Position p);
private:
    std::vector<Position> positions;
};

}

#endif // PLAYER_H
