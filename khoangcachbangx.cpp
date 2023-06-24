#include<bits/stdc++.h>
using namespace std;

int ktra(int a[],int n,int x){
	int kt[100000]={0};
	for(int i=0;i<n;i++){
    	kt[a[i]]++;
  	}
  	sort(a,a+n);
  	if(a[n-1]-a[0]<x) return 0;
  	for(int i=0;i<n;i++){
    	if(kt[x+a[i]]!=0){
      		return 1;
      	 	break;
    	}
	}
  	return 0;
}

int main(){
  	int t;
  	cin>>t;
  	while(t--){
  		int n,x;
  		cin>>n>>x;
  		int a[n];
  		for(int i=0;i<n;i++){
    		cin>>a[i];
  		}
  		if(ktra(a,n,x)==1) cout<<"1"<<endl;
  		else cout<<"-1"<<endl;
  	}
}
