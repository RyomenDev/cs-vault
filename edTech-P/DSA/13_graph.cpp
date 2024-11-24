#include <bits/stdc++.h>
using namespace std;

// graph
void dfs(int vertex, int parent, vector<vector<int>> graph)
{
    for (auto it : graph[vertex])
    {
        if (it == parent)
            continue;
        cout<<vertex<<endl;
        dfs(it, vertex, graph);
    }
}

void create(int e, vector<vector<int>> graph)
{
    int a, b;
    // Use vector of vectors for the graph representation
    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
}

int main()
{
    // graph
    int n, e;
    cin >> n >> e; // Number of vertices and edges
    vector<vector<int>> graph(n + 1);
    create(e, graph);
    int vertex = 1, parent = -1;
    dfs(vertex, parent, graph);
    return 0;
}