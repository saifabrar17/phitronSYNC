#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur = v.size() - 1;

    while (cur != 0)
    {
        /* code */
        int pr = (cur - 1) / 2;
        if (v[pr] > v[cur])
            swap(v[pr], v[cur]);
        else
            break;
        cur = pr;
    }
}

void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int left = (cur * 2) + 1;
        int right = (cur * 2) + 2;
        int last = v.size() - 1;
        if (left <= last && right <= last)
        {
            if (v[left] <= v[right] && v[left] < v[cur])
            {
                swap(v[left], v[cur]);
                cur = left;
            }
            else if (v[right] <= v[left] && v[right] < v[cur])
            {
                swap(v[right], v[cur]);
                cur = right;
            }
            else
                break;
        }
        else if (left <= last)
        {
            if (v[left] < v[cur])
            {
                swap(v[left], v[cur]);
                cur = left;
            }
            else
                break;
        }
        else if (right <= last)
        {
            if (v[right] < v[cur])
            {
                swap(v[right], v[cur]);
                cur = right;
            }
            else
                break;
        }
        else
            break;
    }
}
int main()
{
    vector<int> v;
    long long n;
    cin >> n;
    while (n--)
    {
        long long x;
        cin >> x;
        v.push_back(x);

        long long cur_idx = v.size() - 1;

        while (cur_idx != 0)
        {
            /* code */
            long long parent = (cur_idx - 1) / 2;
            if (v[parent] > v[cur_idx])
                swap(v[parent], v[cur_idx]);
            else
                break;
            cur_idx = parent;
        }
    }

    long long q;
    cin >> q;
    while (q--)
    {
        long long x;
        cin >> x;
        if (x == 0)
        {
            long long y;
            cin >> y;
            insert_heap(v, y);
            cout << v[0] << endl;
        }
        else if (x == 1)
        {
            if (v.empty())
                cout << "Empty" << endl;
            else
                cout << v[0] << endl;
        }
        else if (x == 2)
        {
            if (v.empty())
                cout << "Empty" << endl;
            else
            {
                delete_heap(v);
                if (v.empty())
                    cout << "Empty" << endl;
                else
                    cout << v[0] << endl;
            }
        }
    }
    return 0;
}