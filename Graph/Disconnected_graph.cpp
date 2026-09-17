#include<iostream>
#include<vector>
using namespace std;
void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited){
    visited[node]=true;
    cout<<node<<" ";

    for(auto x : graph[node]){
        if(!visited[x]){
            dfs(x,graph, visited);
        }
    }
}

int main(){
    cout<<"Enter Node and edge : ";
    int n,m;
    cin>>n>>m;

    vector<vector<int>> graph(n+1);

    for(int i = 0; i<m; i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<bool> visited(n+1, false);
    for(int node = 1; node<n+1; node++){
        if(!visited[node]){
            cout<<endl;
            cout<<"Graph : "<<endl;
            dfs(node, graph, visited);
        }
    }

}