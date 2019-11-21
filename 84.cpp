#include <iostream>
using namespace std;
int main() {
	double price = 20;
	int kurs;
	double kgprice = 0;
	cin >> kurs;
	for (int i = 1; i <= 100; i++) {
		kgprice = (i * kurs) / price;
		cout << i << '$' << " " << kurs*i << " " << kgprice << endl;
	}
	return 0;
}