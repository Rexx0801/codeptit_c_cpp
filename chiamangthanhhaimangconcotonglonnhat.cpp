#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int n, k;
int arr[55];
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		int a = min(k, n - k);
		int sum = 0;
		int sum1 = 0;
		for (int i = 0; i < n; i++) {
			if (i < a) {
				sum += arr[i];
			}
			else {
				sum1 += arr[i];
			}
		}
		cout << sum1 - sum << endl;
	}
}
