#include<bits/stdc++.h> 
using namespace std; 

int main(){ 
    int t; 
	cin>>t; 
	while(t--){ 
	    int n,k; 
		cin>>n>>k; 
		int a[10000]; 
		for(int i=1;i<=n;i++){ 
		    cin>>a[i]; 
		} 
		int dem=-1; 
		for(int i=n;i>=1;i--){ 
		    if(a[i]==k){ 
			    dem=i; 
		} 
	} 
	cout<<dem<<endl; 
	} 
}
