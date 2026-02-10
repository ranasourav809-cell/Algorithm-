#include <iostream>
using namespace std;

double powerRec(double x, int n)
{
    if (n == 0)
        return 1;

    if (n < 0)
        return 1 / powerRec(x, -n);

    double half = powerRec(x, n / 2);

    if (n % 2 == 0)
        return half * half;
    else
        return x * half * half;
}

double powerRec2(double x, int n)
{
    if (n == 0)
        return 1;

    if (n < 0)
        return 1 / powerRec2(x, -n);

    return x * powerRec2(x, n - 1);
}

int main()
{
    double x;
    int n;

    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter power (n): ";
    cin >> n;

    cout << "\nOptimized Recursive Result: " << powerRec(x, n) << endl;
    cout << "Simple Recursive Result   : " << powerRec2(x, n) << endl;

    return 0;
}
