#include <cstdio>

using namespace std;

int main() {
	int arr[1000] = { 0, };
	int n, tmp;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {

			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);


	return 0;
}