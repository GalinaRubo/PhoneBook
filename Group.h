#ifndef PHONEBOOK_GROUP_H
#define PHONEBOOK_GROUP_H

enum EGroup {
    Friends, Family, Other
};

struct Group {
    EGroup name;

    Group() {}
    Group(EGroup group)
    {
        name = group;
    }

    string ToString()
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
