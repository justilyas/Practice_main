#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int a = 2,b=3,n=0,m=0;
  n = (a + 4 * b);
  m = (a - 3 * b);
  a=pow(a, 2);
  n = n * m + a;
  cout << n;
  return 0;
}