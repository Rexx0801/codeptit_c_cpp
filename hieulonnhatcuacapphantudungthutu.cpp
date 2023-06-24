#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int max=a[1]-a[0];
		int result=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]>a[i]){
					if(max<a[j]-a[i]){
						max=a[j]-a[i];
						result=a[j];
					}
				}
			}
		}
		if(result==0) cout<<"-1"<<endl;
		else cout<<max<<endl;
	}
}
