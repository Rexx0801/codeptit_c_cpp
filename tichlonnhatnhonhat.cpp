#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int arr[1000005];
int a[1000005];
int n, m;
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (int i = 0; i < n; i++)cin >> arr[i];
		for (int i = 0; i < m; i++)cin >> a[i];
		sort(arr, arr + n);
		sort(a, a + m);
		cout << (long long)arr[n - 1] * a[0] << endl;
	}
}
