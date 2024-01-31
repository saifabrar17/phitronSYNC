#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    bool isFirstWord == true;
    while (ss >> word)
    {
        if(!isFirstWord){
            cout<< " ";
        }
        reverse(word.begin(), word.end());
        cout << word;

        isFirstWord = false;
    }

    return 0;
}