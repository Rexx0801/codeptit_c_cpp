#include<iostream>
using namespace std ; 
int main(){
	int t; cin>>t;
	while(t--){ 
		long a,b; 
		long long c; 
		cin>>a>>b>>c;
		long i=1; 
		for(int j=0;j<b;j++){
			i=(i*a)%c; 
		} 
		cout<<i<<endl; 
	}
}
