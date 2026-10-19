// LR 4.3.cpp
// Шийка Сергій Іванович
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами.
// Варіант 31

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    double x, xp, xk, dx, F;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

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
        if (x < 1 && c != 0)
        {
            F = a * x * x + b / c;

            cout << "|" << setw(7) << setprecision(2) << x
                << "    |" << setw(10) << setprecision(3) << F
                << "     |" << endl;
        }
        else if (x > 1.5 && c == 0)
        {
            F = (x - a) / pow(x - c, 2);

            cout << "|" << setw(7) << setprecision(2) << x
                << "    |" << setw(10) << setprecision(3) << F
                << "     |" << endl;
        }
        else
        {
            if (c == 0)
            {
                cout << "|" << setw(7) << setprecision(2) << x
                    << "    |" << setw(10) << "undef"
                    << "     |" << endl;
            }
            else
            {
                F = (x * x) / (c * c);

                cout << "|" << setw(7) << setprecision(2) << x
                    << "    |" << setw(10) << setprecision(3) << F
                    << "     |" << endl;
            }
        }

        x += dx;
    }

    cout << "---------------------------" << endl;

    return 0;
}