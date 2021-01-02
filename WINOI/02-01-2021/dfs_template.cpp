#include <bits/stdc++.h>
using namespace std;

const int N = 100;
vector<int> adj[N];
bool visit[N];

// graphs
void dfs(int u) {
  if (visit[u]) return;

  visit[u] = true;

  // matrix:
  // for (int v = 0; v < n; v++) {
  //   if (adj[u][v]) {
  //     dfs(v);
  //   }
  // }

  // adj list
  for (int v : adj[u]) {
    // if (!visit[v])
    dfs(v);
  }
}

// trees
void dfsTree(int u, int p) {
  for (int v : adj[u]) {
    if (v != p) {
      dfsTree(v, u);
    }
  }
}

int main() {

  return 0;
}
