#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    cout<<"Enter node and Edge";
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
    queue<int> q;
    vector<int> parent(n+1, -1);

    q.push(1);
    visited[1] = true;

    while(!q.empty()){
        cout<<q.front()<<" ";
        int front = q.front();
        q.pop();
        for(auto x : graph[front]){
            if(visited[x]==false){
                visited[x] = true;
                parent[x] = front;
                q.push(x);
            }
            else if(visited[x]==true && parent[front]!=x){
                cout<<"loop exist";
            }
        }
    
    }

}