// Lab_04.3.cpp
// <Грицай Адріан Васильович>
// Лабораторна робота № 4
// Табуляція функції, заданої формулою: функція з параметрами.
// Варіант 14
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, Xp, Xk, dX, x, F;

    cin >> a >> b >> c >> Xp >> Xk >> dX;

    for (x = Xp; x <= Xk; x += dX) {
        if (x + c < 0 && a != 0)
            F = -a * x * x - b;
        else if (x + c > 0 && a == 0)
            F = (x - a) / (x - c);
        else
            F = (x + c) / (c + x);

        cout << x << " " << F << endl;
    }

    return 0;
}