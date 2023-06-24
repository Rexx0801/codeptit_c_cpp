#include<iostream>
#include<map>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		map<char, int>mp;
		for (auto a : s) {
			mp[a]++;
		}
		int x = 0;
		for (auto b : mp) {
			x = max(x, b.second);
		}
		if (x-1 <= s.size() - x) {
			cout << 1;
		}
		else {
			cout << -1;
		}
		cout << endl;
	}
}
