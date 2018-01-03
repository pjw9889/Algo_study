#include <iostream>

using namespace std;

const int p = 1500000;
int fibo[p] = { 0,1, };

int main() {

	long long n;
	cin >> n;
	for (int i = 2; i<p; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		fibo[i] %= 1000000;
	}
	cout << fibo[n%p] << '\n';

	return 0;
}

