#include <iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a > b && a > c && a > d) {
		if (a % 2 == 0)
			cout << a;
		else
			cout << "not found";
	}
	if (b > a && b > c && b > d) {
		if (b % 2 == 0)
			cout << b;
		else
			cout << "not found";
	}
	if (c > b && c > a && c > d) {
		if (c % 2 == 0)
			cout << c;
		else
			cout << "not found";;
	}
	if (d > b && d > a && d > c) {
		if (d % 2 == 0)
			cout << d;
		else
			cout << "not found";
	}
	return 0;
}