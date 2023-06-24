#include<iostream>
#include<map>
using namespace std;
int arr[100005];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			mp[arr[i]]++;
		}
		int check = 0;
		for (int i = 0; i < n; i++) {
			if (mp[arr[i]] >= 2) {
				cout << arr[i];
				check = 1;
				break;
			}
		}
		if (!check) {
			cout << "NO";
		}
		cout << endl;
	}
}
