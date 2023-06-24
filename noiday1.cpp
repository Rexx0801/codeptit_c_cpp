#include<iostream>
#include<queue>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long ans = 0;
		priority_queue<int, vector<int>, greater<>>v;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			v.push(a);
		}
		while (v.size() != 1) {
			int a = v.top();
			v.pop();
			int b = v.top();
			v.pop();
			ans = (long long)(ans + a + b);
			v.push(a + b);
		}
		cout << ans << endl;
	}
}
