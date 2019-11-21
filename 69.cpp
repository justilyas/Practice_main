#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b, c,s,p;
	cin >> a >> b >> c;
	if ((a + b) > c) {
		p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << c;
	}
	else cout << "Doesn't exist";
	return 0;
}