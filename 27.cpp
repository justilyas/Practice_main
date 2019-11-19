#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int atemp = 0;
	int btemp = 0;
	int ctemp = 0;
	atemp = a;
	btemp = b;
	ctemp = c;
	a = atemp + btemp;
	b = ctemp - atemp;
	c = atemp + btemp + ctemp;
	cout << a << " " << b << " " << c;
	return 0;
}