#include <bits/stdc++.h>
using namespace std;

void bfs(int u, int n, vector<vector<int>>& adj) {
    vector<bool> vis(n+ 1, false);
    vis[u]= true;
    queue<int> q;
    q.push(u);
    vector<int> ans;
    while (!q.empty()){
        int node= q.front();
        q.pop();
        ans.push_back(node);
        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it]= true;
                q.push(it);
            }
        }
    }
    for(auto x: ans){
        cout<< x<< " ";
    }
    cout<< endl;
}

int main() {
    int n, m;
    cin>> n>> m;
    vector<vector<int>> adj(n+ 1);
    for(int i= 0; i< m; i++){
        int u, v;
        cin>> u>> v;
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }
    bfs(1, n, adj);
    return 0;
}
