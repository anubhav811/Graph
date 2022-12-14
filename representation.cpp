#include <bits/stdc++.h>
using namespace std;

const int n = 1e3 + 10;

// Adjacency matrix
int graph[n + 1][n + 1];

// Adjacency list
vector<int> graph2[n];

int main()
{
    // n -> edges
    // m -> vertices
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;

        // Adjacency graph
        // Space complexity -> O(n^2)

        graph[v1][v2] = 1;
        graph[v2][v1] = 1;

        // if weighted
        // graph[v1][v2] = wt;
        // graph[v2][v1] = wt;

        // Adjacency list
        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);

        // if weighted
        // graph2[v1].push_back({v2, wt});
        // graph2[v2].push_back({v1, wt});
    }
 
        // to check if i,j is connected ? or u wanna know about i,j's weights
        // Adjacency matrix 
        // if(graph[i][j]==1){
        //     // connected
        // }
        // This takes O(1) times

        // Adjacency list
        // for(child : graph[i]){
        //     if(child==j){
        //         // connected
        //          c 
        //     }
        // }
    return 0;
}