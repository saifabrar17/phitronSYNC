#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> list;
    int testCase;
    cin >> testCase;
    int val;
    int pos;
    while (testCase--)
    {
        cin >> pos;
        cin >> val;
        if (pos == 0)
        {
            list.push_front(val);
        }
        if (pos == 1)
        {
            list.push_back(val);
        }
        if (pos == 2)
        {
            if (!list.empty() && val < list.size())
            {
                list.erase(next(list.begin(), val));
            }
        }
        // print
        cout << "L -> ";
        for (int val : list)
        {
            cout << val << " ";
        }
        cout << endl;
        // list<int> revList(list);
        // revList.reverse();
        // cout << "R -> ";
        // for (int val : revList)
        // {
        //     cout << val << " ";
        // }
        // cout << endl;
        cout << "R -> ";
        for (auto it = list.rbegin(); it != list.rend(); it++)
            cout << *it << " ";
        cout << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     // Write your code here
//     int q;
//     cin >> q;
//     list<int> l;
//     while (q--)
//     {
//         int x, v;
//         cin >> x >> v;
//         if (x == 0)
//         {
//             l.push_front(v);
//         }
//         else if (x == 1)
//             l.push_back(v);
//         else
//         {
//             if (!l.empty() && v < l.size())
//                 l.erase(next(l.begin(), v));
//         }

//         cout << "L -> ";
//         for (auto d : l)
//             cout << d << " ";
//         cout << endl;
//         cout << "R -> ";
//         for (auto it = l.rbegin(); it != l.rend(); it++)
//             cout << *it << " ";
//         cout << endl;
//     }
//     return 0;
// }
