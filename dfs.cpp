#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];

void dfs(int vertex)  
//  
{
    // Region 1: Take action on vertex after entering the vertex
    vis[vertex] = true;
    for (int child : g[vertex])
    {
        // Region 2: Take action on child before entering the child node
        if (vis[child])
            continue;
        dfs(child);
        // Region 3: Take action on child after exiting the child node
    }
    // Region 4: Take action on vertex before exiting the vertex
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    return 0;
}