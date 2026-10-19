// LR 4.1.cpp
// Шийка Сергій Іванович
// Лабораторна робота № 4.1
// Цикли.
// Варіант 31


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    const int n = 15;

    double p1 = 1.0;
    double p2 = 1.0;
    double p3 = 1.0;
    double p4 = 1.0;

    int i;

    // 1. while
    i = 1;
    while (i <= n)
    {
        p1 *= (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / pow(i, 2);
        i++;
    }

    // 2. do...while
    i = 1;
    do
    {
        p2 *= (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / pow(i, 2);
        i++;
    } while (i <= n);

    // 3. for, i++
    for (i = 1; i <= n; i++)
    {
        p3 *= (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / pow(i, 2);
    }

    // 4. for, i--
    for (i = n; i >= 1; i--)
    {
        p4 *= (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / pow(i, 2);
    }

    cout << "while      = " << p1 << endl;
    cout << "do while   = " << p2 << endl;
    cout << "for i++    = " << p3 << endl;
    cout << "for i--    = " << p4 << endl;

    return 0;
}