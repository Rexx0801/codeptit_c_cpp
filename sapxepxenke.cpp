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
		int x=n-1,y=0,b[n];
		for(int i=0;i<n;i++){
			if(i%2==0){
				b[i]=a[x];
				x--;
			}else{
				b[i]=a[y];
				y++;
			}
		}
		for(int i=0;i<n;i++){
			cout<<b[i]<<" ";
		}
		cout<<"\n";
	}
}
