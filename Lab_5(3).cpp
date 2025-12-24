//
// Created by Иваныч on 24.12.2025.
//
#include <iostream>

using namespace std;

unsigned int strLen(const char* input)
{
    unsigned int count = 0;
    while (input[count] != '\0')
        count++;
    return count;
}

int main()
{
    char str[100];
    cout << "Введите строку: ";
    cin >> str;

    cout << "len = " << strLen(str) << endl;
    return 0;
}
