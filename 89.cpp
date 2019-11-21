#include <iostream>
using namespace std;
int main() {
	int counter = 1;
	for (int i = 1; i <= 112; i=i+3) {
		counter = counter + i;
	}
	cout << counter;
	return 0;
}