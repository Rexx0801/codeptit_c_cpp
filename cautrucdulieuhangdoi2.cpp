#include<iostream>
#include<queue>
using namespace std;
int main() {
	int n;
	cin >> n;
	queue<int>q;
	while (n--) {
		string s;
		cin >> s;
		if (s == "PUSH") {
			int a;
			cin >> a;
			q.push(a);
		}
		if (s == "POP") {
			if (!q.empty()) {
				q.pop();
			}
		}
		if (s == "PRINTFRONT") {
			if (!q.empty()) {
				cout << q.front();
			}
			else {
				cout << "NONE";
			}
			cout << endl;
		}
	}
}
