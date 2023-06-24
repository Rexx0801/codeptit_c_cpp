#include<bits/stdc++.h>
using namespace std;

int main(){
  	int t;
  	cin>>t;
  	while(t--){
  		long long a[100000],dp[100000]={0};
  		int n;
  		cin>>n;
  		for(int i=0;i<n;i++) cin>>a[i];
  		for(int i=0;i<n;i++){
    		dp[0]=a[0];
    		dp[1]=max(a[1],a[0]);
    	}
  		for(int i=2;i<n;i++){
    		dp[i]=max(dp[i-2]+a[i],dp[i-1]);
  		}
  		cout<<dp[n-1]<<endl;
  	}
}
