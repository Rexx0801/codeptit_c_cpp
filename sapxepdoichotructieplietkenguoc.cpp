#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		int arr[105];
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		vector<int> adj[1005];
		int cnt = 1;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (arr[i] > arr[j]) {
					swap(arr[i], arr[j]);
				}
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
