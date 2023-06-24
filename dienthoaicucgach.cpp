#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int k=0;
		for(int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		}
		for(int i=0;i<s.size();i++){
			if(s[i]>='a'&&s[i]<='c') s[i]=2;
			if(s[i]>='d'&&s[i]<='f') s[i]=3;
			if(s[i]>='g'&&s[i]<='i') s[i]=4;
			if(s[i]>='j'&&s[i]<='l') s[i]=5;
			if(s[i]>='m'&&s[i]<='o') s[i]=6;
			if(s[i]>='p'&&s[i]<='s') s[i]=7;
			if(s[i]>='t'&&s[i]<='v') s[i]=8;
			if(s[i]>='w'&&s[i]<='z') s[i]=9;
		}
		for(int i=0;i<s.size();i++)	{
			if(s[i]!=s[s.size()-1-i]){
				cout<<"NO"<<endl;
				k=1;
				break;
			}
		}
		if(k==0)
			cout<<"YES"<<endl;
	}
}
