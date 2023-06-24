#include<bits/stdc++.h>
using namespace std;

int a[100][100];
void hcn(int m,int n,int *max){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>0){
				int d=0;
				for(int k=0;k<n;k++){
					if(a[i][k]>=a[i][j]){
						d+=a[i][j];
					}
				}
				if((*max)<d) *max=d;
			}
		}
	}
}
void hcn1(int m,int n,int max){
	for(int j=0;j<n;j++){
		for(int i=0;i<m;i++){
			if(a[i][j]>0){
				for(int k=i+1;a[k][j]==1&&k<m;k++){
					a[i][j]++;						
				}
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int r[m]={};
		int max=0;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
				r[i]+=a[i][j];
			}
			if(max<r[i]) max=r[i];
		}
		hcn1(m,n,max);
		hcn(m,n,&max);
		cout<<max<<endl;
	}
} 


