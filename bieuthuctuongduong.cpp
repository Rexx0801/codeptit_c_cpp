#include <bits/stdc++.h>
#define ft first
#define sd second
#define pii pair<int, int>
#define toint(a) a-'0'
#define all(a) a.begin(), a.end()
#define endl '\n'
#define pdd pair <double, double>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
string s;
void solve(){
	int n = s.length();
	stack <char> st;
	for(int i = 0; i < n; i++){
		if(s[i] == '(' && s[i-1] != '('){
			st.push(s[i-1]);
		}
		else if(s[i] == '-' || s[i] == '+'){
			if(!st.empty() && st.top() == '-'){
				if(s[i] == '+') s[i] = '-';
				else s[i] = '+';
			}
		}
		else if(s[i] == ')') st.pop();
	}
	for(char x : s){
		if(x != '(' && x != ')') cout << x;
	}
	cout << endl;
}
int main()
{
	int test; cin >> test;
	while(test--){
		cin >> s;
		solve();
	}
	return 0;
}
