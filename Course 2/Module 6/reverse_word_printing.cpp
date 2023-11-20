#include <bits/stdc++.h>
using namespace std;

void print(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        print(ss); // ei line pore call korle recursively print hobe, age call korle reverse print hobe
        cout << word << endl;
    }
}

int main()
{

    string s;
    getline(cin, s);

    stringstream ss(s);

    print(ss);

    // string word;
    // while (ss >> word)
    // {
    //     cout << word << endl;
    // }

    return 0;
}