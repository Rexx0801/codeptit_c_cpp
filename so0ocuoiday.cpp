#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int in, danhdau = 0;
		vector <int> a;
		vector <int> b;
		for (int i = 0; i < n; i++) {
			cin >> in;
			a.push_back(in);
		}
		for (int i = 0; i < n; i++) {
			if (a[i] != 0) {
				b.push_back(a[i]);
				danhdau = i;
			}
		}
		sort(b.begin(), b.end());
		b.resize(a.size());
		for (int i = danhdau; i < n; i++) {
			b[i] = 0;
		}
		for (int i = 0; i < n; i++) {
			cout << b[i] << " ";
		}
		cout << endl;
	}
}
