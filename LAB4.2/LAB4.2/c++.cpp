// Lab_04.2.cpp
// <Грицай Адріан Васильович>
// Лабораторна робота № 4
// Табуляція функції, заданої формулою: функція однієї змінної.
// Варіант 14
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, xp, xk, dx, y;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(12) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x < 0)
            y = pow(x, 7) - 2 * x;
        else if (x < 3)
            y = fabs(4 * x - 1) + atan((exp(x) + 1) / 8.0);
        else
            y = pow(x, 4) + exp(pow(x, 3));

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(12) << setprecision(4) << y
            << " |" << endl;

        x += dx;
    }

    cout << "---------------------------" << endl;
    return 0;
}