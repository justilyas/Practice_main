#include <iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			cout << "********" << endl;
		}
		else cout << "****"<<endl;
	}
	return 0;
}