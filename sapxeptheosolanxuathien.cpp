#include<bits/stdc++.h>
using namespace std;
int a[1001],b[1001],c[1001];
int dem=0,n;

void cnt(){
	int x=0;
	a[n]=0;
	for(int i=0;i<n;i++){
		x++;
		if(a[i]!=a[i+1]){
			b[dem]=a[i];
			c[dem]=x;
			dem++;
			x=0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		cnt();
		for(int i=0;i<dem;i++){
			for(int j=0;j<dem-1;j++){
				if(c[j]<c[j+1]){
					swap(c[j],c[j+1]);
					swap(b[j],b[j+1]);
				}
			}
		}
		for(int i=0;i<dem;i++){
			for(int j=0;j<c[i];j++){
				cout<<b[i]<<" ";
			}
		}
		dem=0;
		cout<<endl;
	}
}
