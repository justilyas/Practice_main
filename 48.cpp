#include <iostream>
using namespace std;
int main() {
	int a,b,c;
	cin >> a >> b >> c;
	int ab = a + b;
	int bc = b + c;
	int ac = a + c;
	if (ab > bc && ab > ac) {
		cout << a << " " << b;
	}
	if (bc > ab && bc > ac) {
		cout << b << " " << c;
	}
	if (ac > bc && ac > ab) {
		cout << a << " " << c;
	}
	return 0;
}