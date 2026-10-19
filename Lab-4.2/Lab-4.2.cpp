// LR 4.2.cpp
// Шийка Сергій Іванович
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної.
// Варіант 31

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, A, B, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << "    |"
        << setw(10) << "y" << "     |" << endl;
    cout << "---------------------------" << endl;

    x = xp;

    while (x <= xk)
    {
        A = 2 * fabs(13 - x);

        if (x <= -1)
            B = exp(fabs(x - 5));
        else
            if (x < 1)
                B = pow(sin(pow(x, 3)), 2) - 1;
            else
                B = cos(fabs(x)) / (1 + pow(sin(x), 2));

        y = A - B;

        cout << "|" << setw(7) << setprecision(2) << x
            << "    |" << setw(10) << setprecision(3) << y
            << "     |" << endl;

        x += dx;
    }

    cout << "---------------------------" << endl;

    return 0;
}