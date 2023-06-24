#include<iostream>
#include<algorithm>
using namespace std;
int n, k;
int arr[1005];
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i = 0; i < n; i++)cin >> arr[i];
		sort(arr, arr + n);
		for (int i = n - 1; i >= n - k; i--) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}
