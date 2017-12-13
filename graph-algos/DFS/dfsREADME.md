## Depth First Search Traversal


Depth first search is a recursive algorithm that uses the idea of backtracking. Basically, it involves exhaustive searching of all the nodes by going ahead - if it is possible, otherwise it will backtrack. By backtrack, here we mean that when we do not get any further node in the current path then we move back to the node,from where we can find the further nodes to traverse.<br>
 In other words, we will continue visiting nodes as soon as we find an unvisited node on the current path and when current path is completely traversed we will select the next path.<br>

This recursive nature of DFS can be implemented using stacks. The basic idea is that we pick a starting node and push all its adjacent nodes into a stack. Then, we pop a node from stack to select the next node to visit and push all its adjacent nodes into a stack.
<br>We keep on repeating this process until the stack is empty. But, we do not visit a node more than once, otherwise we might end up in an infinite loop. To avoid this infinite loop, we will mark the nodes as soon as we visit it.<br>

[visualize Dfs algorithm](https://www.cs.usfca.edu/~galles/visualization/DFS.html) .
