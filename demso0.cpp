#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int arr[1000];
		int n;
		cin >> n;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (!arr[i])cnt++;
		}
		cout << cnt << endl;
	}
}
