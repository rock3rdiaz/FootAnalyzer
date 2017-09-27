#ifndef PERSON_H
#define PERSON_H

#include <string>

namespace rocker {

class Person
{
public:
    Person(std::string fn, std::string ln) : firstName(fn), lastName(ln) {}
    ~Person();
    inline std::string getFirstName() { return firstName; }
    inline std::string getLastame() { return lastName; }
private:
    std::string firstName;
    std::string lastName;
};

}

#endif // PERSON_H
