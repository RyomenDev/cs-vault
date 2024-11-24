#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"

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

void Kruskal()
{
    int n, m;
    // cout << "Enter number of vertices and edges: ";
    cin >> n >> m;

    parent.resize(n + 1);
    setSize.resize(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        make_set(i);
    }

    vector<Edge> edges(m);
    // cout << "Enter the edges (u, v, weight):" << endl;
    for (int i = 0; i < m; ++i)
    {
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    }

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

    // cout << "Cost of the minimum spanning tree: ";
    cout << cost << endl;
    // cout << "Edges in the minimum spanning tree:" << endl;
    for (Edge e : result)
    {
        cout << e.u << " " << e.v << " " << e.weight << endl;
    }
}

void vatsh()
{
    Kruskal();
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt = 1;
    // cin >> tt;
    while (tt--)
    {
        vatsh();
    }

    return 0;
}
