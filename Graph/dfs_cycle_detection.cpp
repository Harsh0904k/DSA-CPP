#include<iostream>
#include<vector>
using namespace std;
void dfs(vector<vector<int>>& graph, vector<bool>& visited, vector<int>& parent, int node){
    cout<<node<<" ";
    
    for(auto x : graph[node]){
        if(!visited[x]){
            visited[x] = true;
            parent[x] = node;
            dfs(graph, visited,parent,x);
        }
        else if(x != parent[node]){
            cout<<"loop exits";
        }

    }
}
int main(){
    cout<<"Enter Node and Edge : ";
    int n,m;
    cin>>n>>m;
    vector<vector<int>> graph(n+1);
    for(int i = 0; i<m; i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<bool>visited(n+1, false);
    vector<int>parent(n+1, -1);
    visited[1] = true;
    
    dfs(graph, visited, parent, 1);

}