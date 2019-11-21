#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float counter = 0;
	float n;
	float x;
	cin >> x >> n;
	for (int i = 1; i <= n; i++) {
		counter = counter + 1/pow(cos(x),i);
	}
	cout << counter << endl;
	return 0;
}