#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter total Node and Edge : ";
    cin>>n>>m;

    vector<vector<pair<int,int>>> graph(n+1);

    for(int i = 0; i<m; i++){
        int a,b,c;
        cin>>a>>b>>c;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
    }
    
    for(int i = 0; i<=n; i++){
        cout<<i<<" : ";
        for(auto x:graph[i]){
            cout<<"{"<<x.first<<","<<x.second<<" ";
        }
        cout<<endl;
    }


}