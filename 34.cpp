#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a > 3) {
		a = a + 10;
	}
	else {
		a = a - 10;
	}
	cout << a;
	return 0;
}