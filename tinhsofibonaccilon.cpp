#include <iostream> 
#include <math.h> 

using namespace std; 

int main(){
	const long r=pow(10,9)+7; 
	int t; 
    long n; 
    long f[1001]; 
    cin >> t;
	while(t --){ 
	    cin>>n;
		f[0]=0; 
		f[1]=1; 
		for(long i=2;i<=n;i++) f[i] = f[i-1] + f[i-2]; 
		cout<<f[n]%r<<endl; 
	} 
}
