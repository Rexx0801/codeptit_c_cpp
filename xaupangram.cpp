#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int k,dem=0;
		cin>>s>>k;
		bool check[1000]={false};
		for(int i=0;i<s.size(); i++){
		    check[s[i]]=true;
		}
		for(int i='a';i<='z';i++){
		    if(!check[i]){
			    dem++;
			}
		}
		if(k>=dem) cout<<1;
		else cout<<0;
		cout<<endl;
	}
}
