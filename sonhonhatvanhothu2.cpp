#include<iostream>
#include<algorithm>
using namespace std;
int arr[1000005];
int n;
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		int j = 0;
		while (arr[j] == arr[j + 1] && j <= n - 2) {
			j++;
		}
		if (j == n - 1) {
			cout << -1;
		}
		else {
			cout << arr[0] << " " << arr[j + 1];
		}
		cout << endl;
	}
}
