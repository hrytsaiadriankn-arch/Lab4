// Lab_04_1.cpp
// <Грицай Адріан Васильович>
// Лабораторна робота № 4.1
// Цикли.
// Варіант 14
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, i;
    double P;

    cin >> N;

    P = 1;
    i = N;
    while (i <= 10)
    {
        P *= (i + 1.0 / (i * i)) / sqrt(1 + exp(i));
        i++;
    }
    cout << P << endl;

    P = 1;
    i = N;
    do {
        P *= (i + 1.0 / (i * i)) / sqrt(1 + exp(i));
        i++;
    } while (i <= 10);
    cout << P << endl;

    P = 1;
    for (i = N; i <= 10; i++)
    {
        P *= (i + 1.0 / (i * i)) / sqrt(1 + exp(i));
    }
    cout << P << endl;

    P = 1;
    for (i = 10; i >= N; i--)
    {
        P *= (i + 1.0 / (i * i)) / sqrt(1 + exp(i));
    }
    cout << P << endl;

    return 0;
}