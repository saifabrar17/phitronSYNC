#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    cin.ignore();
    while (testCase--)
    {
        map<string, int> mp;
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word, name;
        int mx = 0;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > mx)
            {
                mx++;
                if (mp[word] == mx)
                    name = word;
            }
        }
        cout << name << " " << mx << endl;
    }
    return 0;
}