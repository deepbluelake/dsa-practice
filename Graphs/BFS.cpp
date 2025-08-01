#include <bits/stdc++.h>
using namespace std;

// adj list given, v --> no of nodes

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    int n;
    cin >> n;
    int vis[n] = {0};
    vis[0] = 1;

    queue<int> q;
    q.push(0);
    vector<int> bfs;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}