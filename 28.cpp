#include <iostream>
using namespace std;
int main() {
	int amount;
	int perc;
	cin >> amount >> perc;
	amount = ((amount / 100) * perc) + amount;
	cout << amount;
	return 0;
}