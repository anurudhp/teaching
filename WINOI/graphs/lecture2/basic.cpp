#include <bits/stdc++.h>
using namespace std;

/// Some basic usage of c++ vectors
void learn_vector() {
  vector<int> v;
  // size: get the number of elements
  int n = v.size(); // n = 0
  // push_back: add an element to the end
  v.push_back(100);
  v.push_back(200);
  v.push_back(300);
  // {100, 200, 300}
  n = v.size(); // n = 3
  v[0] = 105;

  // resize to 100 elements, filling with default value
  v.resize(100);

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << '\n';
  }

  // range based for-loop
  // iterate through all the values in `v`
  for (int x : v) {
    cout << x << '\n';
  }
  // add flag `-std=c++11` when compiling
}

const int MAXN = 10000;
vector<int> adj[MAXN];
bool visited[MAXN];

int depth[MAXN];

/// Complexity: O(N + M)
void dfs1(int u, int d = 0) {
  // `u` is the current node
  cout << "> entered " << u << '\n';

  visited[u] = true;
  depth[u] = d;

  for (int v : adj[u]) {
    if (!visited[v]) {
      dfs1(v, d + 1);
    }
  }

  cout << "> exited " << u << '\n';
}

/// Complexity: O(N + M)
int dfs2(int u) {
  // `u` is the current node
  if (visited[u])
    return 0;

  visited[u] = true;
  int size = 1;

  for (int v : adj[u]) {
    size += dfs2(v);
  }

  return size;
}

/// Complexity: O(N + M)
/// returns the number of nodes visited
int dfs1_with_sizes(int u) {
  // `u` is the current node
  cout << "> entered " << u << '\n';

  visited[u] = true;
  int size = 1;

  for (int v : adj[u]) {
    if (!visited[v]) {
      size += dfs1_with_sizes(v);
    }
  }

  cout << "> exited " << u << '\n';

  return size;
}

/// print the sizes of each connected component
void component_size() {
  int n;

  // using dfs1
  for (int u = 1; u <= n; u++) {
    if (!visited[u]) {
      int cur_size = dfs1_with_sizes(u);
      cout << cur_size << ' ';
    }
  }
  cout << '\n';

  // using dfs2
  for (int u = 1; u <= n; u++) {
    int cur_size = dfs2(u);
    if (cur_size != 0) {
      cout << cur_size << ' ';
    }
  }
  cout << '\n';
}

int main() {
  int n, m; // #nodes, #edges
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  int x, y;
  cin >> x >> y;

  dfs1(x);
  if (visited[y]) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

  return 0;
}
