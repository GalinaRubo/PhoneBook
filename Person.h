#ifndef PHONEBOOK_PERSON_H
#define PHONEBOOK_PERSON_H

#include <string>
#include <vector>

#include "Date.h"
#include "Group.h"
#include "Human.h"
#include "IToString.h"

using namespace std;

struct Person : public Human, IToString {
    vector<string> emails;
    vector<Group> groups;

    string ToString() override
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
