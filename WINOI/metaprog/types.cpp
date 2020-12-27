
// python
// a + b
// NO type system

// int a;
// void b();
//
// a + b
// strict, static typesystem

// LET US MAKE!
// strictest typesystem
//
/* int0 zero; */
/* int1 one; */
/* int2 two; */
/* int3 three, zzzz; */
/* int4 four; */
/* int5 */

/*     int4 result = two + three; */

template <int N>
class MyInt {};

template <int A, int B>
MyInt<A + B> add(MyInt<A> a, MyInt<B> b) {
  return MyInt<A + B>();
}

template <int A, int B>
MyInt<A * B> mult(MyInt<A> a, MyInt<B> b) {
  return MyInt<A * B>();
}

int main() {
  MyInt<2> two;
  MyInt<3> three;
  MyInt<5> result = add(two, three);
  MyInt<6> product = mult(two, three);
  return 0;
}
