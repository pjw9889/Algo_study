#include<iostream>
#include<queue>
#include<string>

using namespace std;
int main() {
	queue<int> q;
	int number, testcase;

	cin >> testcase;

	for (int i = 0; i < testcase; i++) {

		string input;
		cin >> input;
		if (input == "push") {
			cin >> number;
			q.push(number);
		}
		else if (input == "front") {
			if (q.empty())
				cout << "-1" << endl;
			else
				cout << q.front() << endl;
		}
		else if (input == "back") {
			if (q.empty())
				cout << "-1" << endl;
			else
				cout << q.back() << endl;
		}
		else if (input == "empty") {
			if (q.empty())
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
		else if (input == "size") {
			cout << q.size() << endl;
		}
		else if (input == "pop") {
			if (q.empty())
				cout << "-1" << endl;
			else {
				int tmp = q.front();
				q.pop();
				cout << tmp << endl;
			}
		}
	}
	return 0;
}


