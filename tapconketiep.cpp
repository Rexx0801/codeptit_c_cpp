#include <bits/stdc++.h>
using namespace std;
int a[1005],n,k;
void sinh(){
	int i=k;
	while(i>0&&a[i]==n+i-k) 
		i--;
		a[i]++;
	if(i>0){
		for(int j=i+1;j<=k;j++)
			a[j]=a[i]+j-i;
	}
	else{
		for(int j=i+1;j<=k;j++)
			a[j]=a[i]+j-i-1;
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=k;i++) cin>>a[i];
		sinh();
	    for(int i=1;i<=k;i++) 
	    	cout<<a[i]<<" ";
	    	cout<<endl;
	}
}

