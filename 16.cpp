#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int a,b,c;
  cin >> a>>b>>c;
  a = a * 2;
  b = b - 3;
  c = pow(c, 2);
  c = a + b + c;
  cout << c;
  return 0;
}