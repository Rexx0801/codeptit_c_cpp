#include<iostream>
#include<cmath>
using namespace std;

int soNgto(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int m,n,p;
	cin>>m>>n;
	if(m>0&&n>0){
		if(m>n){
			m=n;n=p;p=m;
		}
	}
	for(int i=m;i<=n;i++){
		if(soNgto(i)){
			cout<<i<<" ";
		}
	}
	cout<<"\n";
}

