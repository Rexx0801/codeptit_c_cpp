#include<iostream>
#include<string>
using namespace std;
char sub(char a, char b) {
	if (b == '1' && a == '0') {
		return '1';
	}
	if (b == '0' && a == '0') {
		return '0';
	}
	if (b == '1' && a == '1') {
		return '0';
	}
	if (b == '0' && a == '1') {
		return '1';
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		char ans[25];
		ans[0] = s[0];
		for (int i = 1; i < s.size(); i++) {
			ans[i] = sub(ans[i - 1], s[i]);
		}
		for (int i = 0; i < s.size(); i++) {
			cout << ans[i];
		}
		cout << endl;
	}
}
