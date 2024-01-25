#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int val : v)
    {
        if (val < 0)
        {
            cout << 2 << " ";
        }
        else if (val == 0)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << 1 << " ";
        }
    }
    return 0;
}