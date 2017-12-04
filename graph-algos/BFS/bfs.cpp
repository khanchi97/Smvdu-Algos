#include<bit/stdc++.h>
using namespace std;
typedef vector<vector<int>> graph;
typedef vector<int> vi;
using namespace std;

int main()
{
    //your code goes here
    int n,m;
    cout<<"Enter number of nodes and edges: "
    cin>>n>>m;
    graph g(n+1);// assuming nodes numbers are 1 indexed
    vi level,vis;
    level.assign(n+1,-1);
    vis.assign(n+1,0);
    queue<int> q;
    int myroot;
    cout<<"Enter the node you want to start search from: ";
    cin>>myroot;
    q.push(myroot);
    vis[myroot]=1;
    level[myroot]=0;
    while(!q.empty()){
        int now=q.front();
        vis[now]=1;
        q.pop();
        for(int i=0;i<g[now].size();i++){
            if(!vis[g[now][i]]){
                level[g[now][i]]=level[now]+1;
                q.push(g[now][i]);
            }
        }
    }
    // now the vis vectors contains all visited nodes and level has their corrosponding level in BFS tree.
    
    return 0;
}
