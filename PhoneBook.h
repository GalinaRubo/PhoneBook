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
    void (*message)(string msg);

    PhoneBook() {}
    PhoneBook(map<string, Person> phoneBook) {
        this->phoneBook = phoneBook;
    }

    void Add(string tel, Person person) {
        phoneBook.insert(pair<string, Person>(tel, person));
        message("Данные успешно добавлены");
    }

    bool SearchPerson(string tel, Person& person) {
        try {
            person = phoneBook.at(tel);
            message("Данные найдены");
            return true;
        }
        catch (out_of_range) {
            message("Данные не найдены");
            return false;
        }
    }
};

#endif //PHONEBOOK_PHONEBOOK_H
