#include<iostream>
#include<queue>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		queue <long long>q;
		q.push(9);
		while (1) {
			long long tmp = q.front();
			q.pop();
			if (tmp % n == 0) {
				cout << tmp;
				break;
			}
			q.push((long long)(tmp * 10));
			q.push((long long)(tmp * 10 + 9));
		}
		cout << endl;
	}
}
