Problems
--------

To be discussed:
- https://www.spoj.com/A12/problems/FLOW/ - Direct problem, test your implementations.
- https://www.spoj.com/problems/POTHOLE/  
- https://codeforces.com/problemset/problem/653/D 
- https://www.spoj.com/problems/MUDDY (warning: this problem apparently has issues, so don't worry if your solution doesn't work.)
- https://www.codechef.com/AMR17ROL/problems/AMLEX

Extra:
- https://www.spoj.com/problems/TAXI/ 
- https://codeforces.com/problemset/problem/628/F (elegant reduction)
- https://codeforces.com/problemset/problem/852/D
- https://codeforces.com/problemset/problem/510/E (elegant reduction)
- https://codeforces.com/problemset/problem/546/E
- https://www.codechef.com/AM19MOS/problems/POLCON (dilworth's, team contest)
- https://open.kattis.com/problems/mincostmaxflow (MCMF, direct)
- https://www.spoj.com/problems/GREED/ (MCMF)
- https://codeforces.com/problemset/problem/1510/B (MCMF, team contest)
- https://atcoder.jp/contests/agc034/tasks/agc034_d (MCMF, hard)

[More problems here](https://gist.github.com/anurudhp/690bfcac2ec22ac0356393d19fdd9031) - These contain CF gym/WF problems. If you don't want to spoil those contests, don't open this.

Resources
-----------
Here are a few good resources on flows, and some nice problems that you can try. Some of them might be hard, so don't hesitate to take help or ask on discord.

Topcoder Tutorials:
- [Part 1](https://www.topcoder.com/thrive/articles/Maximum%20Flow%20Part%20one) - explains the algorithm (Ford-Fulkerson, its a slower algorithm, but the concepts are the same as that in Dinics or Edmond-Karps)
- [Part 2](https://www.topcoder.com/thrive/articles/Maximum%20Flow:%20Part%20Two) - Some nice problems and reductions, explained well


Implementations
---------------
- [CPAlgorithms: Dinics](https://cp-algorithms.com/graph/dinic.html)
- [CPAlgorithms: Push-Relabel](https://cp-algorithms.com/graph/push-relabel-faster.html)
- [KTH/KACTL Notebook](https://github.com/kth-competitive-programming/kactl/tree/main/content/graph) - Check `Dinic.h`, ` MinCostMaxFlow.h`, `MinCut.h`, `MinimumVertexCover.h`. `PushRelabel.h`, may need to copy-paste their `template.cpp` too (for defines).
- [CF Blog: Benchmarking Complexity of Dinic's With Scaling](https://codeforces.com/blog/entry/66006)

Concepts
------------

- Algorithms
  - max-flow: Dinics
  - min-cost-max-flow: SPFA
- min-cut-max-flow
- Maximum Bipartite Matching
- Minimum Vertex Cover (Bipartite graphs)
  + Konig's theorem
- Dilworth's theorem
- Extra:
  + Hungarian Algorithm - min cost perfect matching
  + Blossom Algorithm - max. matching in any graph
