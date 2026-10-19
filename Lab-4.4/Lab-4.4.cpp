// LR 4.4.cpp
// Шийка Сергій Іванович
// Лабораторна робота № 4.4
// Табуляція функції, заданої графічно.
// Варіант 31

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double R, x, xp, xk, dx, F;

    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;

    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << "    |"
        << setw(10) << "F" << "     |" << endl;
    cout << "---------------------------" << endl;

    x = xp;

    while (x <= xk)
    {
        if (x < -1 - R)
        {
            F = -x - 1 - R;
        }
        else if (x < -1)
        {
            F = sqrt(R * R - (x + 1) * (x + 1));
        }
        else if (x <= 1)
        {
            F = R;
        }
        else if (x < 2)
        {
            F = R - (R + 1) * (x - 1);
        }
        else
        {
            F = -1;
        }

        cout << "|" << setw(7) << setprecision(2) << x
            << "    |" << setw(10) << setprecision(3) << F
            << "     |" << endl;

        x += dx;
    }

    cout << "---------------------------" << endl;

    return 0;
}