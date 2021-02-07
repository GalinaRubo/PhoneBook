#ifndef PHONEBOOK_HUMAN_H
#define PHONEBOOK_HUMAN_H

#include <string>
#include "Date.h"

using namespace std;

class Human {
public:
    string firstName;
    string lastName;
    Date dateOfBirth;

    Human() {}
    Human(string firstName, string lastName, Date dateOfBirth)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->dateOfBirth = dateOfBirth;
    }
};

#endif //PHONEBOOK_HUMAN_H
