#include<iostream>
#include<algorithm>
using namespace std;
int arr[55];
int a[55];
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
		sort(a, a + n);
		int check = 1;
		for (int i = 0; i < n / 2; i++) {
			if ((arr[i] == a[i] && arr[n - 1 - i] == a[n - 1 - i]) || (arr[i] == a[n - 1 - i] && arr[n - 1 - i] == a[i])) {
				continue;
			}
			else {
				check = 0;
				break;
			}
		}
		if (check) {
			cout << "Yes";
		}
		else {
			cout << "No";
		}
		cout << endl;
	}
}	
