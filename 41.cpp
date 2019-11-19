#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (-100 > a && a > 100) {
		a = 0;
	}
	else {
		a = a + 1;
	}
	return 0;
}