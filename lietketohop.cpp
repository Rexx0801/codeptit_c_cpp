#include<iostream>
#include<vector>
#include<set>
using namespace std;
int n, k;
int arr[25];
int a[1000];
int ok = 1;
vector<int> v;
void sinh() {
	int j = k - 1;
	int i = 0;
	while (arr[j] == v.size() - i&&j>=0) {
		j--;
		i++;
	}
	if (j == -1) {
		ok = 0;
	}
	else {
		arr[j] += 1;
		int x = arr[j] + 1;
		for (int u = j + 1; u < k; u++) {
			arr[u] = x;
			x++;
		}
	}
}
int main() {
	cin >> n >> k;
	set<int> s;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s.insert(a[i]);
	}
	for (auto a : s) {
		v.push_back(a);
	}
	for (int i = 0; i<k; i++) {
		arr[i] = i +1;
	}
	while (ok) {
		for (int i = 0; i < k; i++) {
			cout << v[arr[i]-1] << " ";
		}
		cout << endl;
		sinh();
	}
}
