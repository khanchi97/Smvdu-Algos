#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+1;
bool visited[N];
vector<int>adj[N];

int dfs(int s)
{
  visited[s]=true;
  for(int i=0;i<adj[s].size();i++)
    if(visited[adj[s][i]]==false)
      dfs(adj[s][i]);
  return 0;
}

int main()
{
  int nodes,edges,a,b;
  cin>>nodes>>edges;
  while(edges--)
  {
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  for(int i=1;i<=nodes;i++)
    visited[i]=false;
  for(int i=1;i<=nodes;i++)
    if(visited[i]==false)
    dfs(i);

}
