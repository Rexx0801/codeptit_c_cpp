#include<bits/stdc++.h>
using namespace std;
const int N=10000005;
int t,a[N],n,d;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>d;
		d%=n;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=d+1;i<=n;i++) cout<<a[i]<<" ";
		for(int i=1;i<=d;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
