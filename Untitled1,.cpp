#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int ans=0;
		for(int i=0;i<n;i++){
			if(a[i]==k){
				ans=i+1;
				break;
			}
		}
		if(ans==0){
			cout<<"NO"<<endl;
		}else{
			cout<<ans<<endl;
		}
	}
}
