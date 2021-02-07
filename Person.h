#ifndef PHONEBOOK_PERSON_H
#define PHONEBOOK_PERSON_H

#include <string>
#include <vector>

#include "Date.h"
#include "Group.h"
#include "Human.h"

using namespace std;

struct Person : public Human {
    vector<string> emails;
    vector<Group> groups;

    string ToString()
    {
        string str;
        str = firstName + " " + lastName + " " + dateOfBirth.ToString() + " ";
        for (auto item : emails) {
            str += item + " ";
        }
        for (auto item : groups) {
            str += item.ToString() + " ";
        }
        return str;
    }
};

#endif //PHONEBOOK_PERSON_H
