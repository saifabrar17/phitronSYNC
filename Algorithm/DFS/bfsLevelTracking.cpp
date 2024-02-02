#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool visited[1005];
int level[1005];

void bfs(int src)
{
    queue<int> q; 
    q.push(src); //queue te src ke push korlam

    visited[src] = true; //src ke visited korlam 
    level[src] = 0; // src er level 0 kore dilam

    while (!q.empty()) //queue jotokhon na empty hoy totokhon cholbe 
    {
        int parent = q.front(); //queue er front ke samne anlam 
        q.pop(); //samner element k pop korlam

        for (int child : v[parent])
        {
            q.push(child); 
            visited[child] = true;
            level[child] = level[parent] + 1;
        }
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
    int src;
    cin >> src;

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));

    bfs(src);

    for (int i = 0; i < node; i++)
    {
        cout << i << " " << level[i] << endl;
    }

    return 0;
}