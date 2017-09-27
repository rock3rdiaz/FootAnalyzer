#include "player.h"

namespace rocker {

Player::Player(std::string firstName, std::string lastName, Position position) : Person::Person(firstName, lastName){
    this->positions.push_back(position);
}

Player::Player(std::string firstName, std::string lastName, std::vector<Position> positions) : Person::Person(firstName, lastName){
    this->positions = positions;
}

void Player::addPosition(Position p) {
    this->positions.push_back(p);
}

void Player::removePosition(Position p) {
    std::cout << "not implement yet ...";
}

}

