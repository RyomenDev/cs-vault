
// BFS

// their immedite friends then their immediate friends

#include <bits/stdc++.h>
using namespace std;

void BFDdis(vector<int> adj[], int v)
{
    vector<bool> visited(v + 1, false);
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
            BFS(adj, i, visited);
    }
}

void BFS(vector<int> adj[], int s, vector<bool> &visited)
// void BFS(vector<int> adj[], int v, int s)
{

    // vector<bool> visited(v + 1, false);
    queue<int> q;
    visited[s] = true;
    q.push(s);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int main()
{

    return 0;
}