#include<iostream>
#include<string>
#include<queue>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		queue<string>q;
		q.push("1");
		int ans = 0;
		while (1) {
			string tmp = q.front();
			q.pop();
			if (stoll(tmp) >= n) {
				break;
			}
			ans++;
			q.push(tmp + "0");
			q.push(tmp + "1");
		}
		cout << ans << endl;
	}
}
