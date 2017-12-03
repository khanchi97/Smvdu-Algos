#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Adj List Implementation for Integer Nodes
class Graph{
    int V; // No. of Vertices
     //Array of Linked Lists of size V, V LL's are there
     list<int> *adjList;
public:
     Graph(int v){        // Initialize
        V = v;
        adjList = new list<int>[V];
     }
     //To addedge considering bidirectional = true
     void addEdge(int u,int v,bool bidir){
        adjList[u].push_back(v);
        if(bidir){
            adjList[v].push_back(u);
        }
     }

     void bfs(int src){
        //Traverse all the nodes of the graph
        queue<int> q;
        //Intialising visited array to false initially
        bool *visited = new bool[V+1]{0};
        q.push(src);
        visited[src] = true;
        while(!q.empty()){
            int node = q.front();
            cout<<node<<" "; //Output the node
            q.pop();
            for(int neighbour:adjList[node]){
                if(!visited[neighbour]){ // the node is not visited
                    q.push(neighbour);
                    visited[neighbour] = true; // make the visited array of the node as true
                }
            }
        }
     }
};
int main()
{
    //your code goes here
    int n,a,b,e;bool undirected;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    Graph g(n+1);
    cout<<"Enter the number of edges"<<endl;
    cin>>e;
    cout<<"Is Graph directed"<<endl; // enter choice 0 for undirected and 1 for directed
    cout<<"0.undirected\n1.directed"<<endl;
    cin>>a;
    if(a){
        undirected = false;
    }else{
        undirected = true;
    }
    cout<<"Enter the edges "<<endl;
    while(e--){
        cin>>a>>b;
        g.addEdge(a,b,false);
    }
    cout<<"Enter the source node"<<endl;
    cin>>a;
    cout<<"Bfs of the given graph is"<<endl;
    g.bfs(a);
    return 0;
}
