// PROBLEM https://open.kattis.com/problems/birthday
#include <bits/stdc++.h>
using namespace std;

const int N = 101;
bool adj[N][N];
bool vis[N];

void dfs(int u) {
  if (vis[u])
    return;

  vis[u] = true;

  for (int v = 1; v < N; v++) {
    if (adj[u][v])
      dfs(v);
  }
}

int main() {
  while (true) {
    int p, c;
    cin >> p >> c;
    if (p == 0 && c == 0)
      break;

    memset(adj, 0, sizeof adj);
    vector<pair<int, int>> edges;
    for (int i = 0; i < c; i++) {
      int a, b;
      cin >> a >> b;
      adj[a][b] = adj[b][a] = true;
      edges.emplace_back(a, b);
    }

    bool bad = false;

    for (auto e : edges) {
      int a = e.first, b = e.second;
      adj[a][b] = adj[b][a] = false;
      memset(vis, 0, sizeof vis);
      dfs(0);
      for (int u = 0; u < p; u++) {
        if (!vis[u]) {
          bad = true;
          break;
        }
      }
      adj[a][b] = adj[b][a] = true;
      if (bad)
        break;
    }

    cout << (bad ? "Yes" : "No") << endl;
  }
  return 0;
}