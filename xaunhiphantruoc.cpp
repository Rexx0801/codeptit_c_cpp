#include<string>
#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int j = s.size() - 1;
		while (s[j] == '0' && j >= 0) {
			s[j] = '1';
			j--;
		}
		if (j == -1) {
			cout << string(s.size(), '1');
		}
		else {
			s[j] = '0';
			for (int i = 0; i < s.size(); i++) {
				cout << s[i] ;
			}
		}
		cout << endl;
	}
}
