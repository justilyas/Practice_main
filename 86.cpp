#include <iostream>
using namespace std;
int main() {
	int n;
	int counter = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		counter = counter + i;
	}
	cout << counter;
	return 0;
}