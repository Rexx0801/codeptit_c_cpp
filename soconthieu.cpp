#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n-1;i++){
			cin>>a[i];
		}
		int num,k=0;
		for(int i=0;i<n-1;i++){
			if(a[i]!=i+1&&k==0){
				num=i+1;
				k=1;	
			}
		}
		cout<<num<<endl;
	}
}
