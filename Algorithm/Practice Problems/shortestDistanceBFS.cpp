#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool visited[1005];

void bfs(int src, int destination)
{
    queue<pair<int, int>> q;

    q.push({src, 0});

    visited[src] = true;

    bool found = false;

    while (!q.empty())
    {
        /* code */
        pair<int, int> p = q.front();

        q.pop();
        int parent = p.first;
        int level = p.second;

        if (parent == destination)
        {
            cout << level << endl;
            found = true;
        }
        for (int child : v[parent])
        {
            if (visited[child] == false)
            {
                q.push({child, level + 1});
                visited[child] = true;
            }
        }
    }
    if (found == false)
    {
        cout << "-1" << endl;
    }
}

int main()
{

    int node, edge;
    cin >> node >> edge;
    while (edge--)
    {
        /* code */
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }
    int query;
    cin >> query;

    while (query--)
    {
        /* code */
        int source, destination;
        cin >> source >> destination;
        memset(visited, false, sizeof(visited));
        bfs(source, destination);
    }

    // int src;
    // cin >> src;

    // memset(visited, false, sizeof(visited));
    // bfs(src, 9);
    return 0;
}

//successfully ran
