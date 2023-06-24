#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[105];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		vector<int>adj[105];
		int cnt = 1;
		for (int i = 0; i < n; i++) {
			int check = 0;
			for (int j = 0; j < n - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					swap(arr[j], arr[j + 1]);
					check = 1;
				}
			}
			if (!check) {
				break;
			}
			for (int i = 0; i < n; i++) {
				adj[cnt].push_back(arr[i]);
			}
			cnt++;
		}
		for (int i = cnt - 1; i >= 1; i--) {
			cout << "Buoc " << i << ": ";
			for (auto v : adj[i]) {
				cout << v << " ";
			}
			cout << endl;
		}
	}
}
