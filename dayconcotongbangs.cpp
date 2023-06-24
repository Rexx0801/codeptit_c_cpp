#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int f[40005];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, s;
		cin >> n >> s;
		memset(f, 0, sizeof(f));
		int arr[205];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		f[0] = 1;
		for (int i = 0; i < n; i++) {
			vector<int> v;
			for (int j = 1; j <= s; j++) {
				if (f[j] == 0 && j >= arr[i]) {
					if (f[j - arr[i]] == 1) {
						v.push_back(j);
					}
				}
			}
			for (auto a : v) {
				f[a] = 1;
			}
		}
		if (f[s]) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
		cout << endl;
	}
}
