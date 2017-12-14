#include<bits/stdc++.h>

#define nodes pair<int,int>

#define INF INT_MAX

using namespace std;


// function to add an edge to graph
void addedge(vector<nodes> graph[],int v1,int v2,int w){

    graph[v1].push_back({v2,w});
    graph[v2].push_back({v1,w});

}

void printSolutions(int dist[],int src,int vertices){
// Print shortest distances stored in dist[]
    cout<<"Vertex"<<"   "<<"Distance from Source"<<endl;
    for (int i = 0; i < vertices; ++i)
        cout<<i<<"            "<<dist[i]<<endl;
}

//utility fuction to find shortest path
void dijkstra(vector<nodes> graph[],int src,int vertices)
{
    // Create a priority queue to store vertices that
    // are being preprocessed.
    priority_queue< nodes, vector <nodes> , greater<nodes> > pq;

    // Create an array for distances and initialize all
    // distances as infinite (INF)
    int dist[vertices];


    //Initialize the distance array to inf

    for(int i=0;i<vertices;i++)
        dist[i]=INF;

    // Insert source itself in priority queue and initialize
    // its distance as 0.

    pq.push(make_pair(0, src));
    dist[src] = 0;

    /* Looping till priority queue becomes empty (or all
      distances are not finalized) */
    while (!pq.empty())
    {
        // The first vertex in pair is the minimum distance
        // vertex, extract it from priority queue.
        // vertex label is stored in second of pair (it
        // has to be done this way to keep the vertices
        // sorted distance (distance must be first item
        // in pair)
        int u = pq.top().second;
        pq.pop();

        // 'it' is an iterator used to get all adjacent vertices of a vertex
        vector< nodes >::iterator it;

        for (it=graph[u].begin();it!=graph[u].end();it++)
        {
            // Get vertex label and weight of current adjacent
            // of u.
            int adj_vertices = (*it).first;
            int weight = (*it).second;

            //  If there is shorted path to v through u.
            if (dist[adj_vertices] > dist[u] + weight)
            {
                // Updating distance of v
                dist[adj_vertices] = dist[u] + weight;
                pq.push(make_pair(dist[adj_vertices], adj_vertices));
            }
        }
    }

    //Printing the shortest distance from source vertex
    printSolutions(dist,src,vertices);
}


int main() {
    int vertices,edges;

    cout<<"Enter the number of vertices :-"<<endl;
    cin>>vertices;

    cout<<"Enter the number of edges :-"<<endl;
    cin>>edges;

    vector<nodes> graph[vertices]; //Declaring the adjanceny list;

    cout<<"Enter the two vertices and weight from which an edge is formed"<<endl;

    for(int i=1;i<=edges;i++){

        cout<<i<<"->edge"<<endl;
        int vertices1,vertices2,weight;
        cin>>vertices1>>vertices2>>weight;
        addedge(graph,vertices1,vertices2,weight); //Adding the edges to the graph
    }

    int source;

    cout<<"Enter the source vertex :-"<<endl;

    cin>>source;

    dijkstra(graph,source,vertices); //Function to perform dijkstra
	// your code goes here
	return 0;
}
