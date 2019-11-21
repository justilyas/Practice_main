#include <iostream>
using namespace std;
int main() {
	int counter = 1;
	for (int i = 5; i <= 13; i++) {
		counter = counter * i;
	}
	cout << counter;
	return 0;
}