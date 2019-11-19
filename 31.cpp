#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int height = 647;
	int base = 170;
	int area = height * base;
	int sqa = 30;
	int amountsq = area / pow(sqa, 2);
	cout << amountsq;
}