#include <iostream>
using namespace std;
int main() {
	double initial = 10;
	double counter = 0;
	cout << "a)" << endl;
	for (int i = 2; i <= 10; i++) {
		initial = (initial + ((initial / 100) * 10));
		cout << "day " << i << ": " << initial << endl;
	}
	counter = 0;
	for (int i = 2; i <= 7; i++) {
		initial = (initial + ((initial / 100) * 10));
		counter = counter + initial;
	}
	counter = counter + 10;
	cout << "b)" << endl;
	cout << counter << endl;
	counter = 0;
	cout << "c)" << endl;
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		initial = (initial + ((initial / 100) * 10));
		counter = counter + initial;
	}
	counter = counter + 10;
	cout << counter << endl;
	counter = 10;
	cout << "d)" << endl;
	for (int i = 2; 1 < 2; i++) {
		initial = (initial + ((initial / 100) * 10));
		counter = counter + initial;
		i++;
		if (counter = 80) {
			cout << i;
			break;
		}
	}
	return 0;
}