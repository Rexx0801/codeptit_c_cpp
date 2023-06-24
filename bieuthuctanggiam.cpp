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

int main()
{
	int test; cin >> test;
	while(test--)
	{
		string s; cin >> s;
		s = " " + s;
		int n = s.length();
		stack <int> st;
		for(int i = 1; i <= n; i++){
			if(s[i] == 'D'){
				st.push(i);
			}
			else if(i == n || s[i] == 'I'){
				cout << i;
				while(!st.empty()){
					cout << st.top(); st.pop();
				}
			}
		}
		cout << endl;
	}
	return 0;
}
