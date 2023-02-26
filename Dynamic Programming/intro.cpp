// Mistake -> Learn from mistake -> Achieve goal
//If we can handle smaller problems then we use their learnings to solve a bigger problem.

//Properties
//1. Optimal substructure -> If we can write a recurrence relation
//2. Overlapping subproblem -> If our subproblems repeat, then a problem is said to have overlapping subproblem.

//ways to handle overlapping subproblem
//memoization(top-down) ->  lookup table is miantained and checked beffore computation of any state.Recursion involved.
//tabulation (bottom-up)-> solution is built from base. It is iterative process.

//Minimizations and Maximization problems are generally solved with DP where we want exhaustive solution.
// 'Find the number of ways' is also a very popular type of DP problems.

// Wherever we can form recurrence relation or given in question can be solved using DP.

//Terminologies
//1. Directed graph -> a graph with directed edges

//2. Adjacent vertices -> Two vertices with direct edge connecting them.

//3. Degree of vertex
//a. Indegree -> no. of incoming edges to node
//b. Outdegree -> no. of outgoing edges from a node

//4. Connected graph -> Each node has path from every other node

//5. Disconnected graph-> Each node doesn't have path from every other node.

//6. Connected components -> Each connected graph in a disconnected graph

//7. Cycles -> Path from a vertex to the same vertex in a graph

//8. Cyclic Graph -> Graph that contains cycle.

//9. Tree -> Connected acyclic graph.
//no. of edges = n-1 
//there are no cycles present
//Each node has path from every other vertex.

//10. Directed Acyclic Graph(DAG)
//Has directed edges
//Acyclic

//11. Complete Graph -> Each vertex is connected to every other vertex by a direct edge. no. of edges = nC2

//12. Weighted graph -> graph with weighted edges.
