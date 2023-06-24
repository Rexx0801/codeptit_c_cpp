#include<bits/stdc++.h>
using namespace std;

bool prime(unsigned long long n){ 
	if(n<2) return 0; 
    if(n<=3) return 1; 
 	if(n%2==0||n%3==0) return 0; 
  	for(long long i=5;i*i<=n;i=i+6) 
        if(n%i==0||n%(i+2)==0) 
            return 0; 
    return 1; 
} 
int main() {
    int t; 
	cin>>t;
    while(t--){
        unsigned long long n,m; 
		cin>>n>>m;
		int dem=0;
        for(long long i=sqrt(n);i<=sqrt(m);i++){
            if(prime(i)){
            	dem++;
            }
        }
        cout<<dem<<endl;
    }
}
