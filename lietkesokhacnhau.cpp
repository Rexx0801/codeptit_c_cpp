#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				a[j]=0;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]!=0) cout<<a[i]<<" ";
	}
}
