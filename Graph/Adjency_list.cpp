#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> graph(6);

    graph[1].push_back(2);
    graph[2].push_back(1);

    graph[1].push_back(3);
    graph[3].push_back(1);

    graph[2].push_back(4);
    graph[4].push_back(2);

    graph[3].push_back(5);
    graph[5].push_back(3);

    for(int i = 1; i<graph.size(); i++){
        cout<<i<<" : ";
        for(int x : graph[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
}  