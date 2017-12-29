TOPOLOGICAL SORT ::

Directed Acyclic Graph - It is the graph in which there is a direction for the edges and when moving from vertex to vertex the same vertex won't be encountered twice.

In topological sort, Directed Acyclic Graph (DAG) is required. The sorting is the linear ordering of vertices of DAG such that for every directed edge from vertex u to vertex v, u comes before v in the ordering.

1. Make a collection of in-degree of all of the vertices.
2. Make a collection of flags to check if it is included in sorted sequence or not.
4. While the vertices collection is not empty:
   4.1 if vertex has in-degree zero and it is not included in sorted sequence.
      - include it in sorted sequence and print it.
   4.2 Reduce the indegree of vertices for which there was an edge from selected vertex.
5. If the edges collection is now empty, the graph is acyclic, and the sorted sequence contains a topological sort

