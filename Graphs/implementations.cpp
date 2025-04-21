#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; // n - no. of nodes  m - no. of edges
    cin >> n, m;

    // METHOD - 1 ADJACENCY MATRIX
    // SPACE: O(NXN)

    // int adj[n + 1][m + 1];
    // for (int i = 0; i < m; i++)
    // {
    //     int u, v;
    //     cin >> u >> v;
    //     adj[u][v] = 1;
    //     adj[v][u] = 1;
    // }

    // METHOD - 2 ADJACENCY LIST

    // UNDIRECTED GRAPH
    // SPACE: O(2xE) Since every edge is connected to 2 nodes

    // vector<int> adj[n + 1];
    // for (int i = 0; i < n; i++)
    // {
    //     int u, v;
    //     cin >> u >> v;
    //     adj[u].push_back(v);
    //     adj[v].push_back(u);
    // }

    // DIRECTED GRAPH
    // SPACE: O(E) Just the no. of edges

    // vector<int> adj[n + 1];
    // for (int i = 0; i < n; i++)
    // {
    //     int u, v;
    //     cin >> u >> v;
    //     u ----------> v
    //     adj[u].push_back(v);
    // }

    return 0;
}