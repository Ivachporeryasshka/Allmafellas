#include <iostream>
using namespace std;

int main() {
    int N, a, b;
    cout << "Введите размер матрицы N (>=3): ";
    cin >> N;
    cout << "Введите a и b (диапазон чисел): ";
    cin >> a >> b;

    if(N < 3) {
        cout << "Матрица слишком маленькая для зеленой и красной областей.\n";
        return 0;
    }

    int A[20][20];

    // Заполняем матрицу числами из [a,b]
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int val = a + (i*N + j) % (b - a + 1); // детерминированно

            // Зеленая область — отрицательные числа
            if(j<i && i+j<N-1)
                val = -abs(val);

            // Красная область — положительные числа
            if(i<j && i+j<N-1)
                val = abs(val);

            A[i][j] = val;
        }
    }

    cout << "\nИсходная матрица:\n";
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)
            cout << A[i][j] << "\t";
        cout << endl;
    }

    // Поиск элементов для обмена
    int maxNeg = -100000, minPos = 100000;
    int in=0, jn=0, ip=0, jp=0;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(j<i && i+j<N-1 && A[i][j] < 0 && A[i][j] > maxNeg){
                maxNeg = A[i][j];
                in=i; jn=j;
            }
            if(i<j && i+j<N-1 && A[i][j] > 0 && A[i][j] < minPos){
                minPos = A[i][j];
                ip=i; jp=j;
            }
        }
    }

    // Меняем элементы местами
    int tmp = A[in][jn];
    A[in][jn] = A[ip][jp];
    A[ip][jp] = tmp;

    cout << "\nМатрица после обмена:\n";
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)
            cout << A[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
