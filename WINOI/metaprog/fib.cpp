#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template <int N>
struct Fib {
  static constexpr ll value = Fib<N - 1>::value + Fib<N - 2>::value;
};

template <>
struct Fib<0> {
  static constexpr ll value = 1;
};
template <>
struct Fib<1> {
  static constexpr ll value = 1;
};

// ll fib(int n) {
//   if (n == 0 || n == 1)
//     return 1;
//   return fib(n - 1) + fib(n - 2);
// }

int main() {
  cout << Fib<10>::value << endl;
  return 0;
}
// 1 1 2 3 5 8 13 21 34 55 89 ...
