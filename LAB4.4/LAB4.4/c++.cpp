// Lab_04.4.cpp
// <Грицай Адріан Васильович>
// Лабораторна робота № 4
// Табуляція функції, заданої графіком.
// Варіант 14
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x_start, x_end, dx;
    cin >> x_start >> x_end >> dx;

    cout << "   x        y\n";
    cout << "--------------\n";

    for (double x = x_start; x <= x_end + dx / 2; x += dx) {
        double y;

        if (x < -4)
            y = -2;
        else if (x >= -4 && x < 0)
            y = (-2) + (1 + 2) / 4.0 * (x + 4);
        else if (x >= 0 && x <= 2)
            y = x * x;
        else if (x > 2 && x <= 10)
            y = 4 + (0 - 4) / (10 - 2) * (x - 2);
        else
            y = 0;

        cout << setw(6) << fixed << setprecision(2) << x
            << setw(10) << fixed << setprecision(2) << y << endl;
    }

    return 0;
}