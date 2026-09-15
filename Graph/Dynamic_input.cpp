#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"enter node & edge count ";
    cin>>n>>m;
    
    vector<vector<int>> graph(n+1);
    for(int i = 0; i<m; i++){
        int a;
        int b;
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
}