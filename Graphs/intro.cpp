//Ex -> User connections in facebook

//Components of a graph
///Nodes -> States or vertex. Ex->User
//Edges -> Links between states in a graph. for instance connections between users
//Undirected -> Two way edges
//Directed -> One way edges

// Representation 
//Adjacency matrix -> 2D array where a[i][j]=1 if there is an edge from i to j else a[i][j]=0

//Adjacency list-> array of lists, where each a[i] is a list of nodes x that are reachable from i.

//Depth First Search
//implemented using stacks
//Pre order -> first time when call comes on the node
//In-order -> when the call works inside the subtree of that node.
//Post-order -> after working on thee subtree, call commes back on the node.After this, call won't come on the same node.


//Breadth first search
// Implemented using queues