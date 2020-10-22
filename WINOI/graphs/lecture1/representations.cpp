#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int N = 1000;

// Adjacency matrix
bool adj_mat[N][N]; // adj_mat[u][v] = if there is an edge (u, v)

// Adjacency List
vector<int> adj_list[N]; // adj_list[u] = neighbours of u

namespace WEIGHTED {

int adj_mat[N][N];
void weighted_graphs() {
  // Simple, weighted
  int u, v, wt;
  cin >> u >> v >> wt;
  adj_mat[u][v] = adj_mat[v][u] = wt;
}

} // namespace WEIGHTED

namespace MULTIGRAPH {

vector<pair<int, int>> adj_list[N];

void mutli() {
  int u, v, w;
  adj_list[u].push_back({v, w});
  adj_list[v].push_back({u, w}); // comment if directed
}

} // namespace MULTIGRAPH

namespace TREE {
int parent[N];

void tree() {
  int n;
  cin >> n;
  // 0 is the root
  for (int u = 1; u < n - 1; u++) {
    int p;
    cin >> p;

    parent[u] = p;

    adj_list[p].push_back(u);
    adj_list[u].push_back(p); // comment if directed
  }

  int current;
  cin >> current;
  cout << "ANCESTORS: ";
  do {
    cout << current << ' ';
    current = parent[current];
  } while (current != 0);
  cout << '\n';
}

} // namespace TREE

int main() {
  // Simple Graph

  int n, m; // nodes are numbered from 0 ... N - 1
  cin >> n >> m;

  // List of edges
  pair<int, int> edges[m];

  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n; j++) {
  //     adj_mat[i][j] = false;
  //   }
  // }

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;

    edges[i] = {u, v};

    adj_mat[u][v] = true;
    adj_mat[v][u] = true; // comment if it's directed

    adj_list[u].push_back(v);
    adj_list[v].push_back(u); // comment if it's directed
  }

  // neighbours (node) = nodes connected to node directly (by an edge)
  // degree(node) = |neighbours(node)|
  int node;
  cin >> node;
  // int degree = 0;
  // for (int u = 0; u < n; u++) {
  //   if (adj_mat[node][u]) {
  //     degree++;
  //   }
  // }
  int degree = adj_list[node].size();
  cout << degree << '\n';

  // x, y: are x and y connected by an edge?
  // adj_mat[x][y]
  int x, y;
  cin >> x >> y;
  bool ok = adj_mat[x][y];

  bool ok = false; // is connected by edge?
  for (int i = 0; i < adj_list[x].size(); i++) {
    if (adj_list[x][i] == y) {
      ok = true;
    }
  }
  cout << (ok ? "YES" : "NO") << '\n';

  return 0;
}
