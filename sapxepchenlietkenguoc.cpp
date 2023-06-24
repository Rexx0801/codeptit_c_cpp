#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	int arr[105];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int ans[105];
	int cnt = 0;
	vector<int> adj[1005];
	for (int i = 0; i < n; i++) {
		if (cnt == 0) {
			ans[0] = arr[i];
			cnt++;
			adj[i].push_back(arr[0]);
		}
		else {
			int j = cnt;
			while (arr[i] < ans[j - 1] && j - 1 >= 0) {
				j--;
				ans[j + 1] = ans[j];
			}
			ans[j] = arr[i];
			cnt++;
			for (int k = 0; k < cnt; k++) {
				adj[i].push_back(ans[k]);
			}
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		cout << "Buoc " << i << ": ";
		for (auto v : adj[i]) {
			cout << v << " ";
		}
		cout << endl;
	}
}
