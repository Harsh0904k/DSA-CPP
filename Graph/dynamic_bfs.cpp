#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of node and edges";
    cin>>n>>m;

    vector<vector<int>> graph(n+1);
    for(int i = 0; i<m; i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i = 1; i<=n; i++){
        cout<<i<<" : ";
        for(auto x : graph[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
cout<<"BFS";
    vector<bool> visited(n+1,false);
    queue<int> q;
    q.push(1);
    visited[1]=true;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";

        for(auto x : graph[node]){
            if(visited[x] == false){
                visited[x]= true;
                q.push(x);
            }
        }

    }

}