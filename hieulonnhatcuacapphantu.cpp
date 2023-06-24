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
		int result=0;
		int temp;
		int temp1=0;
		for(int i=n-1;i>=0;i--){
			for(int j=0;j<i;j++){
				if(a[i]-a[j]>0){
					temp=a[i]-a[j];
					if(temp>temp1){
						temp1=temp;
						result=a[i];
					}
				}
			}
		}
		if(result==0){
			cout<<"-1"<<endl;
		}else{
			cout<<temp1<<endl;
		}
	}
}
