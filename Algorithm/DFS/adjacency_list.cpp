#include <bits/stdc++.h>
using namespace std;

int main()
{

    int node, edge;
    cin >> node >> edge;

    vector<int> matrix[node];

    while (edge--)
    {
        int a, b;
        cin>>a>>b;

        matrix[a].push_back(b);
        matrix[b].push_back(a);
    }

    vector<int> v;
    for (int i = 0; i < matrix[3].size(); i++)
    {
        cout << matrix[3][i] << " ";
    }
    
    

    return 0;
}