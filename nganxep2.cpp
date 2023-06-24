#include<iostream>
#include<stack>
using namespace std;
int main() {
	int n;
	cin >> n;
	stack<int> st;
	while (n--) {
		string s;
		cin >> s;
		if (s == "PUSH") {
			int a;
			cin >> a;
			st.push(a);
		}
		if (s == "POP") {
			if (!st.empty()) {
				st.pop();
			}
		}
		if (s == "PRINT") {
			if (!st.empty()) {
				cout << st.top();
			}
			else {
				cout << "NONE";
			}
			cout << endl;
		}
	}
}
