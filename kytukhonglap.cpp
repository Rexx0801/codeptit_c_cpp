#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a[1000]={0};
		for(int i=0;i<s.size();i++){
			a[s[i]]++;
		}
		for(int i=0;i<s.size();i++){
			if(a[s[i]]==1){
				cout<<s[i];
			}
		}
		cout<<endl;
	}
}
