#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int a[100000],b[100000];
		for(int i=0;i<m;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		sort(a,a+m);
		sort(b,b+n);
		cout<<a[m-1]*b[0]<<endl;
	}
}
