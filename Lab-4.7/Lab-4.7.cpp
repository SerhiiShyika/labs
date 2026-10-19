// LR 4.7.cpp
// Шийка Сергій Іванович
// Лабораторна робота № 4.7
// Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентних співвідношень.
// Варіант 31

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double xp, xk, dx, eps;
    double x, F, S, term;
    int n, k;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "--------------------------------------------------------" << endl;
    cout << "|" << setw(8) << "x"
        << " |" << setw(13) << "F"
        << " |" << setw(13) << "Sum"
        << " |" << setw(8) << "k" << " |" << endl;
    cout << "--------------------------------------------------------" << endl;

    x = xp;

    while (x <= xk)
    {
        // Функція та ряд визначені при |x| > 1
        if (fabs(x) <= 1)
        {
            cout << "|" << setw(8) << setprecision(3) << x
                << " |" << setw(13) << "undef"
                << " |" << setw(13) << "undef"
                << " |" << setw(8) << "-" << " |" << endl;
        }
        else
        {
            // Точне значення функції
            F = 0.5 * log((x + 1) / (x - 1));

            // Перший доданок ряду
            term = 1.0 / x;
            S = term;

            n = 0;
            k = 1;

            // Обчислення суми ряду з точністю eps
            while (true)
            {
                term *= (2.0 * n + 1) /
                    ((2.0 * n + 3) * x * x);

                if (fabs(term) < eps)
                    break;

                S += term;
                n++;
                k++;
            }

            cout << "|" << setw(8) << setprecision(3) << x
                << " |" << setw(13) << setprecision(8) << F
                << " |" << setw(13) << setprecision(8) << S
                << " |" << setw(8) << k << " |" << endl;
        }

        x += dx;
    }

    cout << "--------------------------------------------------------" << endl;

    return 0;
}