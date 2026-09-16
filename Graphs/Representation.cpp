// Adjacency List
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, vector<int>> adj;
    int edges= 4;
    vector<pair<int, int>> input= {{1, 2}, {1, 100000}, {2, 3}, {100000, 3}};
    
    for(int i= 0; i< edges; i++){
        int u= input[i].first;
        int v= input[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    for(auto& [u, v]: adj){
        cout<< "Node "<< u<< " is connected to: ";
        for(int x: v){
            cout<< x<< " ";
        }
        cout<< "\n";
    }
    return 0;
}
