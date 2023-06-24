#include<iostream>
#include<algorithm>
using namespace std;
int arr[25];
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
		long long a = 0;
		long long b = 0;
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				a = a * 10 + arr[i];
			}
			else {
				b = b * 10 + arr[i];
			}
		}
		cout << (long long)(a + b) << endl;
	}
}
