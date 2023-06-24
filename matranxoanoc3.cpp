#include<bits/stdc++.h> 
using namespace std; 

int main(){ 
	int t; 
	cin>>t; 
	while(t--){ 
		int m,n,k; 
		cin>>m>>n>>k; 
		int a[m][n]; 
		for(int i=0;i<m;i++){ 
			for(int j=0;j<n;j++){ 
				cin>>a[i][j]; 
			} 
		} 
		int dong=m,cot=n,l=0,p=0; 
		int b[m*n]; 
		while(l<m*n){ 
			for(int i=p;i<cot;i++) b[l++]=a[p][i]; 
			for(int i=p+1;i<dong;i++) b[l++]=a[i][cot-1]; 
			for(int i=cot-2;i>=p;i--) b[l++]=a[dong-1][i]; 
			for(int i=dong-2;i>p;i--) b[l++]=a[i][p]; 
			p++;
			dong--; 
			cot--; 
		}
		cout<<b[k-1];
		cout<<endl; 
	}
}
