#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    int t; 
    cin >> t; 
    while(t--){ 
        int n, m; 
		cin>>n>>m; 
		int a[n],b[m]; 
		for(int i=0;i<n;i++) cin>>a[i]; 
		for(int i=0;i<m;i++) cin>>b[i]; 
		int z=m+n; 
		int c[z]; 
		for(int i=0;i<z;i++){ 
		    if(i<n) c[i]=a[i]; 
			else c[i]=b[i-n]; 
		} 
		sort(c,c+z); 
		for(int i=0;i<z;i++){ 
		    cout<<c[i]<<" "; 
		} 
		cout<<endl; 
	} 
}
