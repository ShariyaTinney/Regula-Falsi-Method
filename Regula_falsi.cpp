
#include <iostream>
#include <iomanip>  // setw, setprecision
#include <cmath>
using namespace std;

#define MAX_ITER 100
#define EPSILON 0.001

//  f(x) = x³ - x - 11
double func(double x) {
    return x*x*x - x - 11;
}

void regulaFalsi(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    double c = a; // Initialize result

    cout << left << setw(6) << "Itr"
         << setw(12) << "a"
         << setw(12) << "b"
         << setw(14) << "f(a)"
         << setw(14) << "f(b)"
         << setw(12) << "c"
         << setw(14) << "f(c)"
         << endl;
    cout << "--------------------------------------------------------------" << endl;

    for (int i = 1; i <= MAX_ITER; i++)
    {
        c = (a*func(b) - b*func(a))/ (func(b) - func(a));

        cout << left << setw(6) << i
             << setw(12) << fixed << setprecision(6) << a
             << setw(12) << b
             << setw(14) << func(a)
             << setw(14) << func(b)
             << setw(12) << c
             << setw(14) << func(c)
             << endl;

        if (fabs(func(c)) < EPSILON)
            break;

        if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }

    cout << "\nThe value of root is : " << fixed << setprecision(6) << c << endl;
}

int main() {
    double a = 2, b = 3; //  f(2)*f(3)<0)
    regulaFalsi(a, b);
    return 0;
}

