#include <bits/stdc++.h>
using namespace std;

const int N = 500;
// const int N = 10;
int grid[N][N];
bool visited[N][N];
// 2.5e5

// int count;

int dfs(int i, int j) {
  // cerr << ">> AT " << i << ", " << j << endl;
  // if (i < 0 || j < 0 || i >= n || j >= m) return 0;
  if (visited[i][j]) return 0;
  if (grid[i][j] == 1) return 0;
  visited[i][j] = true;

  int count = 1;
  count += dfs(i + 1, j);
  count += dfs(i, j + 1);
  count += dfs(i - 1, j);
  count += dfs(i, j - 1);
  return count;
}

void solve() {
  // input
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> grid[i][j];
    }
  }

  // cerr << "reached line 31"; // ALWAYS USE CERR instead of COUT
  // solve
  int number = 0, largest = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (grid[i][j] == 0 && !visited[i][j]) {
        // cerr << "> CALLING " << i << ", " << j << endl;
        number++;
        int count = dfs(i, j);
        largest = max(largest, count);
      }
    }
  }

  // output
  cout << number << ' ' << largest << '\n';
}

int main() {
  freopen("sample.in", "r", stdin);

  //  int t;
  //  cin >> t;
  //  while (t--)
  solve();

  return 0;
}
