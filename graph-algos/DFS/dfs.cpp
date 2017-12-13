/*
	Depth first search - iterative algorithm
*/
#include<iostream>
#include<list> // STL
#include<stack> // STL
using namespace std;

// Class definition
class Graph{
	private:
		int n;
		list<int> *neighbors;
	public:
		Graph(int v);
		void add_edge(int src, int dstn);
		void dfs(int src, bool* visited);
};

Graph :: Graph(int n)
{
	this -> n = n;
	neighbors = new list<int>[n];
}

void Graph :: add_edge(int src, int dstn)
{
	neighbors[src].push_back(dstn); // Stored in the form of adjacency list format
	/*
		Sample adjacency list
		0 - 1 2
		1 - 0 3 4
		2 - 0 4
		3 - 1 4
		4 - 2 1 3
	*/
	neighbors[dstn].push_back(src); // For an undirected graph
}

void Graph :: dfs(int src, bool* visited)
{
	// Start of core logic------
	stack<int> s; // iterative algorithm - so stack is manually created
	
	s.push(src);
	cout << src << "\t";
	visited[src] = true;
	while(!s.empty())
	{
		int x = s.top();
		s.pop();
		list<int>::iterator i;
		for(i = neighbors[x].begin(); i != neighbors[x].end(); i++)
		{
			if(visited[*i] == false)
			{
				s.push(*i); // Push the neighbors to the stack if they are unvisited
				cout << *i << "\t";
				visited[*i] = true;
			}
		}
		// In case the graph is disconnected
		for(int j = 0; j < n; j++)
		{
			if(visited[j] == false)
			{
				dfs(j, visited); // Recursion, but the core logic is implemented using stack only
			}
		}
	}
	// ------ End of core logic
	cout << "\n";
}

int main()
{
	int n, src, dstn, chc;
	cout << "Enter the number of nodes in the graph\n";
	cin >> n;
	cout << "NOTE:\nThe nodes are from 0 to n-1\n\n";
	Graph G(n);
	bool visited[n]; // To keep track of visited nodes in case of cycles
	do{
		cout << "Enter 1 to add edges\n2 to do a depth first search\n99 to quit\n";
		cin >> chc;
		switch(chc)
		{
			case 1: cout << "Enter the source node\n";
					cin >> src;
					
					if(src < 0 || src >= n) // Check for validity of the node
					{
						cout << "Enter valid node\n";
						break;
					}
					
					cout << "Enter the destination node\n";
					cin >> dstn;
					
					if(dstn < 0 || dstn >= n)
					{
						cout << "Enter valid node\n";
						break;
					}
					
					G.add_edge(src, dstn);
					break;
			case 2: cout << "Enter the node from which you have to perform DFS\n";
					cin >> src;
					for(int i = 0; i < n; i++)
					{
						visited[i] = false;
					}
					G.dfs(src, visited);
					break;
			case 99:
					break;
			default:
					cout << "Enter valid choice\n";
					break;
		}
	}while(!(chc == 99));
	
	return 0;
}
