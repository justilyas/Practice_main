#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a1, a2, b1, b2, c1, c2, d1, d2;
	cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
	if (a1 == b1) {
		if (a2 == c2 || b2 == c2) {
			d1 = a2;
			d2 = a1;
		}
	}
	return 0;
}