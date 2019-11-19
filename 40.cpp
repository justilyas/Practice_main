#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (-10 < a && a < 10) {
		a = a + 5;
	}
	else {
		a = a - 10;
	}
	return 0;
}