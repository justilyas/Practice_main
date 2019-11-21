#include <iostream>
using namespace std;
int main() {
	float a = 25, b = 25.5, c = 24.8;
	for (int i = 0; i < 10;i++) {
		a = a+1;
		b = b+1;
		c = c+1;
		cout << a << " " << b << " " << c << endl;
	}
	return 0;
}
