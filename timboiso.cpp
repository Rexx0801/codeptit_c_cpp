#include<iostream>
#include<queue>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		queue<long long>q;
		q.push(9);
		int n;
		cin >> n;
		while (1) {
			if (q.front() % n == 0) {
				cout << q.front();
				break;
			}
			long long tmp = q.front();
			q.pop();
			q.push((long long)tmp * 10);
			q.push((long long)tmp * 10 + 9);
		}
		cout << endl;
	}
}
