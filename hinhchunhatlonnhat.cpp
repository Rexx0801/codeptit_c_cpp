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

void Calc(int n, int H[]){
	stack <int> st;
	int i = 0;
	ll maxArea = 0;
	while(i < n){
		if(st.empty() || H[i] >= H[st.top()]){
			st.push(i);
			i++;
		}
		else{
			int id = st.top(); st.pop();
			if(st.empty()){
				maxArea = max(maxArea, H[id]*1LL*i);
			}
			else maxArea = max(maxArea, H[id]*1LL*(i - st.top()-1));
		}
	}
	while(!st.empty()){
		int id = st.top(); st.pop();
		if(st.empty()){
			maxArea = max(maxArea, H[id]*1LL*i);
		}
		else maxArea = max(maxArea, H[id]*1LL*(i - st.top()-1));
	}
	cout << maxArea << endl;
}
int main(){
	int test; cin >> test;
	while(test--)
	{
		int n; cin >> n;
		int H[n];
		for(int i = 0; i < n; i++){
			cin >> H[i];	
		}
		Calc(n , H);
	}
	return 0;
}
