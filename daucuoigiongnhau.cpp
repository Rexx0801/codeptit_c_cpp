#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int dem=0;
		for(int i=0;i<s.size();i++){
			for(int j=s.size()-1;j>=i;j--){
				if(s[i]==s[j]){
					dem++;
				}
			}
		}
		cout<<dem<<endl;
	}
}
