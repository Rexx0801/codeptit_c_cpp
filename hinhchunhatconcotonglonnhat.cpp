#include<bits/stdc++.h>
using namespace std;

int kd(int a[],int n){
	int dem=0;
	int max1=0,res=0;
	for(int i=0;i<n;i++){
		max1+=a[i];
		res=max(res,max1);
		max1=max(0,max1);
	}
	return res;
}
void solve(){
	int n,m; 
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin>>a[i][j];
	}
	int res=INT_MIN;
	int tmp[n];
	for(int l=0;l<m;l++){
		memset(tmp,0,sizeof(tmp));
		for(int r=l;r<m;r++){
			for(int i=0;i<n;i++){
				tmp[i]+=a[i][r];
			}
			res=max(res,kd(tmp,n));
		}
	}
	cout<<res<<endl;
}
 
 
int main(){
	int t; 
	cin>>t;
	while(t--){
		solve();
	}
}
