#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Factorial1 {
  static const int value = 1;
};
struct Factorial2 {
  static const int value = 2;
};
struct Factorial3 {
  static const int value = 6;
};
struct Factorial4 {
  static const int value = 24;
};

template <int N>
struct Factorial {
  static constexpr ll value = N + Factorial<N - 1>::value;
};

template <>
struct Factorial<0> {
  static constexpr ll value = 1;
};

int factorial(int n) {
  if (n == 0)
    return 1;
  else
    return n * factorial(n - 1);
}

int main() {
  cout << Factorial<100>::value << '\n';
  return 0;
}

void normal() {
  ll ans = 1;
  for (int i = 1; i <= 10; i++) {
    ans *= i;
  }
  cout << ans << '\n';
}
