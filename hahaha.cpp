#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int arr[25];
int n;
int ok = 1;
int check() {
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] == 0 && arr[i +1] == 0) {
			return 0;
		}
	}
	return 1;
}
void sinh() {
	int j = n - 1;
	while (arr[j] == 1 && j >= 0) {
		arr[j] = 0;
		j--;
	}
	if (j == -1) {
		ok = 0;
	}
	else {
		arr[j] = 1;
	}
}
//H=0 A=1
int main() {
	int t;
	cin >> t;
	while (t--) {
		ok = 1;
		int k;
		cin >> n;
		for (int i = 0; i < n; i++) {
			arr[i] = 0;
		}
		vector<string>ans;
		while (ok) {
			if (arr[0] == 0 && arr[n - 1] == 1&&check()) {
				string tmp = "";
				for (int i = 0; i < n; i++) {
					if (arr[i] == 0) {
						tmp += "H";
					}
					else {
						tmp += "A";
					}
				}
				ans.push_back(tmp);
			}
			sinh();
		}
		sort(ans.begin(), ans.end());
		for (auto v : ans) {
			cout << v << endl;
		}
	}
}
