//
// Created by Иваныч on 24.12.2025.
//
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool revStr(string input)
{
    string sanit = "", rev = "";

    for (int i = 0; i < input.length(); i++)
        if (isalpha((unsigned char)input[i]))
            sanit += tolower((unsigned char)input[i]);

    for (int i = sanit.length() - 1; i >= 0; i--)
        rev += sanit[i];

    return rev == sanit;
}

int main()
{
    setlocale(LC_ALL, "rus");

    string input;
    cout << "Введите палиндром: ";
    getline(cin, input);

    if (revStr(input))
        cout << "palindrom\n";
    else
        cout << "ne palindrom\n";

    return 0;
}
