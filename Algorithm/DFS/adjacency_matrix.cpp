#include<bits/stdc++.h>
using namespace std;

int main(){

    int node, edge;
    cin>> node >> edge;
    int matrix[node][node];

    memset(matrix, 0, sizeof(matrix));

    while (edge--)
    {
        int a, b;
        cin>>a>>b;
        matrix[a][b]=1;
        matrix[b][a]=1;
    }
    if (matrix[2][4] == 1)
        cout << "connection presernt";
    else
        cout << "connection absent";

    return 0;
}