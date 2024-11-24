#include <bits/stdc++.h>
using namespace std;
#define int long long

void bfs(int vertex, vector<vector<int>> graph, vector<bool> &vis)
{
    cout << "bfs" << endl;
    queue<int> q;
    q.push(vertex);
    vis[vertex] = true;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        for (auto child : graph[curr])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
            }
        }
    }
    cout << vertex << " "; // Print the current vertex
}

int32_t main()
{
    int n, e;
    cin >> n >> e; // Number of vertices and edges

    int a, b;
    vector<vector<int>> graph(n + 1);

    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<bool> visited(n + 1, false);
    bfs(5, graph, visited);

    return 0;
}
