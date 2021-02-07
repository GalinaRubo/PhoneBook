#ifndef PHONEBOOK_CLI_H
#define PHONEBOOK_CLI_H

#include <iostream>
#include <string>

#include "Person.h"

using namespace std;

void PrintWelcome()
{
    cout << "=======================" << endl;
    cout << "====== PhoneBook ======" << endl;
    cout << "= (c) STEP IT Academy =" << endl;
    cout << "=== Версия: v0.1.0 ====" << endl;
    cout << "=======================" << endl;
    cout << endl;
}

void PrintMenu()
{
    cout << "Меню:" << endl;
    cout << "1. Новый контакт" << endl;
    cout << "2. Поиск контакта" << endl;
    cout << "3. Изменение контакта" << endl;
    cout << "4. Экспортировать всё в файл" << endl;
    cout << "0. Выход" << endl;
}

#endif //PHONEBOOK_CLI_H
