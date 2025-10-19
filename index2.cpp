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
    cout << "-----------------------------------" << endl;
    cout << "|" << setw(8) << "x" << " |"
         << setw(15) << "y" << " |" << endl;
    cout << "-----------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        A = 1 + x;
if (x <= 4)
        B = exp(log(2 + 2 * x) + 2 * x);
    else if (x > 4 && x <= 7)
        B = (1.0 / tan((1 + x) / 9.0)) + 8 * x;  // ctg((1+x)/9) + 8x
    else
        B = 1 - 7 * x + x * x - 2 * pow(x, 3);
y = A + B;
        cout << "|" << setw(10) << setprecision(2) << x
             << " |" << setw(15) << setprecision(6) << y
             << " |" << endl;

        x += dx;
    }

    cout << "-----------------------------------" << endl;
    return 0;
}