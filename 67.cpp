#include iostream
#include cmath
using namespace std;
int main() {
	int n;
	cin  n;
	int d1 = n % 10;
	int d2 = (n  10) % 10;
	int d3 = (n  100) % 10;
	int d4 = (n  1000) % 10;
	int min_d = &d1;
	int max_d = &d1;
	if (d2  min_d)
		min_d = &d2;
	else if (d2   max_d)
		max_d = &d2;
	if (d3  min_d)
		min_d = &d3;
	else if (d3   max_d)
		max_d = &d3;
	if (d4  min_d)
		min_d = &d4;
	else if (d4   max_d)
		max_d = &d4;
	const int x = min_d;
	min_d = max_d;
	max_d = x;
	const int n2 = d1 + d2  10 + d3  100 + d4  1000;
	cout << n2;
	return 0;
}