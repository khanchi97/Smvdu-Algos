'''
    Depth first search
'''

class Graph:

    def __init__(self, n):
        self.n = n
        self.neighbors = [[] for i in range(n)]
        self.visited = [False for x in range(n)]

    def add_edge(self, src, dstn):
        '''To add the edge from src to dstn. In adjacency list format.'''
        self.neighbors[src].append(dstn)
        self.neighbors[dstn].append(src)

    def dfs(self, src):
        '''To do an iterative depth first traversal. In case it is a disconnected graph, recursion is used for other components.'''
        
        s = [] # Acts as stack
        s.append(src)
        print(src)
        self.visited[src] = True
        # Keep appending the neighbors if they haven't been visited
        while(len(s) > 0):
            x = s.pop()
            for i in self.neighbors[x]:
                if(self.visited[i] == False):
                    s.append(i)
                    print(i)
                    self.visited[i] = True
        # To handle disconnected graphs
        for i in range(self.n):
                if(self.visited[i] == False):
                        self.dfs(i)

if(__name__ == "__main__"):

    n = int(input("Enter the number if nodes"))
    g = Graph(n)

    print("Enter 1 to add edges(NOTE: 0 to n - 1)\n2 to exit")
    chc = int(input())
    while(chc != 2):
        src = int(input("Enter the source"))
        dstn = int(input("Enter the destination"))
        g.add_edge(src, dstn)
        print("Enter 1 to add edges(NOTE: 0 to n - 1)\n2 to exit")
        chc = int(input())
        
    src = int(input("Enter the source node from which the DFS has to be performed"))
    print("The depth first traversal of the graph from the source specified is...")
    g.dfs(src)