#include<iostream>
#include<vector>
using namespace std;
int a[1000000];
void merge(int a[10000], int l, int m, int r) {
	vector<int> x(a + l, a + m + 1);
	vector<int> y(a + m + 1, a + r + 1);
	int i = 0;
	int j = 0;
	while (i < x.size() && j < y.size()) {
		if (x[i] < y[j]) {
			a[l] = x[i];
			l++;
			i++;
		}
		else {
			a[l] = y[j];
			j++;
			l++;
		}
	}
	for (int j = i; j < x.size(); j++) {
		a[l] = x[j];
		l++;
	}
	for (int i = j; i < y.size(); i++) {
		a[l] = y[i];
		l++;
	}
}
void mergesort(int a[10000], int l, int r) {
	if (l >= r) {
		return;
	}
	int m = (l + r) / 2;
	mergesort(a, l, m);
	mergesort(a, m + 1, r);
	merge(a, l, m,r);
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		mergesort(a, 0, n - 1);
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
