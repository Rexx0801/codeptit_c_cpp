#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int x=s.size()-1;
		int a[20];
		for(int i=0;i<=x;i++){
			a[i]=s[i]-'0';
		}
		int nho=0;
		while(x>0){
			if(a[x]>=5){
				a[x]=0;
				a[x-1]=a[x-1]+1+nho; 
				nho=0;
			}else{
				a[x]=0;
				a[x-1]+=nho;
				nho=0;
			}
			if(a[x-1]==10&&x!=1){
				a[x-1]=0;
				nho=1;
			}
			x--;
		}
		for(int i=0;i<s.size();i++) cout<<a[i];
		cout<<endl;
	}
}
