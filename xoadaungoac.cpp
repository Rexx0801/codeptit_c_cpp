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
vector <int> op, cl;
int len = 0, b[201], flag = 0;
set <string> se;

void print(){
	if(flag == 0){
		flag = 1;
		return;
	}
	string tmp;
	for(int i = 0; i < s.length(); i++){
		if(b[i] == 0){
			tmp.push_back(s[i]);
		}
	}
	se.insert(tmp);
}
void Try(int i){
	for(int j = 0; j < 2; j++){
		b[op[i]] = j;
		b[cl[i]] = j;
		if(i == len-1)
			print();
		else Try(i+1);
	}
}
void solve(){
	int n = s.length();
	stack <int> st;
	for(int i = 0; i < n; i++){
		if(s[i] == '(') st.push(i);
		else if(s[i] == ')'){
			op.push_back(st.top()); st.pop();
			cl.push_back(i);
		}
	}
	len = op.size();
	Try(0);
	for(string x : se){
		cout << x << endl;
	}
}
int main()
{
	int test; test = 1;
	while(test--){
		cin >> s;
		solve();
	}
	return 0;
}
