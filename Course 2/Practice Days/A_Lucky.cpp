#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;


        int lSum = (s[5] - '0') + (s[4] - '0') + (s[3] - '0');
        int rSum = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');

        if (lSum == rSum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}