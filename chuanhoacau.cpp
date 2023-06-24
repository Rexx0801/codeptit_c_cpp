#include<bits/stdc++.h>
#define then
using namespace std;
const int mod=1e9+7;
const int N=10000005;
string s;
int check(char c){
	if(c=='.'||c=='!'||c=='?') return 1;
	if(c==' ') return 0;
	return 2;
}
int main(){
	while(getline(std::cin,s)){
		bool kt=0,kt2=0,kt3=0;
		for(int i=0;i<s.length();i++){
			int t=check(s[i]);
			if(t==0) kt=1;
			else if(t==1){
				cout<<s[i];
				kt2=1;
				kt3=0;
			}
			else if(t==2){
				kt2=0;
				if(kt==1) cout<<' ',kt=0;
				if(kt==0) cout<<char(toupper(s[i])),kt3=1;
				else cout<<char(tolower(s[i]));
			}
		}
		if(kt2==0) cout<<'.';
		cout<<endl;
	}
}
