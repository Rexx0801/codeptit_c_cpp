#include <bits/stdc++.h>
#define ft first
#define sd second
#define pii pair<int, int>
#define toint(a) a-'0'
#define all(a) a.begin(), a.end()
#define endl '\n'
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
string s;
int pri(char x){
	if(x == '^') return 4;
	if(x == '/' || x == '*') return 3;
	if(x == '+' || x == '-') return 2;
	return 1; 
}
void infixToPostfix(){
	stack <char> st;
	int n = s.length();
	string ans = "";
	for(int i = 0; i < n; i++){
		if(s[i] == '('){
			st.push('(');
		}
		else if(isalpha(s[i])){
			ans.push_back(s[i]);
		}
		else if(s[i] == ')'){
			while(st.top() != '('){
				ans.push_back(st.top()); st.pop();
			}
			st.pop();
		}
		else{
			while(!st.empty() && pri(s[i]) <= pri(st.top())){
				ans.push_back(st.top()); st.pop();
			}
			st.push(s[i]);
		}
	}
	while(!st.empty()){
		ans.push_back(st.top()); st.pop();
	}
	cout << ans << endl;
}
int main(){
	int test; cin >> test;
	while(test--) {
		cin >> s;
		infixToPostfix();
	}
	return 0;
}
