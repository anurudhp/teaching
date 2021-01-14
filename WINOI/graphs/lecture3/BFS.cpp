#include <bits/stdc++.h>
using namespace std;

using PII = pair<int, int>;
using Node = pair<int, PII>; // distance, (u, t)

int main() {
  // info = pair<distance, vertex>
  priority_queue<Node, vector<Node>, greater<Node>> pq;
  vector<PII> v;
  v.push_back({1, 2});
  v.emplace_back(1, 2);

  pq.emplace(1, PII{2, 3});

  while (!pq.empty()) {
    int u, t;
    tie(u, t) = pq.top().second;
    pq.pop();

    if (done[u][t])
      continue;
    done[u][t] = true;

    // foreach neighbour (v, tt) of (u, t)
  }

  // non 0/-1 memsets:
  int dis[100];
  memset(dis, 0b01111111, sizeof dis);
  0xf;  // 15
  0xff; // 15 + 16*15 = ...
  //     01111111
  //     01111111011111110111111101111111
  // 0:  00000000
  // -1: 11111111
  // 2:  00000010
  //     00000010000000100000001000000010

  return 0;
}
