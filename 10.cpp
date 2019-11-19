#include <iostream>
#include <cmath>
using namespace std;
int main() {
  float a = 1.7, n = 0, m = 0;
  n = pow((a + 1),2);
  m = 3*(a +1);
  a = n+m;
  cout << a<<endl;
  a = 3;
  n = 0;
  m = 0;
  n = pow((a + 1), 2);
  m = 3 * (a + 1);
  a = n + m;
  cout << a;
  return 0;
}