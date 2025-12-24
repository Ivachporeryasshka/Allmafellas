//
// Created by Иваныч on 24.12.2025.
//
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool checkPass(string pass)
{
    if (pass.length() < 8 || pass.length() > 14)
        return false;

    bool upper = false, lower = false, digit = false, other = false;

    for (unsigned char c : pass)
    {
        if (c < 33 || c > 126)
            return false;

        if (isupper(c)) upper = true;
        else if (islower(c)) lower = true;
        else if (isdigit(c)) digit = true;
        else other = true;
    }

    return upper + lower + digit + other >= 3;
}

int main()
{
    string password;
    cout << "Введите пароль: ";
    cin >> password;

    if (checkPass(password))
        cout << "Правильный пароль!\n";
    else
        cout << "Неправильный пароль!\n";

    return 0;
}
