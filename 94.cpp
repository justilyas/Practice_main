#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int counter = 0;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		counter = counter + 1 / i;
	}
	cout << counter << endl;
	return 0;
}