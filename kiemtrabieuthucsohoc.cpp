#include<iostream>
#include<string>
#include<stack>
using namespace std;
int kt(char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/'||c=='^') {
		return 1;
	}
	return 0;
}
int check(string s) {
	stack<char>st;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ')') {
			st.push(s[i]);
		}
		else {
			int check = 0;
			while (st.top() != '(') {
				if (kt(st.top())) {
					check = 1;
				}
				st.pop();
			}
			st.pop();
			if (check == 0) {
				return 1;
			}
		}
	}
	return 0;
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string s1;
		getline(cin, s1);
		string s = "";
		for (int i = 0; i < s1.size(); i++) {
			if (!isblank(s1[i])) {
				s += s1[i];
			}
		}
		if (check(s)) {
			cout << "Yes";
		}
		else {
			cout << "No";
		}
		cout << endl;
	}
}
