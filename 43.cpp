#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a == 3 || a == 4 || a == 5) {
		cout << "spring";
	}
	if (a == 6 || a == 7 || a == 8) {
		cout << "autumn";
	}
	if (a == 9 || a == 10 || a == 11) {
		cout << "summer";
	}
	if (a == 12 || a == 1 || a == 2) {
		cout << "winter";
	}
	return 0;
}