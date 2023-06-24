#include<iostream>
#include<algorithm>
using namespace std;
int arr[100000];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int cnt = 0;
	for (int i = n - 3; i < n; i++) {
		if (arr[i] < 0) {
			cnt++;
		}
	}
	sort(arr, arr + n);
	long long ans;
	ans = max((long long)(arr[n - 1] * arr[n - 2] * arr[n - 3]), (long long)arr[n - 1] * arr[n - 2]);
	long long res;
	res = max((long long)arr[0] * arr[1] * arr[n - 1], (long long)arr[0] * arr[1]);
	cout << max(ans, res);
}
