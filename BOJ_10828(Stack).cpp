#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> v;

int function(string a, int number) {
	int ret;
	if (a == "push") {
		v.push_back(number);
		return -2;
	}
	else if (a == "pop") {
		if (v.empty())
			return -1;
		else {
			ret = v.back();
			v.pop_back();
			return ret;
		}
	}

	else if (a == "top") {
		if (v.empty()) {
			return -1;
		}
		else
			return v.back();

	}

	else if (a == "empty") {

		if (v.empty())
			return 1;
		else
			return 0;
	}
	else if (a == "size") {
		return v.size();
	}
}

int main() {


	int testcase, number, result;
	string com;

	cin >> testcase;

	for (int i = 0; i < testcase; i++) {
		cin >> com; number;

		if (com == "push") {
			cin >> number;
			result = function(com, number);
		}
		else
			result = function(com, 0);

		if (result == -2)
			continue;
		else
			cout << result << endl;
	}

	return 0;
}

