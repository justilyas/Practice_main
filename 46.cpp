#include <iostream>
using namespace std;
int main() {
	int a,b,c;
	cin >> a >> b >> c;
	int a1 = 0;
	int b1 = 0;
	int c1 = 0;
	if (a % 5 == 0) {
		a1 = a;
	}
	if (b % 5 == 0) {
		b1 = b;
	}
	if (c % 5 == 0) {
		c1 = c;
	}
	if (a % 5 == 0 && b % 5 == 0 && c % 5 == 0){
		cout << a1 + b1 + c1;
	}
	else {
		cout << "error";
	}
	return 0;
}