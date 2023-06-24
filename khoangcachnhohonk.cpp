#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; 
	cin>>t;
	while(t--){
		int n,k; 
		cin>>n>>k;
		int a[n+5];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long dem=0;
		sort(a,a+n);
		int x=0;
		for(int i=1;i<n;i++){
			while(a[i]-a[x]>=k) x++;
			dem+=(i-x);
		} 
		cout<<dem<<endl;
	}
}
