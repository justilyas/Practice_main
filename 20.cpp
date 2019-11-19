#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b;
  b = b * 1000;
  a = a * 60;
  c = b / a;
  cout << c;
  return 0;
}