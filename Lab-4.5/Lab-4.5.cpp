// LR 4.5.cpp
// Шийка Сергій Іванович
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру.
// Варіант 31

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    double R, x, y;
    bool hit;

    srand((unsigned)time(NULL));

    do {
        cout << "R (R > 0) = ";
        cin >> R;
    } while (R <= 0);

    // ---- Method 1: manual input ----
    cout << endl << "Method 1 (manual input)" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "x = ";
        cin >> x;

        cout << "y = ";
        cin >> y;

        hit = (x >= 0 && y >= 0 &&
            x * x + y * y <= R * R)
            ||
            (x >= -R && x <= 0 &&
                y >= -x - R && y <= 0);

        if (hit)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    // ---- Method 2: random coordinates from [-R; R] ----
    cout << endl << "Method 2 (random points)" << endl << fixed;

    for (int i = 0; i < 10; i++)
    {
        x = 2. * R * rand() / RAND_MAX - R;
        y = 2. * R * rand() / RAND_MAX - R;

        hit = (x >= 0 && y >= 0 &&
            x * x + y * y <= R * R)
            ||
            (x >= -R && x <= 0 &&
                y >= -x - R && y <= 0);

        cout << setw(8) << setprecision(4) << x << "    "
            << setw(8) << setprecision(4) << y << "    "
            << hit << endl;
    }

    return 0;
}