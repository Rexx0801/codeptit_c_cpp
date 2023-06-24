#include<iostream>
using namespace std;
int n;
int arr[100005];
int let[100005];
int rigt[100005];
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		let[0] = 1;
		rigt[n - 1] = 1;
		for (int i = 1; i < n; i++) {
			if (arr[i] > arr[i - 1]) {
				let[i] = let[i - 1] + 1;
			}
			else {
				let[i] = 1;
			}
		}
		for (int i = n - 2; i >= 0; i--) {
			if (arr[i] > arr[i + 1]) {
				rigt[i] = rigt[i + 1] + 1;
			}
			else {
				rigt[i] = 1;
			}
		}
		int ans = 0;
		for (int i = 0; i < n; i++) {
			ans = max(ans, let[i] + rigt[i] - 1);
		}
		cout << ans<<endl;
	}
}
