#include <iostream>
#include <iostream>
using namespace std;
int main() {
	float counter = 0;
	for (int i = 2; i <= 9; i=i+1) {
		counter = counter + (i/i+1);
	}
	cout << counter;
	return 0;
}