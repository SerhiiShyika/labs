// Lab_03_4.cpp
// Шийка Сергій
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 31

#include <iostream>

using namespace std;

int main()
{
    double x;      // координата точки по осі X
    double y;      // координата точки по осі Y
    double R;      // вхідний параметр

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // розгалуження в повній формі
    if ((x >= 0 && y >= 0 && x * x + y * y <= R * R) ||
        (x <= 0 && y <= 0 && y >= -x - R))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    return 0;
}