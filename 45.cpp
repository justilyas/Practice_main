#include <iostream>
using namespace std;
int main() {
	int a,b,c;
	cin >> a >> b >> c;
	if ((a > 10 || b > 10 || c > 10) && (a % 3 == 0 && b & 3 == 0)) {
		cout << a + b;
	}
	else {
		cout << a * b;
	}
	return 0;
}