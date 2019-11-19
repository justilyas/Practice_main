#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b || a == c) {
		cout << "yes";
	}
	else {
		if (b == a || b == c) {
			cout << "yes";
		}
		else {
			if (c == b || c == a) {
				cout << "yes";
			}
		}
	}
	return 0;
}