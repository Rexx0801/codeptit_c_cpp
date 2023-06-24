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
		sort(a,a+n);
		int min=a[n-1]-a[n-2];
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]-a[j]>=0&&a[i]-a[j]<min){
					min=a[i]-a[j];
				}if(a[j]-a[i]>=0&&a[j]-a[i]<min){
					min=a[j]-a[i];
				}
			}
		}
		cout<<min<<endl;
	}
}
