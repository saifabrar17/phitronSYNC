#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool visited[1005];
int level[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);

    visited[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (int child : v[parent])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[parent] + 1;
            }
        }
    }
}

int main()
{
    int node, edge;
    cin >> node >> edge;

    // Initialize vector v
    for (int i = 0; i < 1005; ++i)
    {
        v[i].clear();
    }

    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src;

    cin >> src;

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));

    bfs(src);
    int count = 0;
    for (int i = 0; i < node; i++)
    {
        if (level[i] == 1)
        {
            count++;
            // cout << i << " ";
        }
    }
    cout<<count<<endl;

    return 0;
}
