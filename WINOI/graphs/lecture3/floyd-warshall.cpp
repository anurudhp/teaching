#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using PII = pair<int, int>;

const int N = 1000;
const int INF = 2e9;
vector<vector<PII>> adj;

int dis[N][N];

void FloydWarshall(int n) {
  // initialize distances to infinity
  for (int u = 0; u < n; u++) {
    for (int v = 0; v < n; v++) {
      dis[u][v] = INF;
    }
    dis[u][u] = 0;
  }

  // set edge weights
  for (int u = 0; u < n; u++) {
    for (auto e : adj[u]) {
      int v, w;
      tie(v, w) = e;
      dis[u][v] = min(dis[u][v], w);
    }
  }

  // compute!
  for (int p = 0; p < n; p++) {
    for (int u = 0; u < n; u++) {
      for (int v = 0; v < n; v++) {
        dis[u][v] = min(dis[u][v], dis[u][p] + dis[p][v]);
      }
    }
  }
}

int main() {
  return 0;
}
