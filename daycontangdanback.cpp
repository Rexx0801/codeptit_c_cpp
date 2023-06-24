#include<iostream>
#include<vector>
using namespace std;
int arr[105];
int n, k;
int a[105];
int ok = 0;
int check(vector<int> v) {
	for (int i = 0; i < v.size() - 1; i++) {
		if (v[i] >= v[i + 1]) {
			return 0;
		}
	}
	return 1;
}
void sinh() {
	int j = k - 1;
	int i = 0;
	while (arr[j] == n - i && j >= 0) {
		j--;
		i++;
	}
	if (j == -1) {
		ok = 1;
	}
	else {
		arr[j] += 1;
		int tmp = arr[j] + 1;
		for (int i = j + 1; i < k; i++) {
			arr[i] = tmp;
			tmp++;
		}
	}
}
int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		arr[i] = i + 1;
	}
	int ans = 0;
	while (!ok) {
		vector<int> v;
		for (int i = 0; i < k; i++) {
			v.push_back(a[arr[i]-1]);
		}
		if (check(v)) {
			ans++;
		}
		sinh();
	}
	cout << ans;
}
