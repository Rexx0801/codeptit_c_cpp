#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n;
	int arr[105];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	vector<int> adj[105];
	int cnt = 1;
	for (int i = 0; i < n - 1; i++) {
		int minn = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minn]) {
				minn = j;
			}
		}
		if (minn != i) {
			swap(arr[i], arr[minn]);
		}
		for (int j = 0; j < n; j++) {
			adj[cnt].push_back(arr[j]);
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
