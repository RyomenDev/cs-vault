#include <bits/stdc++.h>
using namespace std;
#define int long long

void dfs(int vertex, vector<vector<int>> &graph, vector<bool> &vis)
{
    vis[vertex] = true;
    cout << vertex << " "; // Print the current vertex
    for (auto child : graph[vertex])
    {
        if (!vis[child])
        {
            dfs(child, graph, vis);
        }
    }
}

int32_t main()
{
    int n, e;
    cin >> n >> e; // Number of vertices and edges
    int a, b;

    // Use vector of vectors for the graph representation
    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<bool> visited(n + 1, false);
    dfs(5, graph, visited);

    return 0;
}
