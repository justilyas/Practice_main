#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	int xx = x * x;
	int a4 = 1;
	int a6 = 1;
	int a15 = 1;
	for (int i = 0; i < 2; i++) {
		a4 = a4 * xx;
	}
	for (int i = 0; i < 3; i++) {
		a6 = a6 * xx;
	}
	for (int i = 0; i < 5; i++) {
		a15 = a15 * xx;
	}
	cout << a4 << " " << a6 << " " << a15;
	return 0;
}