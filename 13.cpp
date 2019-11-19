#include <iostream>
#include <cmath>
using namespace std;
int main() {
  float a = 0.1, b = 0.2, x = 1,c=0,d=0;
  c = pow(pow(x, 2) + b, 1 / 5);
  d = (pow(b, 2) * pow(sin(x + a), 3)) / x;
  c = c - d;
  cout << c;
  return 0;
}