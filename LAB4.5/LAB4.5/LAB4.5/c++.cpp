// Lab_04.5.cpp
// <Грицай Адріан Васильович>
// Лабораторна робота № 4
// «Попадання» у плоску фігуру
// Варіант 14
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
    double x, y, R1, R2;
    cin >> R1 >> R2;
    srand((unsigned)time(NULL));

    for (int i = 0; i < 10; i++) {
        cin >> x >> y;
        double r2 = x * x + y * y;
        if (r2 >= R1 * R1 && r2 <= R2 * R2 && x >= 0)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    for (int i = 0; i < 10; i++) {
        x = (double)rand() / RAND_MAX * (2 * R1) - R1;
        y = (double)rand() / RAND_MAX * (2 * R1) - R1;
        double r2 = x * x + y * y;
        cout << fixed << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " ";
        if (r2 >= R1 * R1 && r2 <= R2 * R2 && x >= 0)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}