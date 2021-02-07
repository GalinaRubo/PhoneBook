#ifndef PHONEBOOK_DATE_H
#define PHONEBOOK_DATE_H

#include <string>

using namespace std;

struct Date {
    int year;
    int month;
    int day;

    Date(){}
    Date(int year, int month, int day)
    {
        this->year = year;
        this->month = month;
        this->day = day;
    }

    string ToString()
    {
        string temp = to_string(day) + "." + to_string(month) + "." + to_string(year);
        return temp;
    }
};

#endif //PHONEBOOK_DATE_H
