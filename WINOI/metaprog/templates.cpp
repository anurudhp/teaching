#include <bits/stdc++.h>
using namespace std;

/// Templates Basics

class VectorInt {
  int *ptr; // memory location
  int size;

public:
  VectorInt(int n) {
    size = n;
    ptr = (int *)malloc(n * sizeof(int));
    memset(ptr, 0, n * sizeof(int));
  }
  int get(int index) { return ptr[index]; }
  void set(int index, int value) { ptr[index] = value; }
  int get_size() { return size; }
};

// VectorChar: copy from above
class VectorChar {
  char *ptr; // memory location
  int size;

public:
  VectorChar(int n) {
    size = n;
    ptr = (char *)malloc(n * sizeof(char));
    memset(ptr, 0, n * sizeof(char));
  }
  char get(int index) { return ptr[index]; }
  void set(int index, char value) { ptr[index] = value; }
};

template <class T> // T = long
class Vector {
  T *ptr; // memory location
  int size;

public:
  Vector(int n) {
    size = n;
    ptr = (T *)malloc(n * sizeof(T));
    memset(ptr, 0, n * sizeof(T));
  }
  T get(int index) { return ptr[index]; }
  void set(int index, T value) { ptr[index] = value; }
};
// Vector<int>
// Vector<long>

// int Max(int a, int b) { return a > b ? a : b; }
// long Max(long a, long b) { return a > b ? a : b; }

template <class T>
T Max(T a, T b) {
  return a > b ? a : b;
}

int main() {
  // VectorInt v(10);
  Vector<int> v(10);
  v.set(4, 5);              // v[4] = 5;
  cout << v.get(4) << '\n'; // 5

  VectorChar vc(10);
  vc.set(1, 'a');           // vc[1] = 'a';
  cout << v.get(1) << '\n'; // a

  // vvvvvvvvvv Doesn't work!
  // Max(v, v); // T = Vector<int>

  return 0;
}
