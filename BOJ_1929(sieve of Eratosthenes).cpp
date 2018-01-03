#include <iostream>

using namespace std;
int arr[1000001] = { 0, 1 };

int main() {

	int m, n;

	cin >> m >> n;

	for (int i = 2; i <= n; i++) {
		for (int j = 2; j*i <= n; j++) {
			arr[i*j] = 1;
		}
	}
	for (int i = m; i <= n; i++) {
		if (!arr[i])
			cout << i << endl;
	}
	return 0;
}

