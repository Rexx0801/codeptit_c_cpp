#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int arr[1000005];
int a[1000005];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			a[i] = arr[i];
		}
		sort(arr, arr + n);
		int i = 0;
		int j = n - 1;
		while (a[i] == arr[i]) {
			i++;
		}
		while (a[j] == arr[j]) {
			j--;
		}
		cout << i+1 << " " << j+1;
		cout << endl;
	}
}
