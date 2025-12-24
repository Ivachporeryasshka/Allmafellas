//
// Created by Иваныч on 24.12.2025.
//
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string Caesar(string text, int shift)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (isalpha((unsigned char)text[i]))
        {
            char base = islower(text[i]) ? 'a' : 'A';
            text[i] = base + (text[i] - base + shift) % 26;
        }
    }
    return text;
}

int main()
{
    string word;
    int shift;

    cout << "Введите слово: ";
    cin >> word;
    cout << "Введите сдвиг: ";
    cin >> shift;

    cout << Caesar(word, shift) << endl;
    return 0;
}
