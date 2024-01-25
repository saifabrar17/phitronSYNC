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
    for (auto it = v.rbegin(); it != v.rend(); it++)
        cout << *it << " ";
    return 0;
}