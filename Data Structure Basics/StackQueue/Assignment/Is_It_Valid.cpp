#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (char c : s)
        {
            if (st.empty())
                st.push(c);
            else if (st.top() != c)
                st.pop();
            else
                st.push(c);
        }
        st.empty() ? cout << "YES\n" : cout << "NO\n";
        
    }

    return 0;
}