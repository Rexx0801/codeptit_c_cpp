#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int dem=0;
	long long a[1000][10];
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++) cin>>a[i][j];
	}
	for(int i=0;i<n;i++){
		int dem0=0,dem1=0;
		for(int j=0;j<3;j++){
			if(a[i][j]==0){
				dem0++;
			}
			if(a[i][j]==1){
				dem1++;
			}
		}
		if(dem1>dem0) dem++;
	}
	cout<<dem;
}
