#include<bits/stdc++.h>
using namespace std;

int sphenic(int n){
    int res=0;
    for(int i=2;i<=sqrt(n);i++){
    	int k=0;
        while(n%i==0){
			n/=i;
			k++;
		}
		if(k>=2) return 0;
		if(k==1) res++;
	}
	if(n!=1){
		res++;
	}
    return res==3;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<sphenic(n);
		cout<<"\n";
	}
}
