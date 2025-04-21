#include <bits/stdc++.h>
using namespace std;

// vector<int> bfsOfGraph(int V, vector<int> adj[]){
//     int n;
//     cin >> n;
//     int vis[n] = {0};
//     vis[0] = 1;

//     queue <int> q;
//     q.push(0);
//     vector<int> bfs;

//     while(!q.empty()){
//         int node = q.front();
//         q.pop();
//         bfs.push_back(node);

//         for (auto it: adj[node]) {
//             if(!vis[it]){
//                 vis[it] = 1;
//                 q.push(it);
//             }
//         }
//     }
//     return bfs;

// }

void dfs(int node, vector<int> adj[], int vis[], vector<int> &ans){
    vis[node] = 1;
    ans.push_back(node);
    //traverse all its neighbours

    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(it, adj, vis, ans);
        }
    }

}

vector<int> dfsOfGraph(int n, vector<int> adj[]){
    int vis[n] = {0};
    int start = 0;
    vector<int> ans;
    dfs(start, adj, vis, ans);
    return ans;
}