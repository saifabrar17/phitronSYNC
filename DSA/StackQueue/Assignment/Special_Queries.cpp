#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    queue<string> myQueue;
    while (t--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            string s;
            cin >> s;
            myQueue.push(s);
        }
        else
        {
            if (myQueue.empty())
            {
                cout << "Invalid\n";
            }
            else
            {
                cout << myQueue.front() << endl;
                myQueue.pop();
            }
        }
    }

    return 0;
}