#ifndef COACH_H
#define COACH_H

#include "person.h"
#include <string>

namespace rocker {

class Coach : public Person
{
public:
    Coach(std::string firstName, std::string lastName) : Person::Person(firstName, lastName) {}
    ~Coach();
};

}

#endif // COACH_H
