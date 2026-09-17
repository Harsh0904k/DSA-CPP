#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<pair<int,int>>> graph(5);
    graph[1].push_back({2,10});
    graph[2].push_back({1,10});

    graph[1].push_back({3,5});
    graph[3].push_back({1,5});

    graph[3].push_back({4,7});
    graph[4].push_back({3,7});

    graph[4].push_back({2,3});
    graph[2].push_back({4,3});

    for(int i = 0; i<graph.size(); i++){
        cout<<i<<" : ";
        for(auto x : graph[i]){
            cout<<"{"<<x.first<<","<<x.second<<"}"<<" ";
        }
        cout<<endl;
    }

}