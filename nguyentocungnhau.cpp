#include <bits/stdc++.h>
using namespace std;

int ngTo(int n) {
	if(n<2) return 0;
	if(n==2||n==3) return 1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int gcd(int a,int b) {
	if(b==0) return a;
	return gcd(b,a%b);
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,dem=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			if(gcd(i,n)==1) dem++;
		}
		if(ngTo(dem)==1) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}
