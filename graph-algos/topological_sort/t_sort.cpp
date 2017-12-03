#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;
typedef vector<lli> vi;
typedef vector<vi> graph;

graph g;
vi vis;
vi order;// stores answer
void dfs(int x, int parent) {
    vis[x] = true;
    inStack[x] = true;
    for(int u = 0; u < n; u++) {
        if (graph[x][u] == 1 && u != parent && vis[u] && inStack[u]) {
            // there is a cycle: u -> ... -> parent -> x
        }
        if(!vis[u] && graph[x][u] == 1) {
            dfs(u, x);
        }
    }
    inStack[x] = false;
    order.push_back(x);
}

int main()
{
    int n;// number of node
    cin>>n;
    int m;//number of edges
    cin>>m;
    g.resize(n);
    vis.assign(n,0);
    lli a,b;
    for(int i=0;i<m;i++){// edge from A to B
        cin>>a>>b;
        g[a].EB(b)
    }
    dfs(0,-1);
    return 0;
}
