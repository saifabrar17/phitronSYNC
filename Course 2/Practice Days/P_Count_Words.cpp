#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    while (ss >> word)
    {
      bool hasAlphabet = false;
        for (char c : word)
        {
            if (isalpha(c))
            {
                hasAlphabet = true;
                break;
            }
        }
        if (hasAlphabet)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}