#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 1;
vector<int> adj[MAXN];
bool visited[MAXN];

// Complexity: O(N + M)
void dfs(int u) {
  // `u` is the current node
  visited[u] = true;

  for (int v : adj[u]) {
    if (!visited[v]) {
      dfs(v);
    }
  }
}

void solve() {
  int n, m; // #nodes, #edges
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  dfs(1);
  bool connected = true;
  for (int u = 1; u <= n; u++) {
    if (!visited[u])
      connected = false;
  }

  cout << (connected ? "YES" : "NO") << '\n';

  for (int u = 1; u <= n; u++) {
    adj[u].clear(); // empties the vector
    visited[u] = false;
  }
  // memset(visited, 0, sizeof visited);
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
