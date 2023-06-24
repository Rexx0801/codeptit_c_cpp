#include<iostream>
#include<string>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int a;
		cin >> a;
		string s;
		cin >> s;
		cout << a << " ";
		int n = s.size();
		int j = n - 2;
		while (j >= 0 && s[j] >= s[j + 1]) {
			j--;
		}
		if (j == -1) {
			cout << "BIGGEST";
		}
		else {
			int k = s.size() - 1;
			while (s[k] <= s[j]) {
				k--;
			}
			swap(s[j], s[k]);
			int l = j + 1;
			int r = s.size() - 1;
			while (l <= r) {
				swap(s[l], s[r]);
				l++;
				r--;
			}
			for (int i = 0; i < s.size(); i++) {
				cout << s[i];
			}
		}
		cout << endl;
	}
}
