#include <iostream>

using namespace std;

int main() {

	long long arr[91] = { 0,1, };
	long long number;

	cin >> number;

	for (int i = 2; i <= number; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cout << arr[number];

	return 0;
}

