#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin, s);
    string cmpJess = "Jessica";
    stringstream ss(s);
    string word;
    int flag = 0;
    while (ss >> word)
    {
        if (word.compare(cmpJess) == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}