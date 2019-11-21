#include <iostream>
#include <iostream>
using namespace std;
int main() {
	float counter = 0;
	for (int i = 3; i <= 111; i=i+2) {
		counter = counter + cos(i/i+2);
	}
	cout << counter;
	return 0;
}