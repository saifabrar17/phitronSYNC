#include <bits/stdc++.h>
using namespace std;

int main()
{

    char x;
    cin >> x;

    if (x >= 48 && x <= 58)
    {
        cout << "IS DIGIT" << endl;
    }
    else if (x >= 97 && x <= 122)
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }else{
         cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }

    return 0;
}