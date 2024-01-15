#include <bits/stdc++.h>
using namespace std;
class compere
{
public:
    bool operator()(pair<string, int> &a, pair<string, int> &b)
    {
        if (a.first == b.first)
            return a.second < b.second;
        return a.first > b.first;
    }
};
int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    priority_queue<pair<string, int>, vector<pair<string, int>>, compere> pq;
    while (n--)
    {
        string x;
        cin >> x;
        int y;
        cin >> y;
        pq.push({x, y});
    }

    while (!pq.empty())
    {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }
    return 0;
}