#ifndef PHONEBOOK_GROUP_H
#define PHONEBOOK_GROUP_H

#include <string>
#include "IToString.h"

using namespace std;

enum EGroup {
    Friends, Family, Other
};

struct Group : public IToString {
    EGroup name;

    Group() {}
    Group(EGroup group)
    {
        name = group;
    }

    string ToString() override
    {
        switch (name) {
            case Friends:
                return "Friends";
            case Family:
                return "Family";
            case Other:
                return "Other";
        }
    }
};

#endif //PHONEBOOK_GROUP_H
