#include <iostream>

using namespace std;

int factorial(int a) {
	if (a == 1 || a == 0) {
		return 1;
	}
	else {
		return factorial(a - 1) * a;
	}
}


int main() {

	int n, k;

	cin >> n >> k;

	cout << factorial(n) / (factorial(k) * factorial(n - k)) << endl;

	return 0;
}

