#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		int k=n%2;
		for(int i=0;i<n;i++){
			if(i%2==0) cout<<a[i/2]<<" ";
			else cout<<a[n/2+k+i/2]<<" ";
		}
		cout<<endl;
	}
}

