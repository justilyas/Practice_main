#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b, c,x1,x2, z=0;
	cin >> a >> b >> c;
	z = pow(b, 2) - ((4 * a) * c);
	if (z > 0) {
		x1 = (-b + sqrt(z)) / (2 * a);
		x2 = (-b - sqrt(z)) / (2 * a);
		cout << x1 << x2;
	}
	else if (z == 0) {
		x1 = (-b) / (2 * a);
		cout << x1;
	}
	else cout << "no real solution";
	return 0;
}
