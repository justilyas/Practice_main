#include <iostream>
#include <cmath>
using namespace std;
int main() {
  float e = 2.71828, x = 3.6;
  e = pow(e, x - 2);
  x = e + abs(sin(x)) - pow(x, 4) * cos(1 / x);
  cout << x;
  return 0;
}