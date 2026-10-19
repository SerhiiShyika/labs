// LR 4.6.cpp
// Шийка Сергій Іванович
// Лабораторна робота № 4.6
// Вкладені цикли
// Варіант 31

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    const int n = 10;

    double s1 = 0.0;
    double s2 = 0.0;
    double s3 = 0.0;
    double s4 = 0.0;

    double sumj;
    int i, j;

    // 1. Цикл while + while
    i = 1;

    while (i <= n)
    {
        sumj = 0.0;
        j = 1;

        while (j <= i)
        {
            sumj += sin(j);
            j++;
        }

        s1 += cos(i) * sumj / (sin(i) + sumj);

        i++;
    }

    // 2. Цикл do while + do while
    i = 1;

    do
    {
        sumj = 0.0;
        j = 1;

        do
        {
            sumj += sin(j);
            j++;
        } while (j <= i);

        s2 += cos(i) * sumj / (sin(i) + sumj);

        i++;
    } while (i <= n);

    // 3. Цикл for з прямим відліком
    for (i = 1; i <= n; i++)
    {
        sumj = 0.0;

        for (j = 1; j <= i; j++)
        {
            sumj += sin(j);
        }

        s3 += cos(i) * sumj / (sin(i) + sumj);
    }

    // 4. Цикл for зі зворотним відліком
    for (i = n; i >= 1; i--)
    {
        sumj = 0.0;

        for (j = i; j >= 1; j--)
        {
            sumj += sin(j);
        }

        s4 += cos(i) * sumj / (sin(i) + sumj);
    }

    cout << fixed << setprecision(10);

    cout << "while      = " << s1 << endl;
    cout << "do while   = " << s2 << endl;
    cout << "for ++     = " << s3 << endl;
    cout << "for --     = " << s4 << endl;

    return 0;
}