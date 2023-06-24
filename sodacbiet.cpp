#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int t;
long long n,k;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		long long res=0;
		for(int i=29;i>=0;i--){
			res=(res*n)%mod;
			if((k>>i)&1) res=(res+1)%mod;
		}
		cout<<res<<endl;
	}
}

