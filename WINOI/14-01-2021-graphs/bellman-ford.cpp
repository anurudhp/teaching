#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using PII = pair<int, int>;

const int N = 1000;
const int INF = 2e9;
// DO NOT #defines
// #define INF 2e9
//
// #define FOR(i, a, b) for (int i = a; i < b; i++)

// vector<PII> adj[N];
vector<vector<PII>> adj;
int dis[N];

bool BellmanFord(int s) {
  int n = adj.size();
  fill(dis, dis + n, INF);
  dis[s] = 0;

  // x, y, z
  // a, b, c
  // eab ebc euv
  for (int it = 1; it <= n; it++) {
    bool updated = false;
    for (int u = 0; u < n; u++) {
      // for (int i = 0; i < adj[u].size(); i++) {
      //   auto e = adj[u][i];
      //   // body
      // }
      // [, ] = ...; -> C++17
      for (auto e : adj[u]) {
        // auto [v, w]: adj[u]

        // int v = e.first, w = e.second;
        int v, w;
        tie(v, w) = e;
        // auto [v, w] = e;

        if (dis[v] > dis[u] + w) {
          dis[v] = dis[u] + w;
          updated = true;
        }
      }
    }

    if (!updated)
      break; // early exit
    if (it == n && updated)
      return false; // -ve cycle
  }

  return true;
}

int main() {
  int t;
  while (t--) {
    int n;
    cin >> n;
    adj.assign(n, {});
  }

  pair<int, pair<int, int>> piii;
  tuple<int, int, int> tiii;
  get<0>(tiii);
  int x, y, z;
  tie(x, y, z) = tiii;
  tie(x, y, ignore) = tiii;

  return 0;
}
