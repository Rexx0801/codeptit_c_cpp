#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[10000];
		int k=0;
		for(int i=0;i<n-1;i++) cin>>a[i];
		for(int i=0;i<n-1;i++){
			if(a[i+1]-a[i]>1){
				k=a[i]+1;
			}
		}
		cout<<k<<endl;
	}
}
