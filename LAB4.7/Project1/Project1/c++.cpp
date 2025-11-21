// Lab_04.7.cpp
// <Грицай Адріан Васильович>
// Лабораторна робота № 4
// Обчислення суми ряду Тейлораза допомогою ітераційних циклів та рекурентних співвідношень
// Варіант 14
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double xp, xk, x, dx, eps;
    double a, S;
    int n;

    cin >> xp >> xk >> dx >> eps;

    cout << fixed;
    cout << "-------------------------------------------------\n";
    cout << "|" << setw(7) << "x" << " |"
        << setw(12) << "cos(x)" << " |"
        << setw(12) << "S" << " |"
        << setw(5) << "n" << " |\n";
    cout << "-------------------------------------------------\n";

    for (x = xp; x <= xk; x += dx) {
        n = 0;
        a = 1;
        S = a;

        do {
            n++;
            a *= -(x * x) / ((2 * n - 1) * (2 * n));
            S += a;
        } while (fabs(a) >= eps);

        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(12) << setprecision(6) << cos(x) << " |"
            << setw(12) << setprecision(6) << S << " |"
            << setw(5) << n << " |\n";
    }

    cout << "-------------------------------------------------\n";
    return 0;
}