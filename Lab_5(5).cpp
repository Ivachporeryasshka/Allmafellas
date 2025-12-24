//
// Created by Иваныч on 24.12.2025.
//
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(nullptr));

    vector<string> names = { "Сергей", "Лёха", "Саня", "Виталик", "Владимир" };
    vector<string> surnames = { "Круг", "Дроздов", "Кемгушев", "Рыжов", "Шматко" };

    int num;
    cout << "Введите количество людей: ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << names[rand() % names.size()] << " "
             << surnames[rand() % surnames.size()] << endl;
    }

    return 0;
}
