
// HOW TO CODE GRAPH (undirected)

#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> vt[], int u, int v)
{
    vt[v].push_back(u);
    vt[u].push_back(v);
}

void print(vector<int> vt[], int v)
{
    for (int i = 0; i < v; i++)
    {
        cout<<i<<" : ";
        for (auto it : vt[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }
}

int main()
{
    int v = 4;
    vector<int> vt[v];

    // for (int i = 0; i < v; i++)
    // {
    //     int u, v;
    //     cin >> u >> v;
    //     addEdge(vt, u, v);
    // }

    addEdge(vt, 0, 1);
    addEdge(vt, 0, 2);
    addEdge(vt, 1, 2);
    addEdge(vt, 2, 3);

    print(vt, v);

    return 0;
}