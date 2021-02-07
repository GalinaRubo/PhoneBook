#ifndef PHONEBOOK_DATE_H
#define PHONEBOOK_DATE_H

#include <string>

using namespace std;

struct Date {
private:
    int year;
    int month;
    int day;

public:
    void SetYear(int year)
    {
        if (year < 0) {
            throw 0;
        } else {
            this->year = year;
        }
    }
    void SetMonth(int month)
    {
        if (month < 1 || month > 12) {
            throw 0;
        } else {
            this->month = month;
        }
    }
    void SetDay(int day)
    {
        if (day < 1 || day > 31) {
            throw 0;
        } else {
            this->day = day;
        }
    }
    int GetYear()
    {
        return year;
    }
    int GetMonth()
    {
        return month;
    }
    int GetDay()
    {
        return day;
    }

    void SetDate(int year, int month, int day)
    {
        try {
            SetYear(year);
            SetMonth(month);
            SetDay(day);
        } catch (...) {
            throw 'D';
        }
    }

    Date(){}
    Date(int year, int month, int day)
    {
        SetDate(year, month, day);
    }

    string ToString()
    {
        string temp = to_string(day) + "." + to_string(month) + "." + to_string(year);
        return temp;
    }
};

#endif //PHONEBOOK_DATE_H
