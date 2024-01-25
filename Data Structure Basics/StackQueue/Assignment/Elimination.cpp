#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> myStack;
        string s;
        cin >> s;
        
        for (char c : s)
        {
            if (myStack.empty())
                myStack.push(c);
            else if (myStack.top() == '0' && c == '1')
                myStack.pop();
            else
                myStack.push(c);
        }

        myStack.empty() ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}