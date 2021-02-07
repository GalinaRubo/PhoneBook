#ifndef PHONEBOOK_PHONEBOOK_H
#define PHONEBOOK_PHONEBOOK_H

#include <string>
#include <map>
#include "Person.h"

using namespace std;

struct PhoneBook {
    map<string, Person> phoneBook;

    PhoneBook() {}
    PhoneBook(map<string, Person> phoneBook) {
        this->phoneBook = phoneBook;
    }

    void Add(string tel, Person person) {
        phoneBook.insert(pair<string, Person>(tel, person));
    }
    Person SearchPerson(string tel) {
        return phoneBook[tel];
    }
};

#endif //PHONEBOOK_PHONEBOOK_H
