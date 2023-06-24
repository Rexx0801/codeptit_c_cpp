#include<iostream>
using namespace std;
int n;
int arr[10000005];
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int ans = -1;
		for (int i = 0; i < n - 1; i++) {
		    if(ans!=-1)break;
			if (arr[i] > arr[i + 1]) {
				ans = i;
			}
		}
		if (ans != -1) {
			cout << ans + 1;
		}
		else {
			cout << 0;
		}
		cout << endl;
	}
}
