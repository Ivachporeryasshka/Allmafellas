//
// Created by Иваныч on 24.12.2025.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int countStr;
    cout << "Введите количество строк: ";
    cin >> countStr;

    vector<string> inf(countStr);
    cout << "Введите строки:\n";
    for (int i = 0; i < countStr; i++)
        cin >> inf[i];

    string poisk;
    cout << "Введите поисковую строку: ";
    cin >> poisk;

    for (const auto& str : inf)
        if (str.find(poisk) != string::npos)
            cout << str << endl;

    return 0;
}
