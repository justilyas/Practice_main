#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	int counter = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		counter = counter + ((i*(i+1))*2*i);
	}
	cout << counter << endl;
	return 0;
}