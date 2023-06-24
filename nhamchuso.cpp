#include<iostream>
#include<string>
using namespace std;
string max(string s) {
	string ans = "";
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '5') {
			ans += '6';
		}
		else {
			ans += s[i];
		}
	}
	return ans;
}
string min(string s) {
	string ans = "";
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '6') {
			ans += '5';
		}
		else {
			ans += s[i];
		}
	}
	return ans;
}
int main() {
	string s, s1;
	cin >> s >> s1;
	cout << stoll(min(s)) + stoll(min(s1))<<" ";
	cout << stoll(max(s)) + stoll(max(s1));
}
