#include<iostream>
#include<stack>
using namespace std;
int ans(int a, int b, char c) {
	if (c == '+') {
		return a + b;
	}
	if (c == '-') {
		return a - b;
	}
	if (c == '*') {
		return a * b;
	}
	if (c == '/') {
		return a / b;
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		stack<int> st;
		for (int i = 0; i < s.size(); i++) {
			if (isalnum(s[i])) {
				st.push(s[i] - 48);
			}
			else {
				int a = st.top(); st.pop();
				int b = st.top(); st.pop();
				st.push(ans(b, a, s[i]));
			}
		}
		cout << st.top() << endl;
	}
}
