#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (2 <= a && a <= 5) {
		a = a+10;
	}
	else {
		if (7 < a && a < 40) {
			a = a - 100;
		}
		else {
			if (a < 0 || a>3000) {
				a = a * 3;
			}
			else {
				a = 0;
			}
		}
	}
	return 0;
}