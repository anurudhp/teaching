Graphs: Shortest Paths
======================

Implementing BFS and Dijkstra.

Algorithms
==========

Graph `G = (V, E)`
`n = |V|`
`m = |E|`

- BFS
  + Single Source
  + All Destinations
  + Unweighted graphs (i.e. distance = no. of edges)
  + Complexity: `O(n + m)`
- Dijkstra
  + Single Source
  + All Destinations
  + Weighted graphs (i.e. distance = sum of weights)
  + Positive Weights only (!!!)
  + Complexity: `O((n + m) log(n + m)) = O((n + m) log n)`
- Bellman-Ford
  + Single Source
  + All Destinations
  + Weighted graphs (i.e. distance = sum of weights)
  + Negative Weights **allowed** (even negative cycles!)
  + Complexity: `O(n * m)`
  + Early exit: Stop when there are no updates
- Floyd-Warshall
  + All Source All Destinations
  + Any graph (weighted, (un)directed)
  + Complexity: `O(n^3)`


