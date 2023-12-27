#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (n != m)
    {
        cout << "NO";
        return 0;
    }
    stack<int> myStack;
    queue<int> myQueue;
    while (n--)
    {
        int x;
        cin >> x;
        myStack.push(x);
    }
    while (m--)
    {
        int x;
        cin >> x;
        myQueue.push(x);
    }
    bool flag = true;
    while (!myStack.empty() && !myQueue.empty())
    {
        if (myStack.top() != myQueue.front())
        {
            flag = false;
            break;
        }
        myStack.pop();
        myQueue.pop();
    }
    flag ? cout << "YES" : cout << "NO";

    return 0;
}