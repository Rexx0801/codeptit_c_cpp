#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		queue<string>q;
		vector<string>v;
		q.push("6");
		q.push("8");
		while (!q.empty()) {
			string tmp = q.front();
			q.pop();
			if (tmp.size() == n + 1) {
				break;
			}
			v.push_back(tmp);
			q.push(tmp + "6");
			q.push(tmp + "8");
		}
		cout << v.size() << endl;
		for (auto a : v) {
			cout << a << " ";
		}
		cout << endl;
	}
}
