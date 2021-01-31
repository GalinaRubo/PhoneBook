/*
 * PhoneBook
 * v0.1.0
 */

#include <iostream>

#include "cli.h"

using namespace std;

int main()
{
    system("chcp 65001");

    bool exit = false;
    char selectMenu;

    PrintWelcome();

    do {
        PrintMenu();
        cin >> selectMenu;

        switch (selectMenu) {
            case '1': // 1. Новый контакт
                break;
            case '2': // 2. Поиск контакта
                break;
            case '3': // 3. Изменение контакта
                break;
            case '4': // 4. Экспортировать всё в файл
                break;
            case '0': // 0. Выход
                exit = true;
                break;
            default:
                cout << "Повторите ввод!" << endl;
                break;
        }
    } while (!exit);

    cout << "До новых встреч!" << endl;
}
