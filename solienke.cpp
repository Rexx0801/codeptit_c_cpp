#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int m,p,dem=0;
		m=n%10;
		n=n/10;
		while(n>0){
			p=n%10;
			if(abs(m-p)!=1){
				dem++;
		    }
		    m=p;
			n=n/10;
		}if(dem==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
