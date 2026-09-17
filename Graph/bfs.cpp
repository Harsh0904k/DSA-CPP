#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {

    int n = 6;

    vector<vector<int>> graph(n + 1);

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


    // Write your BFS here
    int start = 1;
    queue<int> q;
    vector<bool> visited(graph.size(), false);

    q.push(start);
    visited[start] = true;

    while(!q.empty()){
        int front = q.front();
        q.pop();
        cout<<front<<" ";

        for(auto x : graph[front]){
            if(visited[x] == false){
                q.push(x);
                visited[x] = true;
            }
        }
        
    }

    return 0;
}