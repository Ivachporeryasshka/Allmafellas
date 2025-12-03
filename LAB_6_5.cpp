 #include <fstream>
 #include <iostream>
 using namespace std;
//
// int main() {
//     int number;
//     int min = 1000;
//
//     ifstream file_f("numbers4.txt", ios::binary);
//     if (!file_f) {
//         cerr << "Не удалось открыть файл." << endl;
//         return 1;
//     }
//
//     file_f.seekg(0, ios::beg);
//
//     while (file_f.read((char*)&number, sizeof(number))) {
//         if (number < min) {
//             min = number;
//         }
//     }
//
//     cout << "минимальное число: " << min << endl;
//
//     file_f.close();
//     return 0;
// }
int main() {
 fstream file_f("numbers3.txt", ios::in | ios::out | ios::binary);
 
}