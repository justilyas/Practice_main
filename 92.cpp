
#include <iostream>
using namespace std;
int main() {
	float counter = 0;
	for (int i = 1; i <= 100; i++) {
		counter = counter + i;
		cout << counter << endl;
	}
	return 0;
}