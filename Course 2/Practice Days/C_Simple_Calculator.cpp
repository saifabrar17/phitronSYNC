#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long x, y;
    cin >> x;
    cin >> y;

    long long sum, mul, sub;

    sum = x + y;
    mul = x * y;
    sub = x - y;

    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << mul << endl;
    cout << x << " - " << y << " = " << sub << endl;

    return 0;
}