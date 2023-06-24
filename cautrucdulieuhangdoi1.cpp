#include<iostream>
#include<queue>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		deque<int> q;
		int n;
		cin >> n;
		while (n--) {
			int a;
			cin >> a;
			if (a == 1) {
				cout << q.size();
				cout << endl;
			}
			if (a == 2) {
				if (q.empty()) {
					cout << "YES";
				}
				else {
					cout << "NO";
				}
				cout << endl;
			}
			if (a == 3) {
				int b;
				cin >> b;
				q.push_back(b);
			}
			if (a == 4) {
				if (!q.empty()) {
					q.pop_front();
				}
			}
			if (a == 5) {
				if (!q.empty()) {
					cout << q.front() << endl;
				}
				else {
					cout << -1;
				}
				cout << endl;
			}
			if (a == 6) {
				if (!q.empty()) {
					cout << q.back() << endl;
				}
				else {
					cout << -1;
				}
				cout << endl;
			}
		}
		cout << endl;
	}
}
