// Лабораторна 2.1
// < Шийка Сергій >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 31

#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
    double alpha; //вхідний параметр
    double z1; //результат обчислення першого виразу
    double z2; //результат обчислення другого виразу

    cout << "alpha = "; cin >> alpha;
    z1 = (1 - 2 * pow(sin(alpha), 2)) / (1 + sin(2 * alpha));
    z2 = (1 - tan(alpha)) / (1 + tan(alpha));

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    return 0;
}