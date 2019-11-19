#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int a, b, c,d;
  cin >> a >> b >> c;
  d = (a + b + c) / 3;
  a=2 * (a + c) - 3 * b;
  cout << d <<endl<< a;
  return 0;
}