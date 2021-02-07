#ifndef PHONEBOOK_PERSON_H
#define PHONEBOOK_PERSON_H

#include <string>
#include <vector>

#include "Date.h"
#include "Group.h"

using namespace std;

struct Person {
    string firstName;
    string lastName;
    Date dateOfBirth;
    vector<string> emails;
    vector<Group> groups;
};

#endif //PHONEBOOK_PERSON_H
