#include<bits/stdc++.h>
using namespace std;
int t,b;
string s;
char c[16];
int doi(int l,int r){
	int res=0;
	int d=1;
	for(int i=l;i<r;i++){
		res+=(s[i]-'0')*d;
		d*=2;
	}
	return res;
}
int main(){
	cin>>t;
	for(int i=0;i<=9;i++) c[i]=char(i+'0');
	for(int i=10;i<16;i++) c[i]=char(i-10+'A');
	while(t--){
		string t;
		cin>>b>>s;
		int n=s.length();
		if(b==2) b=1;
		else if (b==4) b=2;
		else if (b==8) b=3;
		else b=4;
		reverse(s.begin(),s.end());
		for(int i=0;i<n;i+=b) t=c[doi(i,min(n,i+b))]+t;
		cout<<t<<endl;
	}
}
