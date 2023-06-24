#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+1][n+1];
	for(int i=1;i<n+1;i++){
		for(int j=1;j<n+1;j++){
			cin>>a[i][j];
		}
	}
	int m;
	cin>>m;
	int b[m+1][m+1];
	for(int i=1;i<m+1;i++){
		for(int j=1;j<m+1;j++){
			cin>>b[i][j];
		}
	}
	int tmp[n][n];
	for(int i=1;i<n+1;i++){
		for(int j=1;j<n+1;j++){
			int r1=i%m==0?m:i%m;
			int r2=j%m==0?m:j%m;
			tmp[i][j]=b[r1][r2];
		}
	}
	for(int i=1;i<n+1;i++){
		for(int j=1;j<n+1;j++){
			cout<<a[i][j]*tmp[i][j]<<" ";
		}
		cout<<endl;
	}
}
