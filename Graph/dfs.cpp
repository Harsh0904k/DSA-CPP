#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited){
        cout<<node;
        for(auto x : graph[node]){
            if(visited[x]==false){
                visited[x] = true;
                dfs(x, graph, visited);
            }
        }
    }

int main() {

    int n = 6;

    vector<vector<int>> graph(n+1);

    // Creating the graph
    graph[1].push_back(2);
    graph[1].push_back(3);

    graph[2].push_back(1);
    graph[2].push_back(4);
    graph[2].push_back(5);

    graph[3].push_back(1);
    graph[3].push_back(6);

    graph[4].push_back(2);

    graph[5].push_back(2);

    graph[6].push_back(3);


    // Write your DFS here
    vector<bool> visited(graph.size(),false);
    int node = 1;
    visited[node]=true;
    dfs(node, graph, visited);

    
    return 0;
}