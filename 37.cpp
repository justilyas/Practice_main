#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	int b;
	cin >> b;
	if (a > b) {
		cout << a;
	}
	else {
		if (a < b) {
			cout << b;
		}
	}
	return 0;
}