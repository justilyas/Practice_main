#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a;
	cin >> a;
	int b;
	cin >> b;
	if (abs(a - b) == 100) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}

	return 0;
}