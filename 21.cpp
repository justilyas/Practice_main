#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int a, b, c, s, p;
  cin >> a >> b;
  c = a * a + b * b;
  c = sqrt(c);
  s = a * b;
  p = a + b + c;
  cout << s << endl << p << endl << c;
  return 0;
}