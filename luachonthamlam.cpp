#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s; 
	cin>>n>>s;
	if(n==0||s==0||n*9<s) cout<<"-1 -1";
	else{
		int m=s;
		int a[n+5],b[n+5];
		for(int i=0;i<n;i++){
			if(m>9){
				a[i]=9;
				m-=9;
			}else{
				a[i]=m;
				m=0;
			}
		}
		for(int i=n-1;i>=1;i--){
			if(s>9){
			 	b[i]=9;
			 	s-=9;
			}else{
			 	if(s>1){
			 		b[i]=s-1;
			 		s=1;
				}else b[i]=0;
			}
		}
		b[0]=s;
		for(int i=0;i<n;i++) cout<<b[i];
		cout<<" ";
		for(int i=0;i<n;i++) cout<<a[i];
	}
}
