#ifndef PHONEBOOK_PHONEBOOK_H
#define PHONEBOOK_PHONEBOOK_H

#include <string>
#include <map>
#include "Person.h"

using namespace std;

struct PhoneBook {
private:
    map<string, Person> phoneBook;

public:
    PhoneBook() {}
    PhoneBook(map<string, Person> phoneBook) {
        this->phoneBook = phoneBook;
    }

    void Add(string tel, Person person) {
        phoneBook.insert(pair<string, Person>(tel, person));
    }

    bool SearchPerson(string tel, Person& person) {
        try {
            person = phoneBook.at(tel);
            return true;
        }
        catch (out_of_range) {
            return false;
        }
    }
};

#endif //PHONEBOOK_PHONEBOOK_H
