//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    vector<int> parent, setSize;

    void make_set(int vertex)
    {
        setSize[vertex] = 1;
        parent[vertex] = vertex;
    }

    int find_set(int vertex)
    {
        if (vertex != parent[vertex])
        {
            parent[vertex] = find_set(parent[vertex]); // Path compression
        }
        return parent[vertex];
    }

    void union_sets(int a, int b)
    {
        a = find_set(a);
        b = find_set(b);
        if (a != b)
        {
            if (setSize[a] < setSize[b])
            {
                swap(a, b);
            }
            parent[b] = a;
            setSize[a] += setSize[b];
        }
    }
    struct Edge
    {
        int u, v, weight;
        bool operator<(Edge const &other)
        {
            return weight < other.weight;
        }
    };
    int Kruskal(int V, vector<vector<int>> adj)
    {
        int n = V, m = adj.size();
        for (auto i : adj)
            for (auto j : i)
                m++;

        parent.resize(n + 1);
        setSize.resize(n + 1);
        for (int i = 1; i <= n; ++i)
            make_set(i);

        vector<Edge> edges(m);
        for (int i = 0; i < m; ++i)
            edges[i].u = adj[i][0], edges[i].v = adj[i][1], edges[i].weight = adj[i][2];

        sort(edges.begin(), edges.end());

        int cost = 0;
        vector<Edge> result;
        for (Edge e : edges)
        {
            if (find_set(e.u) != find_set(e.v))
            {
                cost += e.weight;
                result.push_back(e);
                union_sets(e.u, e.v);
            }
        }

        return cost;
    }

public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<vector<int>> edges;

        for (int i = 0; i < V; ++i)
            for (auto it : adj[i])
                edges.push_back({i, it[0], it[1]});

        return Kruskal(V, edges);
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i = 0;
        while (i++ < E)
        {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1, t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }

        Solution obj;
        cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends